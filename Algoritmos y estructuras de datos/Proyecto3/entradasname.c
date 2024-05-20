#include <stdio.h>

int pedir_entero (char* name) {
    int x;
    printf ("Ingrese un valor para almacenar en la variable %s\n", name);
    scanf ("%d", &x);
    
return x;
}

void imprimir_entero (char* name, int x) {
    printf ("El valor de la variable %s es %d\n", name, x);
}

int main (void) {
    int n;
    n = pedir_entero("n");
    imprimir_entero ("n", n);

return 0;
}

// Ejemplos:

// Ingrese un valor para almacenar en la variable n
// 43
// El valor de la variable n es 43

// Ingrese un valor para almacenar en la variable n
// -2
// El valor de la variable n es -2