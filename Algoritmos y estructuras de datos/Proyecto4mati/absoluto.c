#include <stdio.h>
#include <assert.h>

int pedir_entero (void) {
    int x;
    printf ("Ingrese un valor entero\n");
    scanf ("%d", &x);
return x;
}

int main(void) {
    int x, resultado;
    x = pedir_entero ();

if (x >= 0) {
    resultado = x;
    assert (resultado == x);
    printf ("El valor absoluto de %d es: %d\n", x, resultado);
} else {
    resultado = x * (-1);
    assert (resultado == x * (-1));
    printf ("El valor absoluto de %d es: %d\n", x, resultado);
}
return 0;
}

/*Ejemplos 
1) Ingrese un valor entero
5
El valor absoluto de 5 es: 5 

2) Ingrese un valor entero
-7
El valor absoluto de -7 es: 7 */