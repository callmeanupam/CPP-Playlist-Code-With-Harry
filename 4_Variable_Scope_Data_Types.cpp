// A variable is a container that holds the data.
/* Variable can be of various types. Primarily we have these variable types in c++.
1. int = 4;
2. float = 4.5;
3. char = 'a' 'b'
4. double = 1.3432;
5. bool = true, false OR yes, no.
E.g. int sum = 34, means sum is an integer variable which holds 34 in the memory.
*/

/* -- SYNTAX FOR DECLARING VARIABLES IN C++ -- 

data_type variable_name = value;
ex: int a = 5;

- Based on scope, variable can be classified into two types:
1. Local variables.
2. Global variables.

-- VARIABLE SCOPE ---
- Scope of a variable is the region in code where
- based on scope of the variable 
*/

#include<iostream>
using namespace std;

int glo = 6;
void sum(){
    int a;

}

int main(){
    int a = 4, b = 5;
    sum();
    cout << glo << endl;
    // cout << "this is tutorial 4" << endl;
    // cout << "The value of a is " << a << endl;
    // cout << "The value of b is " << b << endl;
    return 0; 
}