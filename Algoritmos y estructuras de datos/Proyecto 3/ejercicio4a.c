#include <stdio.h>

int main(void) {
    int x , y;                                          

    printf ("Introduce un valor para x e y\n");
    scanf ("%d", &x);
    scanf ("%d", &y);

    if (x >= y) {
        printf ("los valores de x e y son: %d y %d\n", x, y);
        
        x = 0;

        printf ("Ahora, los valores de x e y son: %d y %d\n", x, y);
    } else { 

        printf ("los valores de x e y son: %d y %d\n", x ,y);
        
        x = 2;

        printf ("Ahora, los valores de x e y son: %d y %d\n", x , y);
    
    } 

return 0;
}

// e)
// Var x,y: Int;
// x = 3;
// y = 1;
// if (x ≥ y) →
//  [σ1 : (x → 3, y → 1)]
//  x:= 0
//  [σ2 : (x → 0, y → 1)]
// ▫️ (x ≤ y) →
//  [σ1 : (x → 3, y → 1)]
//  x:= 2
//  [σ1 : (x → 3, y → 1)]

// f)
// Var x,y: Int;
// x = -100;
// y = 3;
// if (x ≥ y) →
//  [σ1 : (x → -100, y → 3)]
//  x:= 0
//  [σ2 : (x → -100, y → 3)]
// ▫️ (x ≤ y) →
//  [σ1 : (x → -100, y → 3)]
//  x:= 2
//  [σ1 : (x → 2, y → 3)]

