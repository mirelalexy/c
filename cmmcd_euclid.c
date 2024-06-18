/*Să se scrie un program care determină c.m.m.d.c. dintre două numere naturale, folosind teorema împărțirii
cu rest (algoritmul lui Euclid).*/

#include <stdio.h>

void main (){
    unsigned int a, b, d, i, r;

    printf ("a = ");
    scanf ("%u", &a);
    printf ("b = ");
    scanf ("%u", &b);
    d = a;
    i = b;
    do {
        r = d%i;
        if (r == 0) {
            printf("cmmdc = %u\n", i);
        }
        else {
            d = i;
            i = r;
        }
    } while (r > 1);
}