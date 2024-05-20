#include <stdio.h>

int main(void) {
    int x,y,i;
    i = 0; // tengo entendido que en este caso esta variable vendría a representar las iteraciones.
    printf ("Ingrese dos valores enteros\n");
    scanf ("%d",&x);
    scanf ("%d",&y);
    printf ("σ0 : (x → %d, y → %d, i → %d)\n", x, y, i);

    do {
        x = x - y;
        i ++; // o en todo caso i = i + 1
    
    printf ("σ1: (x → %d, y → %d, i → %d)\n", x, y, i);
    } while (x >= y);

return 0;
}

// 1) Ejemplo del enunciado del Proyecto 3.
// Var x,y,i: Int;
//  x := 13;
//  y := 3;
//  i := 0;
// [σ0 : (x → 13, y → 3, i → 0)]
// do (x ≥ y) →
//      x := x - y
//      i := i + 1
//  [σ1 : (x → 10, y → 3, i → 1), (x → 7, y → 3, i → 2).......]
// od

// [σ₁⁰: (x → 10), (y → 3), (i → 1),
// σ₁¹ : (x → 7), (y → 3), (i → 2),
// σ₁²: (x → 4), (y → 3), (i → 3),
// σ₁³: (x → 1), (y → 3), (i → 4)].

// 3) Básicamente, este programa es un algoritmo de la división, donde:
// "x" vendría a ser mi dividendo, o número al que quiero divivir y, por ende, mi resto si mi división no es entera.
// "y" mi divisor, ya que es el número que vamos restando constantemente a mi dividendo ("x"), hasta que este sea menor que mi divisor.
// "i" mi cociente, ya que cuenta la cantidad de iteraciones que pudimos realizar en esa división, o la cantidad de veces que pudimos dividir "x" en "y".
