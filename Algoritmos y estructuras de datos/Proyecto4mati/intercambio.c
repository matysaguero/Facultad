#include <stdio.h>
#include <assert.h>

int pedir_entero (void) {
    int n;
    
    printf ("Ingrese un valor entero\n");
    scanf ("%d",&n);
    
    return n;
}

int main (void) {
    int x,y,z;
    x = pedir_entero();
    y = pedir_entero();
    
    printf ("σ0 : (x → %d, y → %d)\n", x,y);
    
    z = x;
    y = z;
    
    printf ("σf : (x → %d, y → %d)\n", x,y);
}

/*Ejemplos 
1) Ingrese un valor entero
8
Ingrese un valor entero
9
σ0 : (x → 8, y → 9)
σf : (x → 8, y → 8) 

2) Ingrese un valor entero
-4
Ingrese un valor entero
-7
σ0 : (x → -4, y → -7)
σf : (x → -4, y → -4) */