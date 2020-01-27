//Day 2 Square and Cube Program
//Date 1-15-2020 IDE:repl.it tool
#include <iostream>
using namespace std;

int main()
 {
//variable declarations and initializations
double input = 0.0;
double square = 0.0, cube = 0.0;
int number1 = 0, number2 = 0, result = 0;

//Ask the user to input the number
cout << "Please enter a number: ";
cin >> input;

//Processes
square = input * input;
cube = square * input;

//Output
cout << "\nSquare is " << square << endl;
cout << "\nCube is " << cube << endl;

//Extended Challenge

cout << "Please enter number1 [space] number2: ";
cin >> number1 >> number2;

//Process (best place for new process)
result = (number1 * number2) + cube;

//Output clear result
cout << "( "<<number1<<" * "<<number2<<") + "<<cube<<" = "<<result<<endl;

return 0; //exit success
}