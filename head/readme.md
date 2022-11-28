# head 
It is the unix command that is used to display data from file till specified number of line. If we don't specified number of line then is display 10 lines of content from file. 

here, with the help of this program we try to implement the default behaviour of head command. 

# introduction
In this program there is only one cpp file in which two functions are defined - one is main function and second is readFile() function which read the content from files and display on the console. If specified file does not exist then our program display error message on console. 

# How to start
first, we need to compile this program. so, following command is followed to compile this program
    1. compile this program as follow - 
        c:\> g++ head.cpp -o head.exe
    2. after compilation 'head.exe' file is generated which is executable file for window operating system. after compilation we execute 'head.exe' file as following. 
        c:\> head.exe
    there are several ways to execute this program i.e. it can be execute with argument or without arguments.

# Test cases
    1. we execute this program without any argument them our program takes input till the EOF. It behaves similar to unix head command.
        c:\> head.exe
        1
        1
        2
        2
        3
        3
        and so on till EOF.
    2. If we execute this program to pass file's name as argument which is not exists then it shows error message as following. 
        c:\> head.exe hi.txt (hello.txt is not exist)
        head: cannot open 'hi.txt' for reading: No such file or directory

    3. If we execute this program to pass file's name as argument which is exists.
        c:\> head.exe hello.txt
        /*
            display the content of file till the 10 lines.
        */

    4. If we execute this program to pass more than one file's name then our program display content from each file till 10 lines. As shown in the following. 
        c:\> head.exe names.txt friends.txt
        /*
            ==> file's name <==
            display the content from each file
        */  

    5. If we execute this program to pass more one file's name in which some files are to exist then our program display content from each file which are exist and display error message for that files which are not exist. 