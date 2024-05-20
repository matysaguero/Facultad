#include <stdio.h>
#include <assert.h>

int pedir_entero (void) {
    int n;
    printf ("Ingrese un valor entero\n");
    scanf ("%d", &n);
    assert (n >= 0);
    return n;
}

int suma_hasta (int n) {
    int i,suma;
    suma = 0;
    i = 1;
    do {
    suma = suma + i; 
    i ++;
    } while (i <= n);
    printf ("La suma hasta %d es: %d\n", n, suma);
return suma;
}
    

int main (void) {
    int x;
    x = pedir_entero();
    suma_hasta(x);

return 0;
}

/* Ejemplos
1) Ingrese un valor entero
6
La suma hasta 6 es: 21

2) Ingrese un valor entero
-4
miprograma: suma_hasta.c:8: pedir_entero: Assertion `n >= 0' failed.
Abortado (`core' generado)  
*/