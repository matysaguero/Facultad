#include <stdio.h>
#include <stdbool.h>

bool pedir_booleano (void) {
    int x;
    printf ("Ingrese un valor booleano (0 para false, 1 para true)\n");
    scanf ("%d",&x);

return x;
}

void imprimir_boolano (bool x) {
    printf ("El valor ingresado es: %s\n", x ? "true" : "false");
}

int main (void) {
    imprimir_boolano(pedir_booleano());

return 0;
}

// Ejemplos

//Ingrese un valor booleano (0 para false, 1 para true)
// 1212
// El valor ingresado es: true

// Ingrese un valor booleano (0 para false, 1 para true)
// 0
// El valor ingresado es: false