#include <stdio.h> 

int main(void) {
    int i, iter;
    printf ("Introduzca un valor entero\n");
    scanf ("%d", &i);
    iter = 0;

    do {
        printf ("σ1: iter %d, (i = %d)\n", iter, i);
        i = 0;
        iter ++;
        printf ("σ2: iter %d, (i = %d)\n", iter, i);
    } while (i != 0);

    printf ("σ3: (i → %d)\n", i);
return 0;
}

// i) Ejemplo de "práctico".
// Var iter,i: Int;
//  iter := 0;
//  i := 400;
// [σ0 : (iter → 0, i → 400)]
// do (i != 0) →
//  [σ1 : (iter → 0, i → 400)]
//      i := 0
//      iter ++
//  [σ2 : (iter → 0, i → 0)]
// od
// [σ3 : (i → 0)]