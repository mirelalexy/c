/*Să se verifice dacă matricea A de ordinul n este un pătrat magic.
Matricea reprezintă un pătrat magic dacă sumele elementelor de pe fiecare linie sunt egale cu sumele elementelor de pe
fiecare coloană şi de pe cele două diagonale.*/

#include<stdio.h>
#include<conio.h>

void main()
{
int n,m,p,q,j,i,k,ss,sd, gas;
int a[100][100],sl[100],sc[100];
printf("\n Matricea ");
printf("\nNr de linii/coloane = ");scanf("%d",&n);
for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    {
        printf("a[%d][%d]= ",i,j); scanf("%d",&a[i][j]);
    }

sd=0;ss=0;

for (i=0;i<n;i++)
{
    (sd)+=a[i][i]; (ss)+=a[i][n-i-1];
}

if (ss==sd)
{
 for(i=0;i<n;i++)
 { 
    sl[i]=0;
    for(j=0;j<n;j++) sl[i]+=a[i][j];
 }
 for(i=0;i<n;i++)
 {
    sc[i]=0;
    for(j=0;j<n;j++) sc[i]+=a[j][i];
 }
 gas=0;
 for (i=0;i<n;i++) if (sl[i]!=sc[i]) gas=1;
 if (gas) printf("Matricea nu este un patrat magic.");
 else printf("Matricea este un patrat magic.");
}

getch();

}