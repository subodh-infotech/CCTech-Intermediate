#ifndef COINS_H
#define COINS_H
#endif

#include <unordered_map>
#include <string>

using namespace std;

class Coins{
    unordered_map<int, string> coinsIdMap;
    unordered_map<int, double> coinsIdWithValue;

    public:
    Coins();
    double amount;
    void totalAmount(int coins, int no_of_coins);
    bool isValidCoins(int coin_id);
    void insertCoins();
};