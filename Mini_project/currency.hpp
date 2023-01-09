#ifndef CURRENCY_H
#define CURRENCY_H
#endif
#include <string>
#include <map>
#include <vector>

using namespace std;

class Currency{
    map<string, double> currencyCodeWithRate;
    vector<string> currencyCodeList;
    double extractUnit(string str);
    string getStringCode(string str);
    void extractCurrencyCode(string text);
    void calculateCurrencyRateWithCurrencycode(string code1, string code2, double unit1, double unit2);
    double getConversion(string currencyCode, double amount);

public:
    void readFile(string path);
    void getResult(int inputCurrencyCode, int outputCurrencyCode, double amount);
    void displayCurrencyCodeList(int codeIndex = -1);
    bool validCode(int currencyCode);
};