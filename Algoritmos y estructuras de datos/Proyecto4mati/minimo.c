#include <stdio.h>
#include <assert.h>

int main(void) {
    int x, y;
    printf ("Ingrese dos valores enteros\n");
    scanf ("%d", &x);
    scanf ("%d", &y);

    int min;
    min = x < y ? x : y;
assert (x==min || y==min);

    printf ("El mínimo entre %d y %d es: %d\n", x, y, min);

return 0;
}

/*Ejemplos
1) Ingrese dos valores enteros
4
5
El mínimo entre 4 y 5 es: 4 

2) Ingrese dos valores enteros
-4 
-9
El mínimo entre -4 y -9 es: -9 */