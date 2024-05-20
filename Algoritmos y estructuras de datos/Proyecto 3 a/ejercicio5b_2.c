#include <stdio.h>
#include <stdbool.h>

int main (void) {
    int x, i;
    bool res;
    res = false;
        
        printf ("Ingrese el valor: (5) para x\n");
        scanf ("%d", &x);
    
    printf ("σ0: (x → %d), (i → %d), (res → %s)\n", x, i, res ? "True" : "False");
    
    i = 2;
    res = true;

    while ((i < x) && res) {
        res = res && (x % i) != 0;
        i ++;

        printf ("σ1: iter %d, (x → %d), (i → %d), (res → %s)\n", (i - 2), x, i, res ? "True" : "False");

    }

    return 0;
}

// Ingrese el valor: (5) para x
// 5
// σ0: (x → 5), (i → 0), (res → False)
// σ1: iter 1, (x → 5), (i → 3), (res → True)
// σ1: iter 2, (x → 5), (i → 4), (res → True)
// σ1: iter 3, (x → 5), (i → 5), (res → True)