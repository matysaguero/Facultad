#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int i, iter;
    iter = 0;

    printf ("Ingrese un valor para i\n");
    scanf ("%d", &i);

    while (i != 0) {
        iter ++;

        printf ("σ1: iter %d, (i → %d)\n", iter, i);

        i = 0;

        printf ("σ2: iter %d, (i → %d)\n", iter, i);
    }
    
    printf ("σ final: (i → %d)\n", i);
} 

// Ingrese un valor para i
// 400
// σ1: iter 1, (i → 400)
// σ2: iter 1, (i → 0)
// σ final: (i → 0)