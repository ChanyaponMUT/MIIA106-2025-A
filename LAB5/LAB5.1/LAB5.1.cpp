// LAB5.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <string>
using namespace std;
double rArea(double leight, double width)
{
    double area = leight * width;
    return area;
}

double cArea(double r)
{
    const double PI = 3.14159;
    double carea = PI * r * r;
    return carea;

}
int main()
{
    double r, leight, width;
    cout << "=======Rectangle Area======= " << endl;
    cout << "Enter Length: ";
    cin >> leight;
    cout << "Enter Width: ";
    cin >> width;
    cout << "Area of Rectangle: " << rArea(leight, width) << endl;


    cout << "=======Circle Area======= " << endl;
    cout << "Enter Radius: ";
    cin >> r;
    cout << "Area of Circle: " << cArea(r) << endl;
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
