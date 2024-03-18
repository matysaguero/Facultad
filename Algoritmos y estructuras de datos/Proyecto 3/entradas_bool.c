#include <stdio.h>
#include <stdbool.h>

int pedir_bool (void) {
    bool b; 
    int temp;

    printf ("Ingrese un booleano:\n");
    scanf ("%d", &temp);

    b = temp;
return b;
}

void imprimir_bool (bool a) {
    
    printf ("el booleano ingresado es: %s\n", a ? "True" : "False");

}

int main (void) {

    imprimir_bool (pedir_bool());

    return 0;
}

// Ingrese un booleano:
// 1
// el booleano ingresado es: True

// Ingrese un booleano:
// 0
// el booleano ingresado es: False

// Ingrese un booleano:
// 12
// el booleano ingresado es: True