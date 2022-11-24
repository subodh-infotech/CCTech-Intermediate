#include <iostream>
#include <cfloat>
#include "s_interest.h"

using namespace std;

void Interest ::set_amount(){
    cout << "Enter principle amount : " << endl;
    cin >> this->amount;
    if(this->amount < 1){
        cout << endl << "principle amount should not be zero(0) or negative value";
        throw runtime_error("Math error : Invalid Principle amount" );
    }
    else{
        this->amount = amount;
    }
}

void Interest ::set_rate(){
    cout << "Enter rate for interest : " << endl;
    cin >> this->rate;
    if(this->rate <= 0){
        cout << endl << "rate shoule not be zero(0) or negative value";
        throw runtime_error("Math error : Invalid rate value");
    }
    else{
        this->rate = rate;
    }
}

void Interest :: set_duraton(){
    cout << "Enter duration for interest (in years) : " << endl;
    cin >> this->duration;
    if(this->duration <= 0){
        cout << endl << "duration should not be zero(0) or negative value";
        throw runtime_error("Math error : Invalid duration value");
    }
    else{
        this->duration = duration;
    }
}

void Interest :: calculate_interest(){
    this->_interest = (this->amount * this->rate * this->duration) / 100.0;
}

void Interest::display(){
    cout << endl << "Interest : " << this->_interest;
}