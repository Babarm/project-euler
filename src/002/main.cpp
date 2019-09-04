#include <iostream>

using namespace std;

int main(int argc, char ** argv) {

    cout << "C++:" << endl << "\t";

    int result = 0, a = 1, b = 1, fib = 0;

    do {
        a = b + fib;
        b = a + fib;
        result += fib;
        fib = a + b;
    } while(fib < 4000000);

    cout << result << endl;

    return 0;
}
