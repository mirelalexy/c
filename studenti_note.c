/*Pentru cei n studenţi ai anului întâi se cunosc notele mi, i=1,n, la primul examen. Se cere să se determine
numărul studenţilor cu nota 10, 9 şi 8 şi să se afişeze studenţii nepromovaţi.
Vectorul asociat notelor obţinute se parcurge secvenţial într-o structură FOR, de la primul la ultimul element şi se determină
numărul studenţilor cu nota 10, numărul studenţilor cu nota de 9 şi respectiv 8 şi se afişează studenţii nepromovaţi.*/

#include <stdio.h>

void main(){

int sg[40]; // studenti
int ok[40]; // status
int n, c10 = 0, c9 = 0, c8 = 0;

printf("Cati studenti sunt? ");
scanf("%d", &n);

// verificam fiecare student
for (int i = 0; i<n; i++){
    // aflam notele
    printf("Care este nota studentului %d? ", i+1);
    scanf("%d", &sg[i]);
    if (sg[i] < 5){
        ok[i] = 1;
    }
    else if (sg[i] == 8) c8++;
    else if (sg[i] == 9) c9++;
    else if (sg[i] == 10) c10++;
}

for (int i = 0; i<n; i++){
    if (ok[i] == 1){
    printf("Studentul %d este nepromovat.\n", i+1);
    }
}
printf("Numarul studentilor promovati cu nota 10: %d.\n", c10);
printf("Numarul studentilor promovati cu nota 9: %d.\n", c9);
printf("Numarul studentilor promovati cu nota 8: %d.\n", c8);
}