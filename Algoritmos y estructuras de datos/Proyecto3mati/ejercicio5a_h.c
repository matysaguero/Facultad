#include <stdio.h> 

int main(void) {
    int i, iter;
    printf ("Introduzca un valor entero\n");
    scanf ("%d", &i);
    iter = 0;
    printf ("σ0 : (iter → 0, i → %d)\n", i);

    do {
        printf ("σ1: iter %d, (i = %d)\n", iter, i);
        i = i - 1;
        iter ++; // O en todo caso iter = iter + 1
        printf ("σ2: iter %d, (i = %d)\n", iter, i);
    } while (i != 0);

    printf ("σ3: (i → %d)\n", i);
return 0;
}

// h) Ejemplo de "práctico".
// Var iter,i: Int;
//  iter := 0;
//  i := 4;
// [σ0 : (iter → 0, i → 4)]
// do (i != 0) →
//  [σ1 : (iter → 0, i → 4), σ1 : (iter → 2, i → 3)......]
//      i := i - 1
//      iter ++
//  [σ2 : (iter → 1, i → 3), σ2 : (iter → 2, i → 2)......]
// od
// [σ3 : (i → 0)]