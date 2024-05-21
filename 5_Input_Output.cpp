#include<iostream>
using namespace std;

int main(){
    int num1, num2;

    cout << "enter the value of num 1: " << endl; // Insertion operator
    cin >> num1; // Extraction operator

    cout << "enter the value of num 2: " << endl;
    cin >> num2;

    cout << "Sum of num1 and num2 is: " << num1+num2 << endl;
    return 0;
}