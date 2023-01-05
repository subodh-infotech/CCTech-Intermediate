#include "Products.h"

Products :: Products(){
    productIdMap.insert(make_pair(101, "cola"));
    productIdMap.insert(make_pair(102, "chips"));
    productIdMap.insert(make_pair(103, "candy"));

    productPrice.insert(make_pair(101, 1.0));
    productPrice.insert(make_pair(102, 0.50));
    productPrice.insert(make_pair(103, 0.65));

    productsLimits.insert(make_pair(101, 12));
    productsLimits.insert(make_pair(102, 12));
    productsLimits.insert(make_pair(103, 12));
}

bool Products :: isValidProduct(int product_id){
    return (productIdMap.find(product_id) != productIdMap.end());
}

void Products :: totalExpense(int product_id, int no_of_products){
    this->expense = productPrice.find(product_id)->second * no_of_products;
}

bool Products :: productsInRange(int product_id, int no_of_products){
    return (no_of_products < productsLimits.find(product_id)->second);
}

int Products :: selectProduct(){
    int product_id, no_of_products;
    char yes_no;
    select_products:
    cout << "\nSelect Product :";
    cout << "\n101 => Cola";
    cout << "\n102 => Chips";
    cout << "\n103 => Candy";
    cout << "\n";
    cin >> product_id;
    if(this->isValidProduct(product_id)){
        cout << "\nTotal no of products => \n";
        cin >> no_of_products;

        if(this->productsInRange(product_id, no_of_products)){
            this->totalExpense(product_id, no_of_products);
            this->productsLimits[product_id] -= no_of_products;
        }else{
            cout <<"\nSOLD OUT";
            cout << "\nSelect another product => ";
            getchar();
            goto select_products;
        }

    }else{
        cout << "\nInvalid product Id..";
        cout << "\nDo you want to buy another product ";
        cout << "\nPrest Y/N => ";
        cin >> yes_no;
        yes_no = tolower(yes_no);
        if(yes_no == 'y')
            goto select_products;
    }
    return product_id;
}

void Products :: dispensed(Coins &coins, int product_id){
    char yes_no;
    dispense:
    if(coins.amount == this->expense){
        cout << "\nTHANK YOU";
        coins.amount = 0;
        getchar();
    }else if(coins.amount < this->expense){
        cout << "\nTotal Expense => " << this->expense;
        cout << "\nPrice of " << this->productIdMap.find(product_id)->second << ": " << this->productPrice.find(product_id)->second;
        cout << "\nYour amount => " << coins.amount;
        cout << "\n\nDo you want to insert coins :";
        cout << "\n Y/N => ";
        cin >> yes_no;
        yes_no = tolower(yes_no);
        if(yes_no == 'n'){ // get returns coins
            cout << "\nYour return coins : " << coins.amount;
            coins.amount = 0;
            getchar();
        }else{
            coins.insertCoins();
            goto dispense;
        }
        
    }else if(this->expense < coins.amount){
        cout << "\nGet your remaing amount : " << coins.amount - this->expense;
        coins.amount = 0;
    }else{
    }

}