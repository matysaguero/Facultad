#include <stdio.h>

int main(void) {
    int x , y;
    x = 2;
    y = 5;

    printf ("σ0 : (x → %d, y → %d)\n", x, y);

    printf ("Introduce un valor para x e y\n");
    scanf ("%d", &x);
    scanf ("%d", &y);

    printf ("y = y + y\n");
    y = y + y;

    printf ("σ1 : (x → %d, y → %d)\n", x, y);

    printf ("x = x + y\n");
    x = x + y;
    
    printf ("σ2 : (x → %d, y → %d)\n", x, y);

    return 0;
}

// c)
// Var x,y: Int;
// [σ0 : (x → 2, y → 5)]
// y:= y + y
// [σ1 : (x → 2, y → 10)]
// x:= x + y
// [σ1 : (x → 12, y → 10)]

// Var x,y: Int;
// [σ0 : (x → 1, y → 6)]
// y:= y + y
// [σ1 : (x → 1, y → 12)]
// x:= x + y
// [σ1 : (x → 13, y → 12)]