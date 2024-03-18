#include <stdio.h>
#include <stdbool.h>

int main (void) {
    int x, y, i, iter;
    iter = 0;
    i = 0;

    printf ("Ingrese el valor: (13) para x\n");
    scanf ("%d", &x);

    printf ("Ingrese el valor: (3) para y\n");
    scanf ("%d", &y);

    while (x >= y) {
        
        x = x - y;
        i = i + 1;
        iter ++;

        printf ("σ1: iter %d, (x → %d), (y → %d), (i → %d)\n", iter, x, y, i);
    }
}

// Ingrese el valor: (13) para x
// 13
// Ingrese el valor: (3) para y
// 3
// σ1: iter 1, (x → 10), (y → 3), (i → 1)
// σ1: iter 2, (x → 7), (y → 3), (i → 2)
// σ1: iter 3, (x → 4), (y → 3), (i → 3)
// σ1: iter 4, (x → 1), (y → 3), (i → 4)

