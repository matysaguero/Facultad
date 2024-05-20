#include <stdio.h> 
#include <assert.h>

int pedir_entero (void) {
    int n;
    printf ("Ingrese un valor entero\n");
    scanf ("%d", &n);

    return n;
}

int main (void) {
    int x,y,z,aux_x,aux_y;
    x = pedir_entero();
    y = pedir_entero();
    z = pedir_entero();
    aux_x = 0;
    aux_y = 0;

    printf ("σ0 : (x → %d, y → %d, z → %d)\n", x,y,z);

    aux_x = x;
    aux_y = y;

    assert ((x == aux_x && y == aux_y));
    x = y;
    y = y + aux_x + z;
    z = aux_y + aux_x;
    printf ("σf : (x → %d, y → %d, z → %d)\n", x,y,z);
return 0;
}

/* var x,y,aux: Int;
{Pre: x = X, y = Y, z = Z}
aux_x := x;
x := y;
y := y + aux_x + z;
z := aux_y + aux_x;
{Post: x = Y, y = Y + X + Z, z = Y + X}
*/

/*Ejemplos 
1) Ingrese un valor entero
4
Ingrese un valor entero
5
Ingrese un valor entero
10
σ0 : (x → 4, y → 5, z → 10)
σf : (x → 5, y → 19, z → 9)

2) Ingrese un valor entero
-4
Ingrese un valor entero
6
Ingrese un valor entero
3
σ0 : (x → -4, y → 6, z → 3)
σf : (x → 6, y → 5, z → 2) */