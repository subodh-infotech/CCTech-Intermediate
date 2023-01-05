#ifndef PRODUCTS_H
#define PRODUCTS_H
#endif

#include <iostream>
#include <unordered_map>
#include "Coins.h"

using namespace std;

class Products{
    public:
    unordered_map<int, string> productIdMap;
    unordered_map<int, double> productPrice;
    unordered_map<int, int> productsLimits;

    double expense;
    Products();
    bool isValidProduct(int productId);
    void totalExpense(int product_id, int no_of_product);
    bool productsInRange(int product_id, int no_of_products);
    void dispensed(Coins &coins, int product_id);
    int selectProduct();
};