#include "currency.hpp"
#include <fstream>
#include <iostream>
#include <sstream>
#include <algorithm>

void Currency :: readFile(string path){
    ifstream readFileStream(path, ios::in);
    if(readFileStream.is_open()){
        string line;
        while(getline(readFileStream, line)){
            extractCurrencyCode(line);
        }
    }else{
        cout << "Unable to read/open file !";
    }
}
double Currency :: extractUnit(string str){
    stringstream ss;
    ss << str;

    string word;
    double num = 0;
    while(!ss.eof()){
        ss >> word;
        if(stringstream(word) >> num){
            num = stod(word);
            break;
        }
    }
    return num;
}

string Currency :: getStringCode(string str){
    stringstream ss;
    ss << str;

    string word;
    double num;
    while(!ss.eof()){
        ss >> word;
        if(stringstream(word) >> num){}
    }
    
    transform(word.begin(), word.end(), word.begin(), ::toupper); // change currency code into Upper case.

    
    auto itr = find(currencyCodeList.begin(), currencyCodeList.end(), word); // store currency code into vector.
    if(itr == currencyCodeList.end())
        currencyCodeList.push_back(word);
    
    return word;
}

void Currency :: extractCurrencyCode(string code){
    string currencyCode1 = "";
    string currencyCode2 = "";
    double unit1, unit2;

    int equalIndex = code.find("=");
    unit1 = extractUnit(code.substr(0, equalIndex));
    unit2 = extractUnit(code.substr(equalIndex+1, code.length()));

    currencyCode1 = getStringCode(code.substr(0, equalIndex));
    currencyCode2 = getStringCode(code.substr(equalIndex+1, code.length())); 
    calculateCurrencyRateWithCurrencycode(currencyCode1, currencyCode2, unit1, unit2);
}

void Currency :: calculateCurrencyRateWithCurrencycode(string currencyCode1, string currencyCode2, double unit1, double unit2){
    string currencyCode = currencyCode1+"/"+currencyCode2;
    double rate = unit2/unit1;

    currencyCodeWithRate.insert(make_pair(currencyCode, rate));

    currencyCode = currencyCode2+"/"+currencyCode1;
    rate = unit1/unit2;

    currencyCodeWithRate.insert(make_pair(currencyCode, rate));
}

double Currency :: getConversion(string currencyCode, double amount){
    double totalAmount = 0;
    if(currencyCodeWithRate.find(currencyCode) != currencyCodeWithRate.end()){
        totalAmount = currencyCodeWithRate[currencyCode] * amount;
    }else{
        string code1 = currencyCode.substr(0, currencyCode.find("/"));
        string newCode = code1 + "/" + currencyCodeList[0];
        totalAmount = currencyCodeWithRate[newCode] *amount;
        newCode = currencyCodeList[0] + "/" + currencyCode.substr(currencyCode.find("/") + 1, currencyCode.length());
        totalAmount = currencyCodeWithRate[newCode] * totalAmount;
    }

    return totalAmount;
}

void Currency :: displayCurrencyCodeList(int codeIndex){
    // display list of currency code
    int i;
    for(i = 0; i < currencyCodeList.size(); ++i){
        if(codeIndex-1 == i)
            continue;
        cout << i+1 << " -> " << currencyCodeList[i] << endl;
    }
}

void Currency :: getResult(int inputCode, int outputCode, double amount){
    string input_Code = currencyCodeList[inputCode-1];
    string output_Code = currencyCodeList[outputCode-1];
    string code = input_Code + "/" + output_Code;

    double result = getConversion(code, amount);

    cout << amount <<" " << input_Code << " would be " << result << " " << output_Code << " on 2023-01-09" << endl;
}

bool Currency :: validCode(int code){
    if(code < 1 || code > currencyCodeList.size())
        return false;
    return true;
}