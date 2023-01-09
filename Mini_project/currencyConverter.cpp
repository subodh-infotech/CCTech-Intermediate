#include "currency.hpp"
#include <iostream>

int main(){
    Currency currency;
    int code1, code2;
    double amount;
    char choice; // input for Y/N.

    currency.readFile("currency.txt");

    cout << "\nWelcome to CCTech currency Converter\n" << endl;
    do{
        code1:
        cout << "Select currency code from list - " << endl;
        currency.displayCurrencyCodeList();
        cin >> code1;
        if(!currency.validCode(code1)){
            cout << "Invalid input please \n";
            goto code1;
        }
            
        
        code2:
        cout << "Select the output currency from the list " << endl;
        currency.displayCurrencyCodeList(code1);
        cin >> code2;
        if((!currency.validCode(code2)) || (code2 == code1)){
            cout << "Invalid input please \n";
            goto code2;
        }
           
        cout << "Please, Enter the amount => " << endl;
        cin >> amount;

        currency.getResult(code1, code2, amount);

        cout << "\nDo you wish continuer with another conversion : ";
        cin >> choice;
        tolower(choice);
    }while(choice == 'y');
    
    return 0;
}