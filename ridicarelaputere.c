/*Să se scrie o funcţie pentru ridicarea unui număr la o putere naturală.
Funcţia are ca parametri baza (b) şi exponentul (e) şi returnează, prin numele ei, valoarea cerută.*/

#include <stdio.h>

long putere_r(int a, unsigned b);
long putere_i(int b, unsigned e);

void main() {
int baza, exponent;
printf("baza, exponent ="); scanf("%d, %u", &baza, &exponent);
printf("putere_r=%ld\nputere_i=%ld", putere_r(baza, exponent), putere_i(baza,
exponent));
}

long putere_r(int b, unsigned e) { //recursiv
long p=1;
if (e)
p = b * putere_r(b, e - 1);
return p;
}

long putere_i(int b, unsigned e) { //iterativ
long p = 1;
while (e) {
p *= b;
e--;
}
return p;
}
