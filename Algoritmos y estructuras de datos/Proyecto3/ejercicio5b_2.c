#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int x,i,temp1;
    bool res;
    printf ("Ingrese un valor entero\n");
    scanf ("%d", &x);
    temp1 = 1;
res = temp1;
i = 2;
    printf ("σ0 : (x → %d, i → %d, res → %d)\n", x, i, res);
res = true;
    
    do {
        res = res && (x % i != 0);
        i ++;
    printf ("σ1: (x → %d, i → %d, res → %d)\n", x, i, res);
    } while (i < x && res);

return 0;
}

// 2) Ejemplo del enunciado del Proyecto 3.
// Var x,i,res: Int;
//  x := 5;
//  i := 0;
// res := false;
// [σ0 : (x → 5, i → 0, res → false )]
// do (i < x ∧ res) →
//      res := True ∧ mod (x,i) != 0 
//      i := i + 1
// od

// 3) Básicamente, este programa sirve para comprobar si un número es primo mediante la fuerza bruta.
// Primero supondremos que el entero ingresado es primo, entonces, luego de evaluar la expresión mod (x,i) != 0,
// "i" siendo los divisores que irán incrementando luego de asignar i := i + 1, el ciclo se irá repitiendo hasta que "x"
// deje de ser mayor a "i"; El resultado de esa expresión, nos devolverá un booleano que indicará si x es primo o no.


// [σ₁⁰: (x → 5), (i → 2), (res → True),
// σ₁¹: (x → 5), (i → 3), (res → True),
// σ₁²: (x → 5), (i → 4), (res → True),
// σ₁³: (x → 5), (i → 5), (res → True)].