/*Fie o matrice de dimensiuni mxn, reprezentând vânzările valorice a m produse într-o perioadă de n zile.
Să se scrie programul care afişează zilele în care nu s-au înregistrat vânzări.*/

#include<stdio.h>
#include<conio.h>
void main()
{
int a[100][100],i,j,k,n,m,ct[100],l,gas;
printf("Nr de produse ");scanf("%d",&m);
printf("Nr de zile ");scanf("%d",&n);
for(i=0;i<m;i++)
for(j=0;j<n;j++)
{
 printf("a[%d][%d]= ",i,j);scanf("%d",&a[i][j]);
 }
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
 printf("%d ",a[i][j]); printf("\n"); }
printf("Zilele ");
l=0;
for(i=0;i<n;i++)
{ gas=1;
for(j=0;j<m;j++) if(a[i][j]!=0) gas=0;
if (gas) { ct[l]=i; l++; } }
for(i=0;i<l;i++) printf("%d ",ct[i]);
getch();
}
