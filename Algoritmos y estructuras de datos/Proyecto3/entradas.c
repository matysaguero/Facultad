#include <stdio.h>

int pedir_entero (void) {
    int x;
    printf ("Ingrese un valor entero\n");
    scanf ("%d",&x);

return x;
}

void imprimir_entero (int n) {
    printf ("El valor ingresado es: %d\n", n);
}

int main (void) {
    imprimir_entero(pedir_entero());

return 0;
}

// Ejemplos:

// Ingrese un valor entero
// 3
// El valor ingresado es: 3

// Ingrese un valor entero
// -3
// El valor ingresado es: -3
