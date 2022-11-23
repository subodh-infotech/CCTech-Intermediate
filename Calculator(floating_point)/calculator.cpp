#include<iostream>
#include <cfloat>

using namespace std;

void isValidInput(double number1, double number2){
    if(number1 > DBL_MAX || number1 < DBL_MIN || number2 > DBL_MAX || number2 < DBL_MIN ){
        throw runtime_error("Domain error : Input value is not suitable for function" );
    }
}

void sum(double number1, double number2){
    if((number1 + number2) > DBL_MAX || ((number1 + number2) < DBL_MIN)){
        long double sum = number1 + number2;
        cout << '\n' << "sum : " << sum;
    }
    else{
        double sum = number1 + number2;
        cout << endl << "Sum : "<< sum;
    }
}

void subtract(double number1, double number2) {
    if ((number2 > 0 && number1 < DBL_MIN + number2) || (number2 < 0 && number1 < DBL_MIN + number2)) {
        long double sub = number1 - number2;
        cout << '\n' << "sub : " << sub;
    } else {
        double sub = number1 + number2;
        cout << endl << "Subtraction : " << sub;
    }
}

void Multiplication(double number1, double number2) {
    
    if((number1 >= DBL_MAX && number2 > 1) || (number2 >= DBL_MAX && number1 > 1)){
        long double mul = number1 * number2;
        cout << '\n' << "Multiplication : " << mul;
    }
    else if((number1 <= DBL_MIN && number2 < 0) ||(number2 <= DBL_MIN && number1 < 0)){
        long double mul = number1 * number2;
        cout << '\n' << "Multiplication : " << mul;
    }
    else {
        double mul = number1 * number2;
        cout << '\n' << "Multiplication : " << mul;
    }
}


void division(double base, double denominator){
    if((denominator == 0) || ((base == INT_MIN) && (denominator == -1))){
        throw runtime_error("Pole error : Calculation returns to large value");
    }
    else{
        double div;
        div = base/denominator;
        cout << "\nDivision : " << div;
    }
}

int main()
{
    int choice;    
    do{
        cout << "\nPress key as following :- ";
        cout << "\n1 - for sum";
        cout << "\n2 - for substraction";
        cout << "\n3 - for multiplication";
        cout << "\n4 - for division";
        cout << "\n0 - for exit";
        cout << "\n\n Enter your choice => ";
        cin >> choice;

        try{
            switch(choice){
                case 0:
                    exit(0); break;
                case 1: 
                    double number1, number2;
                    cout << endl << "Enter two number (floating point) : ";
                    cin >> number1;
                    cin >> number2;
                    isValidInput(number1, number2);
                    sum(number1, number2);
                    break;
                case 2:
                    double number1, number2;
                    cout << endl << "Enter two number (floating point) : ";
                    cin >> number1;
                    cin >> number2;
                    isValidInput(number1, number2);
                    subtract(number1, number2);
                    break;
                case 3: 
                    double number1, number2;
                    cout << endl << "Enter two number (floating point) : ";
                    cin >> number1;
                    cin >> number2;
                    isValidInput(number1, number2);
                    Multiplication(number1, number2);
                    break;
                case 4:
                    double number1, number2;
                    cout << endl << "Enter two number (floating point) : ";
                    cin >> number1;
                    cin >> number2;
                    isValidInput(number1, number2);
                    division(number1, number2);
                    break;
                default:
                    cout << '\n' << "Invalid Iinput !";
            }
        }
        catch(runtime_error &error){
            cout << error.what();
        }        
    }while(choice != 0);
    return 0;
}