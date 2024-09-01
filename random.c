#include <stdlib.h>

char randchar() {
    // Use ASCII for A = 65 and Z = 90
    int A = 65;
    int Z = 90;
    return A + rand() % (Z + 1 - 65);
}