#include <stdio.h>
#include<malloc.h>
// Conditia de continuare: reginele i si j nu se ataca daca nu sint pe aceeasi coloana
// - distantele pe verticala si orizontala sint diferite
// I: solutia partiala (x), numarul de elemente (i)
// E: 1 daca e acceptabila, 0 daca nu e acceptabila

int posibil(int *x, int i)
{ int j, p;
  p=1;
  for( j=1; j<i; j++)
    if( x[i]==x[j] || abs(i-j)==abs(x[i]-x[j]) )
      p=0;
  return p;
}

// Retine o configuratie solutie (afisare)
// I: nr. solutie (nr), nr dame (n), vector solutie
// E: -

void retine_solutia(int nr, int n, int* x)
{ int i,j;
  printf("\n Solutia numarul %d\n",nr);
  for(i=1; i<=n; i++)
  { for(j=1; j<=n; j++)
      printf("%c ",j==x[i]?'R':'x');
    printf("\n");
  }
}

// I: numar regine/dimensiune tabla (n)
// E: numar solutii
int regine(int n)
{ int nr;   int* x;   int i, am;
  x= (int*) malloc ((n+1)* sizeof(int));       	//vectorul solutie
  nr=0;                	//numar solutii
  i=1;
  x[1]=0;                            //prima valoare minus ratia
  while(i>0)                     //cit timp nu am ajuns la configuratia finala
  { am=0;
    while( x[i]<n && !am) //alege urmatoarea valoare acceptabila pentru x[i]
    { x[i]++;                         //urmatoarea valoare pentru x[i]
      am=posibil(x,i);         //este acceptabila?
    }
    if(!am)   i--;
    else
      if( i==n )    retine_solutia(++nr,n,x);
      else
          x[++i]=0;       //prima valoare minus ratia
  }   free(x);
  return nr;
  }

// I: numar dame (n), element curent (i), vector solutie (x),
// numar solutii (nr)
// E: nr. solutii
int regine_r(int n, int i, int* x, int nr)
{ int j;
 if( i==n+1)
    retine_solutia(++nr,n,x);
  else
    for(j=1; j<=n; j++ )
    { x[i]=j;
      if( posibil(x,i) )
        nr=regine_r(n,i+1,x,nr);     }
  return nr; }

void main(){
    int n;
    printf("n="); scanf("%d", &n);
int* x=(int*)malloc ((n+1)*sizeof(int));
  int nr=0;
  printf("\n\nNumarul de solutii este %d ", regine_r(n,1,x,nr));
  //printf("\n\nNumarul de solutii este %d ", regine(n));
  free(x);
}
