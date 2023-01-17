#pragma once
#include <iostream>

using namespace std;
void R (int arr[], int size, int size1){
    for (int i=0; i<size; i++) {
        cout << arr[i] << "; ";
    }
    cout<<endl;
    for (int i=size; i<size1; i++) {
        cout << arr[i] << "; ";
    }
}
void R1 (int size, int arr[] ){
    cout << "Even numbers: ";
    for (int i=0; i<size; i+=2){
        cout << arr[i]<< "; ";
    }
    cout << endl;
    cout << "Odd numbers: ";
    for (int i=1; i<size; i+=2){
        cout << arr[i]<< "; ";
    }
}