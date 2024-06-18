/*Să se scrie programul care calculează dispersia şi abaterea medie pătratică a elementelor unui şir de
observaţii statistice.*/

#include<stdio.h>
#include<math.h>

void main()
{
int n, f[100],j,k; // f = vectorul de frecvente
float x[100], el[100]; // el = vectorul cu valori distincte

printf("Introduceti dimensiunea vectorului:");
scanf("%d",&n);

for(int i=0;i<n;i++){
    printf("x[%d]=",i); 
    scanf("%f", &x[i]);
}

k=0;
for(int i=0;i<n;i++){
    j=0;
    while ((j<k) && el[j] != x[i])j++;
    if(j == k){
        el[k] = x[i];
        f[k] = 1; k++;
    }
    else f[j]++;
}

float med = 0, dispersia = 0, abaterea = 0;

for(int i=0;i<k;i++) med+=el[i]*f[i]; med /=n;

for(int i=0;i<k;i++) dispersia +=(float)pow(el[i]-med,2)*f[i];
dispersia = dispersia/n; //dispersia /=n;
abaterea = (float)sqrt(dispersia);
printf("Elementele distincte:");
for(int i=0;i<k;i++) printf("%4.2f ", el[i]);
printf("\nFrecventele lor:");
for(int i=0;i<k;i++) printf("%d ", f[i]);
printf("\n\n Media = %4.2f, dispersia = %4.2f, abaterea medie patratica = %4.2f", med,
dispersia, abaterea); 

}