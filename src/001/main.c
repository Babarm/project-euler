#include <stdio.h>
#include <stdlib.h>

int main(int argc, char ** argv) {
    printf("C:\n\t");

    int result = 0;

    int n = 999 / 3;
    int mult3 = n * (n + 1) / 2;
    mult3 *= 3;

    n = 999 / 5;
    int mult5 = n * (n + 1) / 2;
    mult5 *= 5;

    n = 999 / 15;
    int mult15 = n * (n + 1) / 2;
    mult15 *= 15;

    result = mult3 + mult5 - mult15;

    printf("%d\n", result);

    return 0;
}
