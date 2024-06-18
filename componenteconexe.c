#include <stdio.h>

int a[20][20], n = 0, m = 0, viz[20];

void citire(){
    FILE *f;
    f = fopen("lista.txt", "r");

    int x, y;
    while (fscanf(f, "%d %d", &x, &y) == 2){
        if (x > n) n = x;
        if (y > n) n = y;
        a[x][y] = 1;
        a[y][x] = 1; // pentru ca e graf neorientat, elem. sunt simetrice
        m++;
    }    
    fclose(f);
    printf("Nr. de noduri: %d, nr. de muchii: %d\n", n, m);
}

void parcurgereinadancime(int v){
    viz[v] = 1;

    for (int i = 1; i <= n; i++){
        if (a[v][i] == 1 && !viz[i]){
            parcurgereinadancime(i);
        }
    }
}

int numarComponenteConexe() {
    int numarComponente = 0;

    for (int i = 1; i <= n; i++) {
        if (!viz[i]) {
            numarComponente++;
            parcurgereinadancime(i); // de la nodul i, vizitez toate nodurile cu care exista muchii
        }
    }

    return numarComponente;
}


void main(){
    //a)
    citire();

    //b)
    printf("Matricea de adiacenta este:\n");
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    //nr. componente conexe
    printf("Nr. componente conexe: %d", numarComponenteConexe());
}