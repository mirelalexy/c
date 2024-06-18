/*Să se scrie programul pentru calcularea mediei geometrice a elementelor pozitive dintr-un vector de
dimensiune n.*/

#include<stdio.h>
#include<math.h>

void main(){
    int n;
    printf("Introduceti dimensiunea vectorului, n =");scanf("%d",&n);
    float x[100];
    for(int i=0;i<n;i++){
        printf("x[%d]=",i); scanf("%f", &x[i]);
    }
    float mg=1; int k = 0;
    for (int i=0; i<n;i++)
    if(x[i] > 0){ mg *= x[i]; k++;}
    if (k>1) {
    mg = exp(log(mg)/k);printf("Media geometrica este %f .", mg);}
    else printf("Media geometrica nu se poate calcula!");
}