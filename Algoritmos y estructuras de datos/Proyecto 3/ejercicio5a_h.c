#include <stdio.h>
#include <stdbool.h>

int main(void){
    int i, iter;
    iter = 0;

    printf ("Ingrese un valor para i:\n");
    scanf ("%d", &i);

    while (i != 0) {
        iter ++;
    
    printf ("σ1: iter %d, (i → %d)\n", iter, i);

    i = i - 1;

    printf ("σ2: iter %d, (i → %d)\n", iter, i);
    }

    printf ("σ final: (i → %d)\n", i);

}

// Ingrese un valor para h:
// 4
// σ1: iter 1, (i → 4)
// σ2: iter 1, (i → 3)
// σ1: iter 2, (i → 3)
// σ2: iter 2, (i → 2)
// σ1: iter 3, (i → 2)
// σ2: iter 3, (i → 1)
// σ1: iter 4, (i → 1)
// σ2: iter 4, (i → 0)
// σ final: (i → 0)