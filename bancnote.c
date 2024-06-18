#include <stdio.h>

void plata(int suma, int bancnote[], int n){
    int numarBancnote = 0;

    printf("Suma de %d poate fi platita folosind:\n", suma);
    for (int i = 0; i < n; i++){
        int numarCurent = suma / bancnote[i];
        if (numarCurent > 0){
            printf("%d x %d\n", numarCurent, bancnote[i]);
            suma -= numarCurent * bancnote[i];
            numarBancnote += numarCurent;
        }
    }
    printf("Numarul minim de bancnote cu care poate fi platita suma este: %d", numarBancnote);
}

void main(){
    int suma;

    printf("Introduceti suma de platit: ");
    scanf("%d", &suma);

    int bancnote[]={500, 200, 100, 50, 10, 5, 1};
    int n = sizeof(bancnote)/sizeof(bancnote[0]);

    plata(suma, bancnote, n);
}