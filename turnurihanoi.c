/*Turnurile din Hanoi
Problema: Turnurile din Hanoi este un puzzle matematic care constă din trei tije și un număr de discuri de dimensiuni diferite care pot fi introduse pe orice tijă. La început, toate discurile sunt stivuite în ordine descrescătoare a dimensiunii pe prima tijă (cea mai mare la bază și cea mai mică în partea de sus).

Obiectiv: Mută întreaga stivă de pe prima tijă pe a treia tijă, respectând următoarele reguli:
Poți muta doar un singur disc la un moment dat.
Fiecare mutare constă în preluarea discului superior de pe una dintre tije și mutarea acestuia pe o altă tijă.
Un disc nu poate fi așezat deasupra unui disc mai mic.
Soluție prin Divide et Impera: Problema poate fi rezolvată recursiv. Dacă n este numărul de discuri:

Mută primele n−1 discuri de pe tija sursă pe tija auxiliară folosind tija destinație.
Mută discul n de pe tija sursă pe tija destinație.
Mută primele n−1 discuri de pe tija auxiliară pe tija destinație folosind tija sursă.*/

#include <stdio.h>

// Functie pentru Turnurile din Hanoi
void hanoi(int n, char from_rod, char to_rod, char aux_rod) {
    if (n == 1) {
        printf("Muta discul 1 de pe tija %c pe tija %c\n", from_rod, to_rod);
        return;
    }
    hanoi(n - 1, from_rod, aux_rod, to_rod);
    printf("Muta discul %d de pe tija %c pe tija %c\n", n, from_rod, to_rod);
    hanoi(n - 1, aux_rod, to_rod, from_rod);
}

int main() {
    int n = 3; // Numarul de discuri
    hanoi(n, 'A', 'C', 'B'); // A, B si C sunt tijele
    return 0;
}
