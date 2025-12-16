// LAB4.6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    char sensorStatus;

    cout << "=== Line Following Robot Simulation (Continuous) ===" << endl;
    cout << "Commands:" << endl;
    cout << " a : Turn Left" << endl;
    cout << " d : Turn Right" << endl;
    cout << " w : Go Forward" << endl;
    cout << " s : STOP and Exit Program" << endl;
    cout << "----------------------------------------------------" << endl;

    while (true)
    {
        cout << "\nInput Sensor: ";
        cin >> sensorStatus;

        if (sensorStatus == 's')
        {
            // กรณี s: สั่งหยุดรถ เเละ สั่งจบโปรเเกรม 
            cout << "Action: STOP (STOP)" << endl;
            break;
        }
        else if (sensorStatus == 'a')
        {
            cout << "Action: Turn LEFT (Turn LEFT)" << endl;
        }
        else if (sensorStatus == 'd')
        {
            cout << "Action: Turn RIGHT (Turn RIGHT)" << endl;
        }
        else if (sensorStatus == 'w')
        {
            cout << "Action: Go FORWARD (Go FORWARD)" << endl;
        }
        else 
        {
            cout << "Error: uNKNOWN command!" << endl;
        }
    }
    cout << "Program Terminated." << endl;
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
