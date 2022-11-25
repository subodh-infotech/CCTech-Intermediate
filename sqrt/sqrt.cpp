#include <iostream>
#include <cmath>
#include <cerrno>
using namespace std;

double square_root(double num){
	double result;
	if(isless(num, 0.0)){
		throw runtime_error("Math error : Non-zero(0) value not allowed");
	}
	else{
		result = sqrt(num);
	}
	return result;
}

int main(){
	double input;
	cout << "Enter any number : ";
	cin >> input;
	try{
		cout << square_root(input) << endl;
	}
	catch(runtime_error &error){
		cout << error.what() << endl;
	}
	return 0;
}