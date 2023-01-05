#include <iostream>
#include <stdlib.h>
#include "Products.h"


int main(){
    Coins coins;
    Products products;
    
    char ch;
    do{
        system("cls");
        coins.insertCoins();
        int product_id = products.selectProduct();
        products.dispensed(coins, product_id);
        ch = getchar();
    }while(ch != EOF);

    return EXIT_SUCCESS;
}
