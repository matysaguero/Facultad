#include <stdio.h>
#include <assert.h>

int pedir_entero (void) {
    int x;
    printf ("Ingrese un valor entero\n");
    scanf ("%d", &x);
    assert (x > 0);
return x;
}

void hola_hasta (int n) {
    int i;
    i = 1;
    do {
        printf ("hola\n");
        i ++;
    } while (i <= n);
}

int main(void) {
    int n;
    n = pedir_entero();
    hola_hasta (n);
return 0;
}

// La función ya implementada que podemos utilizar, es la de pedir_entero.

/*Ejemplos
1) Ingrese un valor entero
4
hola
hola
hola
hola

2) Ingrese un valor entero
-3
miprograma: ejercicio01.c:8: pedir_entero: Assertion `x > 0' failed.
Abortado (`core' generado) */