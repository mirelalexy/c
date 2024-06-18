/*Să se scrie funcţia pentru calcularea termenului de ordin n al şirului Fibonacci, recursiv şi iterativ.
Funcţia are ca parametru de intrare indicele termenului pe care trebuie să îl calculeze şi returnează,
prin numele ei, valoarea cerută. Indicii termenilor şirului încep de la 1.*/

#include <stdio.h>

int fibonacci_recursiv(unsigned int n){
    if (n == 0){
        return 0;
    }
    if (n <= 2){
        return 1;
    }
    return fibonacci_recursiv(n - 1) + fibonacci_recursiv(n - 2);
}

int fibonacci_iterativ(unsigned int n){
    int F[50] = {0, 1}; // i = 0, i = 1
    for (int i = 2; i <= n; i++){
        F[i] = F[i-2] + F[i-1];

        if (i == n){
            return F[i];
        }
    }
}

void main(){
    unsigned int n;
    int F[50];

    printf("Introduceti indicele termenului necunoscut: ");
    scanf("%u", &n);

    printf("Termenul cautat este: %d\n", fibonacci_recursiv(n));
    printf("Termenul cautat este: %d", fibonacci_iterativ(n));
}
