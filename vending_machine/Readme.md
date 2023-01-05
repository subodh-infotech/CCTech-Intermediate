# Introduction
By this program I tried to implement the logic about the working of vending machine. This program is written in C++ language. In this program there are two classes are created - Coins and Products.
For above classes there are two header file - Coins.h and Products.h for respective classes and also its implementation cpp file. 
Except these 'unordered_map' STL are used.

# Steps for execution
We need to follow some steps to run this program.
Step -> 1: 
Compile this program and generate executable file. for this following command can be written on terminal  - 
    g++ Coins.h Coins.cpp Products.h Products.cpp VendingMachine.cpp -o VendingMachine.exe

Step -> 2:
After compiling the program we use the following command to execute the program
    VendingMachine.exe

# Test cases
This program is tested on following secario
1. if input total amount is equal to total expense of product then this program display following Message - 
    "THANK YOU"
2. if input total amount is greater than total expense of products then this program returns the remaing amount with following message
    "Get your amount => amount"
3. If input total amount is less than the total expense of products then this program display folloiwng message 
    "total Expense =>
    Price of products => 
    your input amount =>
    "

    After display message this program ask again to insert more coins:
    (1) If user insert more coins then this program dispensed the product
    (2) user can collect their coins
