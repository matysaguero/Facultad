#include <stdio.h>

int main(void) {
    int x ;                                          
    printf ("Introduce un valor para x\n");          
    scanf ("%d", &x);
    
    printf ("σ0 : (x → %d)\n", x);
    
    printf ("x = 5\n");
    x = 5;

    printf ("σ1 : (x → %d)\n", x);
return 0;
}

// a)
// Var x: Int;
// [σ0 : (x → 1]
// x:= 5
//[σ1 : (x → 5)]

// Var x: Int;
// [σ0 : (x → 2]
// x:= 5
// [σ1 : (x → 5)]

// Var x: Int;
// [σ0 : (x → 3]
// x:= 5
// [σ1 : (x → 5)]


