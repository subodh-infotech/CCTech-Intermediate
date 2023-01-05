#include <iostream>
#include "Coins.h"
using namespace std;
Coins :: Coins(){
    amount = 0.0;
    coinsIdMap.insert(make_pair(1, "dime"));
    coinsIdMap.insert(make_pair(2, "nickel"));
    coinsIdMap.insert(make_pair(3, "quarter"));

    coinsIdWithValue.insert(make_pair(1, 0.05));
    coinsIdWithValue.insert(make_pair(2, 0.10));
    coinsIdWithValue.insert(make_pair(3, 0.25));
}

bool Coins :: isValidCoins(int coins_id){
    return (coinsIdMap.find(coins_id) != coinsIdMap.end());
}

void Coins :: totalAmount(int coins_id, int no_of_coins){
    amount = amount + (coinsIdWithValue.find(coins_id)->second * no_of_coins);
}

void Coins :: insertCoins(){
    int coins_id, no_of_coins;
    char yes_no;
    insert_coins:
    cout << "\nInsert coin =>"; 
    cout << "\n1 => dime";
    cout << "\n2 => nickel";
    cout << "\n3 => quarter";
    cout << "\n";
    cin >> coins_id;

    if(this->isValidCoins(coins_id)){
        cout << "\ntotal no. of coins => \n" ;
        cin >> no_of_coins;
        this->totalAmount(coins_id, no_of_coins);
    }else{
        cout << "\nInvalid coin input => " ;
        cout << "\n Insert coins again ..";
        cout << "\nyes/no => \n";
        cin >> yes_no;
        yes_no = tolower(yes_no);
        if(yes_no == 'y')
            goto insert_coins;
    }
}