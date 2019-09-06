#include <stdio.h>
#include <stdlib.h>

int is_palindrome(int val) {
    int copy = val;
    int rev = 0;
    while(copy != 0) {
        rev *= 10;
        rev += (copy % 10);
        copy /= 10;
    }

    return val == rev;
}

int main(int argc, char ** argv) {
    printf("C:\n\t");

    int largest = 0;

    for(int a = 100; a <= 999; a++) {
        for(int b = 100; b <= 999; b++) {
            int c = a * b;
            if(is_palindrome(c) && c > largest)
                largest = c;
        }
    }

    printf("%d\n", largest);

    return 0;
}
