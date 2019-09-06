#include <stdio.h>
#include <stdlib.h>

int main(int argc, char ** argv) {
    printf("C:\n\t");

    long long limit = 600851475143;
    long long largestFactor = 0;

    long long i = 2;
    while(i * i <= limit) {
        if(limit % i == 0) {
            limit /= i;
            largestFactor = i;
        } else {
            i++;
        }
    }

    if(limit > largestFactor)
        largestFactor = limit;

    printf("%lld\n", largestFactor);

    return 0;
}
