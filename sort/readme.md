# sort
It is a unix based command. It is used to display the content from file in sorted manner.

# introduction
The main purpose of our program is to implement the basic functionality of unix based sort command through cpp program. 

# How to start
In this program there is only one file which is sort.cpp. In this file there are three functions are defined through which our program behaves like sort command of unix. following steps are followed to execute this program
    1. compile sort.cpp file by following command
        c:\> g++ sort.cpp -o sort.exe
    2. after compiling we need to execute sort.exe file as following command
        c:\>sort.exe
        sort.exe file can be execute with arguments or wihtout arguments.
    
# Test cases
    1. If execute this program without arguments then it takes input from keyboard till EOF.
        c:\> sort.exe
        1
        2
        3
        4
        and so on till the EOF.
    2. If we execute this program to pass file's name as argument which is not exists then it shows error message as following. 
        c:\> sort.exe hello.txt (hello.txt is not exist)
        sort: cannot read: hello.txt: No such file or directory
    3. If we execute this program to pass file's name as argument which is exists.
        c:\> sort.exe name.txt
        /*
            display the content of file in order manner
        */
    4. If we execute this program to pass more than one file's name then our program merge all data across files and display it in order manner. As shown in the following. 
        c:\> sort.exe names.txt friends.txt
        /*
            display the content from files in order manner
        */    
    5. If we execute this program to pass more one file's name in which any one file is not exist then our program show error message as discuss above and terminate our program normally. 