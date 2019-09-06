#include <iostream>

using namespace std;

int main(int argc, char ** argv) {

    cout << "C++:" << endl << "\t";

    long long limit = 600851475143;
    long long largestFactor = 0;

    long long i = 2;
    while(i * i < limit) {
        if(limit % i == 0) {
            limit /= i;
            largestFactor = i;
        } else {
            i += 1;
        }
    }

    if(limit > largestFactor)
        largestFactor = limit;

    cout << largestFactor << endl;

    return 0;
}
