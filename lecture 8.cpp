#include <iostream>
using namespace std;

int main() {
    int array1[3] = {12, 14, 15};
    cout << array1[1] << endl;

    int array2[4] = {1, 2, 3, 4};
    for (int i = 0; i < 4; i++) {
        cout << array2[i] << endl;
    }

    int array3[3] = {1, 2, 3};
    for (int i = 0; i < 3; i++) {
        cout << i << "=" << array3[i] << endl;
    }

    return 0;
}
