#include <stdbool.h>
#include <stdio.h>


bool checkNote(double nota) {

    if((nota < 0.0) || (nota > 10.0)) {
        printf("nota invalida\n");
        return false;
    } else {
        return true;
    }

}