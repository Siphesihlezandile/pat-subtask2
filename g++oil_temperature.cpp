#include <iostream>
using namespace std;

int main()
{
    // Variable declarations
    int firstTemp, secondTemp, thirdTemp;

    // Input first temperature
    cout << "Enter the first temperature reading: ";
    cin >> firstTemp;

    // Input second temperature
    cout << "Enter the second temperature reading: ";
    cin >> secondTemp;

    // Check increase between first and second reading
    if (secondTemp > firstTemp + 50)
    {
        cout << "Reduce fryer heat before taking the third reading." << endl;
    }
    else if (secondTemp < firstTemp + 10)
    {
        cout << "Increase the fryer heat before taking the third reading." << endl;
    }

    // Input third temperature
    cout << "Enter the third temperature reading: ";
    cin >> thirdTemp;

    // Check if oil is ready for frying
    if (thirdTemp >= 150 && thirdTemp <= 190)
    {
        cout << "You may start frying the Magwinyas." << endl;
    }
    else
    {
        cout << "Oil is not ready for frying!" << endl;
    }

    return 0;
}
