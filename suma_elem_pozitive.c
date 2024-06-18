/*Să se scrie programul pentru calculul sumei elementelor strict pozitive ale unui vector de dimensiune n.
Fie X=(x1,x2,...,xn).*/

#include <stdio.h>

float suma(float x[50], int n){
    float s = 0;

    for (int i = 0; i<n; i++){
        if (x[i] >= 0) s += x[i];
    }
return s;

}

void test(float s){
    if (s == 0){
        printf("Nu exista elemente strict pozitive in vector.");
    }
    else{
        printf("Suma elementelor strict pozitive = %.2f", s);
    }
}

void main(){
    float x[50];
    int n;

    printf("n = ");
    scanf("%d", &n);

    for (int i = 0; i<n; i++){
        printf("x[%d] = ", i);
        scanf("%f", &x[i]);
    }

    float s2 = suma(x, n);
    test(s2);
}