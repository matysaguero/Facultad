#include <stdio.h> 
#include <assert.h>

int pedir_entero (void) {
    int n;
    printf ("Ingrese un valor entero\n");
    scanf ("%d", &n);

    return n;
}

int main (void) {
    int x,y,aux;
    x = pedir_entero();
    y = pedir_entero();
    aux = 0;
    printf ("σ0 : (x → %d, y → %d)\n", x,y);

    aux = x;
    assert ((x == aux));
    x = x + 1;
    y = aux + y;
    printf ("σf : (x → %d, y → %d)\n", x,y);
return 0;
}

/* var x,y,aux: Int;
{Pre: x = X, y = Y}
aux := x;
x := x + 1;
y := aux + y;
{Post: x = X + 1, y = X + Y}
*/

/*Ejemplos 
1) Ingrese un valor entero
7
Ingrese un valor entero
6
σ0 : (x → 7, y → 6)
σf : (x → 8, y → 13)

2) Ingrese un valor entero
7
Ingrese un valor entero
-5
σ0 : (x → 7, y → -5)
σf : (x → 8, y → 2) */