#include <stdio.h>

int a[25][25], viz[25], n = 0, m = 0;

void citire(){
    FILE *f;
    f = fopen("lista.txt", "r");

    int x, y;
    while (fscanf(f, "%d %d", &x, &y) == 2){
        if (x > n) n = x;
        if (y > n) n = y; // actualizam nr. de noduri
        m++; // si numarul de muchii
        a[x][y] = 1;
        a[y][x] = 1;
    }
    fclose(f);

    // verificam datele
    printf("Numar de noduri: %d, numar de muchii: %d\n", n, m);
}

void parcurgereinadancime(int v){ // recursiv
    viz[v] = 1; // v = varf - asa vom parcurge toate nodurile

    for (int i = 1; i <= n; i++){
        if(a[v][i] == 1 && !viz[i]){
            parcurgereinadancime(i);
        }
    }
}
int conex(){
    //initializam toate nodurile ca fiind nevizitate
    for (int i = 1; i <= n; i++){
        viz[i] = 0;
    }

    parcurgereinadancime(1); // nodul de unde vom incepe parcurgerea este 1

    for (int i = 1; i <= n; i++){
        if (!viz[i]){
            return 0; // graful nu este conex
        }
    }
    return 1; // graful este conex
}

void grad(){
    printf("Nodurile de grad %d sunt: ", n-1);
    int gasit = 0;
    for (int i = 0; i <= n; i++){
        int grad = 0;
        for (int j = 0; j <= n; j++){
            if (a[i][j] == 1){
                grad++;
            }
        }
        if (grad == n-1){
            printf("%d", i);
            gasit = 1;
        }
    }
    if (!gasit){
        printf("Nu exista noduri de grad %d", n-1);
    }
}

void main(){
    citire();//a)

    //b)
    printf("Matricea de adiacenta este:\n");

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    //c)
    if (conex() == 0){
        printf("Graful nu este conex\n");
    }
    else{
        printf("Graful este conex\n");
    }

    //d)
    grad();
}