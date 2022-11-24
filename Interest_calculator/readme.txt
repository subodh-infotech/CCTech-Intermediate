
introduction:-
------------------
this program calculate the simple interest by appling Object-oriented concepts.
In this program, there is a class Interest which has some private data membeers and there are some functions to set the value for private data member as well as to calculate simple interest and display result.
following files are available in this program
1. s_interest.h --> It is the header file in which declaration of Interest class
2. s_interest.cpp --> It is the cpp file in which the implementation of Interest class
3. main.cpp -> It contains the main() method that invoke the methods which are available in Interest class.

start program :-
----------------
In this program main.cpp is a main file in which main() is available. so,
1. compile this programs by command line 
    like - 
        g++ s_interest.h s_interest.cpp main.cpp -o main.exe
    then main.exe file is generated for window OS. It is executable file for this program.
2. Now, type following command in you cmd ;
    .\main
    and press enter then this program starts execution.

Test case :-
--------------
1. If we put negative value for any of them (principle amount, rate and duration) then we will get error message.
    for example - 
    if we put -
    amount = -1000
    rate = 1.2
    duration : 2
    then 
    we will get output as runtime error message.


2. If we put 0 for any of them principle amount, rate and duration) then we will get error message.
    for example - 
    if we put -
    amount = 0
    rate = 1.2
    duration : 2
    then 
    we will get output as runtime error message.

3. If we put any real number except 0 or negative then we will get expected output.
    for example - 
    amount = 15000.500
    rate = 2.5
    duration = 50.5
    then we will get output as " Interest : 18938.1" 