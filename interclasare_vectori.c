/*Să se scrie programul care realizează interclasarea a doi vectori de dimensiuni variabile.
Prin interclasare se înţelege procesul de obţinere din două sau mai multe mulţimi ordonate o nouă mulţime, ordonată
după acelaşi criteriu. Metoda presupune compararea a două elemente, câte unul din fiecare vector iniţial, cu scrierea
celui mai mic dintre ele în vectorul rezultat şi trecerea la următorul element al vectorului iniţial din care s-a preluat.
Procesul de comparare se încheie când s-a epuizat unul din vectorii iniţiali. În continuare, elementele netransferate ale
celuilalt vector iniţial se copiază în vectorul rezultat.*/

#include<stdio.h>
void main()
{
int m,n, j, p;
float x[100], y[200], z[300];
printf("Introduceti dimensiunea primului vector, m=");
scanf("%d",&m);
for(int i=0;i<m;i++)
{
    printf("x[%d]=",i); 
    scanf("%f", &x[i]);
}
printf("Introduceti dimensiunea vectorului doi, n=");
scanf("%d",&n);
for(int i=0;i<n;i++)
{
    printf("y[%d]=",i);
    scanf("%f", &y[i]);
}
int i = 0; j = 0; p = 0;
while ((i<m) && (j<n))
    if(x[i]<y[j])
        z[p++] = x[i++]; // sau z[p]=x[i]; p++;i++;
    else z[p++] = y[j++];

if(i == m)
    for (i=j;i<n;i++) z[p++] = y[i++];
else
    for (j=i;j<m;j++) z[p++]=x[j];

printf("Vectorul rezultat este: \n");

for (i=0;i<p;i++)printf("%4.2f ", z[i]);
}