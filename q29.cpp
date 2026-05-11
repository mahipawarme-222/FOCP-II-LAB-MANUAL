// Q29. Minimum Temperature from 30-Day Log
#include <iostream>
using namespace std;
int main() {
    float temp[30], minTemp;
    for (int i = 0; i < 30; i++) {
        cout << "Day " << i+1 << " temperature: ";
        cin >> temp[i];
    }
    minTemp = temp[0];
    for (int i = 1; i < 30; i++)
        if (temp[i] < minTemp) minTemp = temp[i];
    cout << "Minimum Temperature: " << minTemp << endl;
    return 0;
}