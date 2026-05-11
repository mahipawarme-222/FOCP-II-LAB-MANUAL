#include <iostream>
using namespace std;
int main() {
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;
    int arr[20] = {};
    for (int i = 0; i < rows; i++) {
   
        for (int j = i; j >= 1; j--)
            arr[j] = arr[j] + arr[j-1];
        arr[0] = 1;
        for (int sp = 0; sp < rows - i - 1; sp++) cout << " ";
        for (int j = 0; j <= i; j++) cout << arr[j] << " ";
        cout << endl;
    }
    return 0;
}