#include<iostream>
using namespace std;

void sum(){
    int number1, number2;
    cout << "\nEnter first number :";
    cin >> number1;
    cout << "\nEnter second number :";
    cin >> number2;

    if((number1 > INT_MAX && number1 < INT_MIN) || (number2 > INT_MAX && number2 < INT_MIN)){
        throw runtime_error("Math error: Input value out of range");
    }
    else if((number1 >= INT_MAX && number2 > 0) || (number2 >= INT_MAX && number1 > 0))
    {
        unsigned int sum = number1 + number2;
        cout << "\nsum : " << sum;
    }    
    else{
        cout << "\nsum : " << number1 + number2;
    }
}

void substract() {
    int number1, number2;
    cout << "\nEnter first number :";
    cin >> number1;
    cout << "\nEnter second number :";
    cin >> number2;

    signed int diff;

    if ((number2 > 0 && number1 < INT_MIN + number2) || (number2 < 0 && number1 > INT_MAX + number2)) {
         throw runtime_error("Math error: Input value out of range");
    } else {
        diff = number1 - number2;
    }
    cout << endl << "substraction : " << diff;
}

void Multiplication() {
    signed int number1, number2;
    cout << "\nEnter first number :";
    cin >> number1;
    cout << "\nEnter second number :";
    cin >> number2;

    if((number1 >= INT_MAX && number2 > 1) || (number2 >= INT_MAX && number1 > 1)){
        unsigned int mul = number1 * number2;
        cout << '\n' << "Multiplication : " << mul;
    }
    else if((number1 <= INT_MIN && number2 < 0) ||(number2 <= INT_MIN && number1 < 0)){
        unsigned int mul = number1 * number2;
        cout << '\n' << "Multiplication : " << mul;
    }
    else {
        int mul = number1 * number2;
        cout << '\n' << "Multiplication : " << mul;
    }
}


void division(){
    int base, denominator;
    cout << "\nEnter base for division : ";
    cin >> base;
    cout << "\nEnter denomication : ";
    cin >> denominator;
    int div;
    if((denominator == 0) || ((base == INT_MIN) && (denominator == -1))){
        throw runtime_error("Math error : invalid input");
    }
    else{
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

        switch(choice){
            case 0: exit(0);break;
            case 1: 
                try{
                    sum();
                }catch(runtime_error &e){
                    e.what();
                }
                break;
            
            case 2: 
                try{
                    substract();
                }catch(runtime_error &e){
                    e.what();
                }
                break;
            case 3: 
                try{
                    Multiplication();
                }catch(runtime_error &e){
                    e.what();
                }
                break;
            case 4: 
                try{
                    division();
                }catch(runtime_error &e){
                    e.what();
                }
                break;
        }
    }while(choice != 0);
    return 0;
}