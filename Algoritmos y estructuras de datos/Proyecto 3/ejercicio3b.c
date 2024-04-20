#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int x , y;
    x = 2;
    y = 5;

    printf ("σ0 : (x → %d, y → %d)\n", x, y);

    printf ("Introduce un valor para x e y\n");
    scanf ("%d", &x);
    scanf ("%d", &y);

    printf ("x = x + y\n");
    x = x + y;
    
    printf ("σ1 : (x → %d)\n", x);

    printf ("y = y + y\n");
    y = y + y;

    printf ("σ2 : (y → %d)\n", y);
}

// b)
// Var x,y: Int;
// [σ0 : (x → 2, y → 5)]
// x := x + y
// [σ1 : (x → 7)]
// y:= y + y 
// [σ2 : (y → 10)]

// Var x,y: Int;
// [σ0 : (x → 1, y → 2)]
// x := x + y
// [σ1 : (x → 3)]
// y:= y + y 
// [σ2 : (y → 4)]

// Var x,y: Int;
// [σ0 : (x → 3, y → 9)]
// x := x + y
// [σ1 : (x → 12)]
// y:= y + y 
// [σ2 : (y → 18)]