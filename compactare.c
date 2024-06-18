/*Dându-se un vector de maxim 100 de elemente, să se scrie programul pentru transformarea vectorului
în mulţime, prin eliminarea dublurilor (operaţia de compactare).
Pentru eliminarea dublurilor se procedează astfel: se parcurge vectorul de la primul şi până la penultimul element şi se
compară cu elementele situate în dreapta sa. Dacă elementul mai este găsit se realizează deplasarea valorilor cu o poziţie
spre stânga şi se decrementează numărul total.*/
#include<stdio.h>
void main(){
int n,i,j,k; float x[100];
printf("Dimensiunea vectorului:");scanf("%d",&n);
for(i=0;i<n;i++){printf("x[%d]=",i); scanf("%f", &x[i]);}
for(i=0;i<n-1;i++)
for(j=i+1;j<n;j++)
if(x[i] == x[j]){for(k=j;k<n-1;k++) x[k] = x[k+1];n--;j--;}
printf("Vectorul rezultat este: \n");
for (i=0;i<k;i++) printf("%5.2f", x[i]);
}
