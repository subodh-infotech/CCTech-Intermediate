# cat
Its stands for cancatenate. This command read the content of files and display on console. followig the syntax of cat command - 
    cat <file1_name_with_extension> <file2_name_with_extension> and so on. 
   
# introduction
In this program we try to implement functionality of UNIX cat command. In this program, cat.cpp is the main file in which main() funtion is exist. we compile this program as following command -
    c:\>  g++ cat.cpp -o cat
after compling this program we write following command to run this program
    c:\> cat.ext <argument_list>

# Test cases
1 :- If we don't pass any arguemnts then our program takes input contiously till the take input EOF. 
    c:\> cat.ext

2 :-If we pass any file's name as argument that does not exit then our program show error message like cat command
    C:\> cat.ext hello.txt
    cat: hello.txt: No such file or directory exist

3 :- If we pass file's name as argument that exist then our program show the content available in the file like cat command.
    c:\> cat.ext hi.txt
    /*
        show content from file
    */

4 :- If we pass two file's name as argument which are exist then our program show the content from that files in the same squence as the file's name are passed as arguments. It work same as cat command of unix.
    c:\> cat.ext hi.txt welcome.txt
    /*
        show the content from files.
    */
    here, our program show the content from first file and the show the content from second file.

5 :- If we pass two file's as argument in which one file exist and another file does not exist then our pgoram show the content from file and display error message for next file which are not exist. for example - 
    c:\> cat.ext hi.txt hello.txt
    /*
        show content of file 
        show error message for that file which is not exist.
    */
    here, suppose first file exist then our program show the constent fron file. if second file does not exist then our program shows the error message for that. 

6 :- If we pass directory's name as argument to our program then it shows error message similar to cat command of UNIX. 
    c:\> cat.exe welcome
    cat: welcome: No such file or directory 
