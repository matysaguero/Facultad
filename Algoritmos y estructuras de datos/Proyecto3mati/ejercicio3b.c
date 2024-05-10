#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int x,y;
    printf ("Introduce dos valores enteros\n");
    scanf ("%d", &x);
    scanf ("%d", &y);
    
    printf ("σ0 : (x → %d, y → %d)\n", x, y);

    x = x + y;
    printf ("x := x + y\n");
    printf ("σ1 : (x → %d, y → %d)\n", x, y);

    y = y + y;
    printf ("y = y + y\n");
    printf ("σ2 : (x → %d, y → %d)\n", x, y);

return 0;
}

// b)
// Var x,y: Int;
// x := 4
// y := 5
// [σ0 : (x → 4, y → 5)]
// x := x + y
// [σ1 : (x → 9, y → 5)]
// y := y + y 
// [σ2 : (x → 9, y → 10)]

// Var x,y: Int;
// x := -4
// y := 3
// [σ0 : (x → -4, y → 3)]
// x := x + y
// [σ1 : (x → -1, y → 3)]
// y := y + y 
// [σ2 : (x → -1, y → 6)]

// Var x,y: Int;
// x := -4
// y := 3
// [σ0 : (x → -4, y → 3)]
// x := x + y
// [σ1 : (x → -1, y → 3)]
// y := y + y 
// [σ2 : (x → -4, y → 6)]

// Var x,y: Int;
// x := -7
// y := -11
// [σ0 : (x → -7, y → -11)]
// x := x + y
// [σ1 : (x → -18, y → -11)]
// y := y + y 
// [σ2 : (x → -18, y → -22)]