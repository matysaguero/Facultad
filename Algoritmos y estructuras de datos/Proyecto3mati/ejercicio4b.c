#include <stdio.h>

int main(void) {
    int x,y,z,m;
    printf ("Introduzca cuatro valores enteros\n");
    scanf ("%d", &x);
    scanf ("%d", &y);
    scanf ("%d", &z);
    scanf ("%d", &m);
    printf ("σ0 : (x → %d, y → %d, z → %d, m → %d)\n", x, y, z, m);

    if (x<y) {
        m = x;
    } else {    
        m = y;
    }

    printf ("σ1 : (x → %d, y → %d, z → %d, m → %d)\n", x, y, z, m);
    
    if (m<z) {
        ;
    } else {
        m = z;
    }
    printf ("σ2 : (x → %d, y → %d, z → %d, m → %d)\n", x, y, z, m);

return 0;
}

// b) En este caso que se encontraba en el pdf, la variable 'm' termina por valer 4. 
// Var x,y,z,m: Int;
//  x := 5;
//  y := 4;
//  z := 8;
//  m := 0;
// [σ0 : (x → 5, y → 4, z → 8, m → 0)]
//  if (x < y) → m := x
//      ▫ (x ≥ y) → m := y
// [σ1 : (x → 5, y → 4, z → 8, m → 4)]
//  if (m < z) → skip
//      ▫ (x ≥ y) → m := z
//  fi
// [σ2 : (x → 5, y → 4, z → 8, m → 4)]

// Var x,y,z,m: Int;
//  x := 0;
//  y := 15;
//  z := 98;
//  m := 3;
// [σ0 : (x → 0, y → 15, z → 98, m → 3)]
//  if (x < y) → m := x
//      ▫ (x ≥ y) → m := y
// [σ1 : (x → 0, y → 15, z → 98, m → 0)]
//  if (m < z) → skip
//      ▫ (x ≥ y) → m := z
//  fi
// [σ2 : (x → 0, y → 15, z → 98, m → 0)]

// Var x,y,z,m: Int;
//  x := -4;
//  y := 6;
//  z := -14;
//  m := 50;
// [σ0 : (x → -4, y → 6, z → -14, m → 50)]
//  if (x < y) → m := x
//      ▫ (x ≥ y) → m := y
// [σ1 : (x → -4, y → 6, z → -14, m → -4)]
//  if (m < z) → skip
//      ▫ (x ≥ y) → m := z
//  fi
// [σ2 : (x → -4, y → 6, z → -14, m → -14)]
