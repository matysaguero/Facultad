#include <stdio.h>
#include <stdbool.h>

char pedir_bool (void){
    char letra;

    printf ("Ingrese una letra\n");
    scanf ("%c",&letra);
    
    return letra;
}

bool es_vocal (char letra) {

    bool es_vocal = false;

    if (letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U' || letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
        return true;
    } else {
        return false;
    }
return letra;
}

int main (void) {
    char caracter;

    caracter = pedir_bool ();

    es_vocal (caracter);
    
    if (es_vocal(caracter)) {
        printf ("%c es vocal\n", caracter);
    } else {
        printf ("%c no es vocal\n", caracter);
    }
return 0;
}