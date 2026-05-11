// Q28. Sum of Even and Odd Numbers in Array of 5
#include <iostream>
using namespace std;
int main() {
    int arr[5], evenSum = 0, oddSum = 0;
    for (int i = 0; i < 5; i++) {
        cout << "Enter element " << i+1 << ": ";
        cin >> arr[i];
        if (arr[i] % 2 == 0) evenSum += arr[i];
        else oddSum += arr[i];
    }
    cout << "Sum of Even numbers: " << evenSum << endl;
    cout << "Sum of Odd numbers: " << oddSum << endl;
    return 0;
}