#include <stdio.h>
#include "square.h"

int main() {
    printf("Hello World!\n");
    const int s = square(3);
    printf("Le carré de 3 vaut %d.\n", s);
    return 0;
}