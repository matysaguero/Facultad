#include <stdio.h>

int main(void) {
    int x,y;
    printf ("Ingrese dos valores enteros\n");
    scanf ("%d", &x);
    scanf ("%d", &y);

    printf ("σ0 : (x → %d, y → %d)\n", x, y);

if (x>=y) {
    printf ("σ1 : (x → %d, y → %d)\n", x, y);
    x = 0;
    printf ("σ2 : (x → %d, y → %d)\n", x, y);
} else {
    printf ("σ'1 : (x → %d, y → %d)\n", x, y);
    x = 2;
    printf ("σ'2 : (x → %d, y → %d)\n", x, y);
}

printf ("σ3 : (x → %d, y → %d)\n", x, y);
return 0;
}

// e)
// Var x,y: Int;
// x := 3;
// y := 1;
// if (x ≥ y) →
//  [σ1 : (x → 3, y → 1)]
//  x := 0
//  [σ2 : (x → 0, y → 1)]
// ▫️ (x ≤ y) →
//  [σ1 : (x → 3, y → 1)]
//  x := 2
//  [σ1 : (x → 3, y → 1)]

// f)
// Var x,y: Int;
// x := -100;
// y := 3;
// if (x ≥ y) →
//  [σ1 : (x → -100, y → 3)]
//  x := 0
//  [σ2 : (x → -100, y → 3)]
// ▫️ (x ≤ y) →
//  [σ1 : (x → -100, y → 3)]
//  x := 2
//  [σ1 : (x → 2, y → 3)]