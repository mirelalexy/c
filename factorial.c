#include <stdio.h>

int factorial_iterativ(int n){
    int result = 1;
    for(int i = 2; i <= n; i++){
        result *= i;
    }
    return result;
}

int factorial_recursiv(int n){
    if (n <= 1) return 1;
    
    else{
        return n * factorial_recursiv(n-1);
    }
}


void main(){
    int n = 5;

    printf("Iterativ: %d\n", factorial_iterativ(n));
    printf("Recursiv: %d", factorial_recursiv(n));
}