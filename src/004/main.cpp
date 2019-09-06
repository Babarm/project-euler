#include <iostream>

using namespace std;

int main(int argc, char ** argv) {

    cout << "C++:" << endl << "\t";

    auto is_palindrome = [] (int val) {
        int copy = val;
        int rev = 0;
        while(copy != 0) {
            rev *= 10;
            rev += (copy % 10);
            copy /= 10;
        }

        return rev == val;
    };

    int largest = 0;

    for(int a = 100; a <= 999; a++) {
        for(int b = 100; b <= 999; b++) {
            int c = a * b;
            if(is_palindrome(c) && c > largest)
                largest = c;
        }
    }

    cout << largest << endl;

    return 0;
}
