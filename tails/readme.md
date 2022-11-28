# tail
It is unix based command. It is the complement of head command. This command display the content of file from last line to till specified number of line. But, if we don't specified number of line then it display the till 10 number of lines from last line to beginning of the line.

# introduction
Here, We try to implement the basic functionality of tail command. In this program there is only one .cpp file in which main function is available. except main function there are two functions available to read the content from file and display it similar to tail command.

# How to start
to execute this program following steps are followed
    1. need to compile this program  - to compile this program following command is used. 
        c:\> g++ tail.cpp -o tail.exe
    2. after compiling this program tail.exe file is generated whihc is executale file for window operating system. following commands are used to execute 
        c:\> tail.exe

    there are several ways to execute this program i.e. we can execute this program with argument or wihtout arguments.

# Test cases
    1. if we execute this program without argument our program take input till the EOF. as shown in the example - 
        c:\> tail.exe
        1
        2
        3
        4
        and so on till the EOF.
    
    2. If we execute this program to pass file's name as one argument and that file does not exist then our program display error message as shown in the following. 
        c:\> tail hello.txt
        tail: cannot open 'hello.txt' for reading: No such file or directory
    3. If we execute this program to pass file's name as one argument and that file exist then our program display the 10 line from file from last towards beginning. It works same as tail command of unix.
        c:\> tail names.txt
        /*
            display the content from file.
        */
    4. If we execute this program by passing two file's name arguments in which one file is not exist and another file exist then our program display the content from existing file and display error message for not-existing file. as shown in the following example - 
        c:\> tail.exe names.txt hi.txt
        /*
            display the content from names.txt file
            show error message for hi.txt file
        */
    5. If we execute this program by passing more than one file's name then our program display the content from each file followed by file's name as heading. 
        c:\> tail.exe names.txt colors.txt
        /*
            display content from both file separately. 
        */
    6. If we execute this program by passing more than one file's name as argument then our program display the content from existing file by heading file name and display the error message for not-existing file. for example - 
        c:\> tail.exe names.txt hi.txt (here, names.txt exist and hi.txt doesn't exist)
        /*
            display content from names.txt file 
            display error message for hi.txt file
        */
