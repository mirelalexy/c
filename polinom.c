/*Să se scrie programul pentru calcularea valorii unui polinom într-un punct dat. Coeficienţii polinomului
sunt numere reale şi se introduc de la tastatură.
Coeficienţii polinomului se reţin într-un vector. Pentru n, gradul polinomului, vectorul de coeficienţi va conţine n+1
elemente.*/

#include<stdio.h>

void main(){
    int n, i;
    float coef[100], x, val;
    printf("Introduceti gradul polinomului, n=");scanf("%d",&n);
    printf("Coeficientii polinomului: \n");
    for (int i=0;i<=n;i++){
        printf("coeficientul lui x la puterea %d =", i);scanf("%f", &coef[i]);
    }
    printf("Punctul pentru care se va calcula valoarea:");scanf("%f", &x);
    float temp = 1; val = coef[0];
    for (i=1;i<=n;i++){
        temp *=x;
        val = val + coef[i]*temp;// sau val += coef[i]*temp;
    }
    printf("Valoarea polinomului in punctul %5.2f este %5.2f ", x, val);
}