#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    
    cout << "The numbers in reverse order: " << c << " " << b << " " << a << endl;

    int array[5];
    
    for(int i = 0; i < 5; ++i) {
        array[i] = i + 1;
    }

    cout << "Array elements: ";
    for(int i = 0; i < 5; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}
