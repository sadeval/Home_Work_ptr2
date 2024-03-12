#include <iostream>
using namespace std;

void exponent(int num1, int num2, int* result) {
    *result = 1;
    for (int i = 0; i < num2; i++) {
        *result *= num1;
    }
}

int main() {

    int A, B;

    cout << "Input A: ";
    cin >> A;
    cout << "Input B: ";
    cin >> B;

    int result;

    exponent(A, B, &result);

    cout << "A in B exponent equal: " << result << "\n";

    return 0;
}