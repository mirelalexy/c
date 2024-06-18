/*La un concurs de patinaj artistic se cunosc cele n note obţinute de un concurent. Să se calculeze punctajul
lui, ştiind că la determinarea mediei nu se iau în calcul nota cea mai mică şi nota cea mai mare obţinute.
Vectorul asociat notelor obţinute de un concurent se parcurge secvenţial într-o structură FOR, de la primul la ultimul
element şi se determină elementul minim şi elementul maxim. Se calculează punctajul lui ca raport între suma notelor care
sunt diferite de nota cea mai mică şi nota cea mai mare şi numărul notelor.*/

#include <stdio.h>
#include <conio.h>
void main(){
double note[10], total, media, min, max;int n,k=0;
printf("Numarul de note: ");scanf("%d",&n);
for(int i=0;i<n;i++){printf("Nota %d: ",i+1);scanf("%lf",&note[i]);}
total=0.0;min=max=note[0];
//se determina nota maxima si nota minima
for(int i=0;i<n;i++){
if(note[i]>max)max=note[i];
if(note[i]<min)min=note[i];
}
for(int i=0;i<n;i++){
if((note[i]!=max) && (note[i]!=min)){total+=note[i];k++;}
}
if(k!=0){media=total/k;printf("Punctajul este: %.2lf \n",media);}
else{printf("Notele sint egale sau doar minim si maxim\n");}
}