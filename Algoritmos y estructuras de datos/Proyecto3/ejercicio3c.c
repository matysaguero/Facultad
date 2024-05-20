#include <stdio.h>

int main(void) {
    int x,y;
    printf ("Introduzca dos valores enteros\n");
    scanf ("%d", &x);
    scanf ("%d", &y);
    printf ("σ0 : (x → %d, y → %d)\n", x, y);

    y = y + y;
    printf ("y = y + y\n");
    printf ("σ1 : (x → %d, y → %d)\n", x, y);

    x = x + y;
    printf ("x = x + y\n");
    printf ("σ2 : (x → %d, y → %d)\n", x, y);

return 0;
}

// c)
// Var x,y: Int;
// x = 10
// y = 5
// [σ0 : (x → 10, y → 5)]
// y:= y + y 
// [σ1 : (x → 10, y → 10)]
// x := x + y
// [σ2 : (x → 20, y → 10)]

// Var x,y: Int;
// x = 20
// y = -15
// [σ0 : (x → 20, y → -15)]
// y:= y + y 
// [σ1 : (x → 20, y → -30)]
// x := x + y
// [σ2 : (x → -10, y → -30)]

// Var x,y: Int;
// x = -6
// y = -8
// [σ0 : (x → -6, y → -8)]
// y:= y + y 
// [σ1 : (x → -6, y → -16)]
// x := x + y
// [σ2 : (x → -22, y → -16)]
