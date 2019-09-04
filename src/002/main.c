#include <stdio.h>
#include <stdlib.h>

int main(int argc, char ** argv) {
    printf("C:\n\t");

    int result = 0, a = 1, b = 1, fib = 0;

    do {
        a = b + fib;
        b = a + fib;
        fib = a + b;
        result += fib;
    } while(fib < 4000000);

    printf("%d\n", result);

    return 0;
}
