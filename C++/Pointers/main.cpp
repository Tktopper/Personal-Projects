#include <iostream>

using namespace std;

void swapPointers(int* ptr1, int* ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main() {
    int num1 = 5;
    int num2 = 10;

    int* ptr1 = &num1;
    int* ptr2 = &num2;

    cout << "Before swapping:" << endl;
    cout << "num1 = " << *ptr1 << ", num2 = " << *ptr2 << endl;

    swapPointers(ptr1, ptr2);

    cout << "After swapping:" << endl;
    cout << "num1 = " << *ptr1 << ", num2 = " << *ptr2 << endl;

    return 0;
}
