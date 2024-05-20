#include <stdio.h>
#include <stdbool.h>

bool pedir_booleano (char* name) {
    int temp1;
    bool x;
    printf ("Ingrese un valor booleano (0 para false, 1 para true) para la variable %s\n",name);
    scanf ("%d",&temp1);
x = temp1;
return x;
}

void imprimir_boolano (char* name, bool x) {
   printf("El valor booleano de la variable %s es: %s\n", name, x ? "true" : "false");
}

int main (void) {
    bool b;
    b = pedir_booleano ("b");
    imprimir_boolano("b", b);

return 0;
}

// Ejemplos

//Ingrese un valor booleano (0 para false, 1 para true) para la variable b
// 1212
// El valor booleano de la variable b es: true

// Ingrese un valor booleano (0 para false, 1 para true) para la variable b
// 0
// El valor booleano de la variable b es: false