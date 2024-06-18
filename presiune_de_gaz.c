/*Să se determine media zilnică a presiunii de gaz pe conductă, dacă se dau valorile măsurate în fiecare zi
a lunii.
Vectorul asociat presiunii de gaze din fiecare zi se parcurge secvenţial într-o structură FOR, de la primul la ultimul element
şi se adună elementele sale. Se calculează media ca raport între presiunea totală de gaze şi numărul de zile.*/

#include <stdio.h>

float med(int zile, float val[31]){
float sum = 0, m;

for (int i = 0; i<zile; i++){
    sum += val[i]; 
}
return sum/zile;
}

void main(){

int zile;
float val[31], medie;
printf("Cate zile sunt in luna? ");
scanf("%d", &zile);

for (int i = 0; i<zile; i++){
    printf("Valoarea pentru ziua %d: ", i+1);
    scanf("%f", &val[i]);
}

printf("Media este: %.2f", med(zile, val));
}