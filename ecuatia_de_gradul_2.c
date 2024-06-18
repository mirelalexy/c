/*Să se scrie un program ce rezolvă ecuația de gradul 2: 𝑎𝑥2 + 𝑏𝑥 + 𝑐 = 0, unde a, b și c sunt numere reale.*/

#include <stdio.h>
#include <math.h>

void main (){
float a, b, c, x, x1, x2, imag, d, coefr;
printf ("a = "); scanf ("%f", &a);
printf ("b = "); scanf ("%f", &b);
printf ("c = "); scanf ("%f", &c);
if (a != 0)
{
d = b*b - 4*a*c;
if (d > 0)
{
x1 = (-b + sqrt (d))/(2*a);
x2 = (-b - sqrt (d))/(2*a);
printf("x1 = %3.2f; x2 = %3.2f", x1, x2);
}
else
if (d == 0){
x = -b/(2*a);
printf ("x1 = x2 == %5.2f\n", x);
}
else
{
coefr = -b/(2*a);
imag = fabs (sqrt (-d)/(2*a));
printf ("x1 = %3.2f + %3.2fi;x2 = %3.2f + %3.2fi",coefr ,imag,
coefr, imag);
 }
 }
else
{
 if (b != 0)
{
 x = -c/b;
 printf ("x = %5.2f\n", x);
 }
else
 if (c != 0)
 printf ("Ecuatie imposibila!\n");
 else
 printf ("Ecuatie nedeterminata!\n");
 }
}