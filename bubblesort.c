#include <stdio.h>

void sortare_cresc(int *val, int n){
    int temp;
    for (int i = 0; i < n-1; i++){
        for (int j = i+1; j < n; j++){
            if (val[j] < val[i]){
                temp = val[i];
                val[i] = val[j];
                val[j] = temp;
            }
        }
    }
}


void main(){
    int val[]={3, 7, 1, 2, 11, 15, 10, 6, 4};
    int n = sizeof(val)/sizeof(val[0]);

    printf("Valorile nesortate: ");
    for (int i = 0; i < n; i++){
        printf("%d ", val[i]);
    }

    printf("\n");
    sortare_cresc(val, n);

    printf("Valorile sortate: ");
    for (int i = 0; i < n; i++){
        printf("%d ", val[i]);
    }
}
