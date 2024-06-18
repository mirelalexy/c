/*Să se scrie programul care face comutarea elementelor egal depărtate de capetele unui vector şi afişarea
vectorului obţinut.
Secvenţa folosită pentru comutare este : aux=x[i]; x[i]=x[n-i-1];x[n-i-1]=aux , i=1, n/2*/

#include "stdio.h"
#include "stdio.h"
#include <conio.h>
void main(void){
int x[50],i,aux, n;
/* citirea elementelor vectorului */
printf("\n lungimea sirului n<50 este:"); scanf("%d",&n); printf("\n Vectorul initial este:");
for (i=0;i<n;i++){ printf("\n x[%d]=",i);scanf("%d",&x[i]); }
/* comutarea elementelor vectorului x */
for (i=0;i<n/2;i++){
aux=x[i];
x[i]=x[n-i-1];
x[n-i-1]=aux;
}
/* afisarea vectorului comutat */
printf("\n Vectorul comutat este:");
for (i=0;i<n;++i){
printf("\nx[%i]=%i",i,x[i]); }
getch();
}
