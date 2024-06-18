/*Să se scrie un program care să calculeze valoarea expresiei:
𝐸 = {max(min(|𝑎| − 3𝑏, 𝑐 − 2|𝑑|), min(|𝑎| + 3𝑏, 𝑐 + 2|𝑑|)) , 𝑑𝑎𝑐𝑎 𝑎 + 𝑏 > 𝑐 − 𝑑}
    {min(max(|𝑎| − 3𝑏, 𝑐 − 2|𝑑|), max(|𝑎| + 3𝑏, 𝑐 + 2|𝑑|)) ,𝑑𝑎𝑐𝑎 𝑎 + 𝑏 ≤ 𝑐 − 𝑑}
*/

#include <stdio.h>

float max (float x, float y);
float min(float x, float y);
float mod(float x);

void main(){
    float a, b, c, d;

    printf("a, b, c, d = ");
    scanf("%f, %f, %f, %f", &a, &b, &c, &d);

    if (a + b > c - d){
        printf("%.2f", max(min((a) - 3 * b, c - 2 * mod(d)), min(mod(a) + 3 * b, c + 2 * mod(d))));
    }
    if (a + b <= c - d){
        printf("%.2f", min(max((a) - 3 * b, c - 2 * mod(d)), max(mod(a) + 3 * b, c + 2 * mod(d))));
    }

}

float max (float x, float y){
    float max;
    if (x > y){
        max = x;
    }
    else max = y;
return max;
}
float min(float x, float y){
    float min;
    if (x < y){
        min = x;
    }
    else min = y;
return min;
}

float mod(float x){
    if (x < 0){
        return -x;
    }
    else return x;
}