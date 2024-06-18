#include <stdio.h>

// Functie recursiva pentru combinatii
int combinari(int n, int k) {
    if (k == 0 || k == n)
        return 1;
    return combinari(n - 1, k - 1) + combinari(n - 1, k);
}

int main() {
    int n = 5, k = 2; // De exemplu, combinari de 5 luate cate 2
    printf("C(%d, %d) = %d\n", n, k, combinari(n, k));
    return 0;
}
