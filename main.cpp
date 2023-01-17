#include <iostream>
#include "share.h"
#include "math_functions.h"
#include "array_functions.h"
using namespace std;
int main() {
    string y;
    int size;
    int mas[size];
    cout << "Enter quantity of elements in array: ";
    cin >> size;
    cout << endl << "Enter numbers, which have integer root."<< endl;
    InputArray(mas, size);
    PrintArray(mas, size);
    cout << endl;
    cout << "E";
    do{
        cout << "nter index of element, which root you would know: ";
        int i;
        cin >> i;
        cout << Sqrt(mas[i])<< endl;

        cout << R"(Would you like to continue? yes=>"yes", no => "no")";
        cin >> y;
        if (y=="yes"){
            cout << "Well, now e";
        }
    }while (y=="yes");
    R1(size, mas);
    return 0;
}
