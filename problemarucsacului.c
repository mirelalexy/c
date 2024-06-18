/*Se consideră un set de n obiecte si un rucsac de capacitate dată
q. Pentru fiecare obiect k se cunoaste capacitatea c(k) si venitul
v(k) care poate fi obtinut prin transportarea acestuia cu rucsacul
până la o destinatie fixată.
Să se determine o încărcare optimală a rucsacului, în ipoteza în
care orice obiect poate fi încărcat întreg în rucsac sau partial.*/

#include <stdio.h>

void sortare_desc(float *c, float *v, int n){ // bubble sort
    float temp, castig[25];

    for (int i = 0; i < n; i++){
        castig[i] = v[i]/c[i];
    }
    
    for (int i = 0; i < n-1; i++){
        for (int j = i+1; j < n; j++){
            if (castig[i] < castig[j]){
                // interschimbare
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;

                temp = v[i];
                v[i] = v[j];
                v[j] = temp;
            }
        }
    }
}

//daca obiectul depaseste capacitatea rucsacului, este ignorat complet
void rucsac_intreg(int capacitate, int n, float c[], int introdus[], float v[]){
    int q = capacitate;

    for (int i = 0; i < n; i++){
        if (q >= c[i]){
            introdus[i] = 1;
            q -= c[i];
        }
        else{
            introdus[i]= 0;
        }
    }

    //afisare
    printf("Solutia este:\n");
    for (int i = 0; i < n; i++){
        if (introdus[i] == 1){
            printf("%.1fkg - %.1flei\n", c[i], v[i]);
        }
    }
}

//daca obiectul depaseste capacitatea rucsacului, partea care incape este introdusa in rucsac
void rucsac_cont(int capacitate, int n, float c[], int introdus[], float v[]){
    int q = capacitate;
    float temp;

    for (int i = 0; i < n; i++){
        if (q >= c[i]){
            introdus[i] = 1;
            q -= c[i];
        }
        else{
            c[i] = q;
            temp = v[i];
            v[i] = temp/q;
            introdus[i] = 1;
            q = 0;
        }
    }

    //afisare
    printf("Solutia este:\n");
    for (int i = 0; i < n; i++){
        if (introdus[i] == 1){
            printf("%.1fkg - %.1flei\n", c[i], v[i]);
        }
    }
}

void main(){
    float c[]={3, 4, 5, 1};
    float v[]={20, 25, 30, 10};
    int n = sizeof(v)/sizeof(v[0]);
    int capacitate = 11;
    int introdus[10]; // 1 = obiect introdus (si partial), 0 = obiect neintrodus

    sortare_desc(c, v, n);

    for (int i = 0; i < n; i++){
        printf("c[%d] = %.2f\n", i, c[i]);
    }

    for (int i = 0; i < n; i++){
        printf("v[%d] = %.2f\n", i, v[i]);
    }
    
    printf("Obiecte intregi:\n");
    rucsac_intreg(capacitate, n, c, introdus, v);

    printf("Obiecte impartite:\n");
    rucsac_cont(capacitate, n, c, introdus, v);
}