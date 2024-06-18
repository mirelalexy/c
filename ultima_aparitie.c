/*Să se scrie programul pentru determinarea poziţiei ultimei apariţii a unei valori date într-un vector
neordonat, de dimensiune n.
Vectorul se parcurge secvenţial într-o structură FOR, de la primul la ultimul element, reţinând în aceeaşi variabilă (POZ)
valoarea curentă a indicelui, în cazul identităţii elementului cu valoarea căutată. Dacă variabila POZ are valoarea -1 la
sfârşitul ciclării, valoarea căutată nu a fost regăsită printre elementele vectorului şi se afişează un mesaj corespunzător.*/

#include<stdio.h>

void main(){
float v[10], a;int n,i,poz;
printf("n=");scanf("%d",&n);
for(i=0;i<n;i++){printf("v(%d)=",i);scanf("%f",&v[i]);}
printf("Introduceti valoarea cautata:"); scanf("%f", &a);
poz=-1;
for(i=0;i<n;i++)
if (v[i]==a) poz=i;
if (poz==-1) printf("valoare negasita");
else printf("pozitia este:%d",poz);
}