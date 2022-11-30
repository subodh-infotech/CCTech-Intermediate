
# Introduction
This is cpp program that get the complete path or filename with extension as argument and returns first_index of filename's first character from complete path and las_index of filename's last character from complete path.

# How to start
In this program there is onely one file (getFilenameIndices.cpp) which contains the some function to work properly. following steps are followed to execute this program
    1. compile this program --> to start this program first we need to compile this program as following command
        c:\> g++ getFilenameIndices.cpp -o getFilenameIndices.exe
        then 'getFilenameIndices.exe' file is create by compiler which is executable file for windows operating system.
    2. Now, to run this program following command is written
        c:\> getFilenameIndices.exe

# Strategy to solve the problem
after taking the complete path as argument we get the basename from complete path for this I wrote login inside getBasename() function inside getBasename() function I called the removeExtention() function to remove the extension from file's name. 
after removing extension from file's name, I called removeWords() function to remove the un-wanted words from file's name and return remaining character of file's name. After doing such activities I called removeWordSeparator() function to remove words separator character from file's name like - '.', '_', '-'. and finally getBasename() function returns exactly file's name as we want. 

after getting exact file's name, I called getFilenameIndices() method to return the indices first character of file's name and last character of file's name with compare to complte path as we provided as argument. 

After that we call main() method to execute this program and get expected output.

# Test cases
Inside this program assert() method is used to check the test cases. 

following is the test cases (here, show in JSON format)
{

  "src/Hiker_spec.re": [4,9],
  "test/hiker_test.exs": [5,10],
  "wibble/test/hiker_spec.rb": [12,17],
  "hiker_steps.rb": [0,5],
  "hiker_spec.rb": [0,5],
  "test_hiker.rb": [5,10],
  "test_hiker.py": [5,10],
  "test_hiker.sh": [5,10],
  "tests_hiker.sh": [6,11],
  "test_hiker.coffee": [5,10],
  "hiker_spec.coffee": [0,5],
  "hikerTest.chpl": [0,5],
  "hiker.tests.c": [0,5],
  "hiker_tests.c": [0,5],
  "hiker_test.c": [0,5],
  "hiker_Test.c": [0,5],
  "HikerTests.cpp": [0,5],
  "hikerTests.cpp": [0,5],
  "HikerTest.cs": [0,5],
  "HikerTest.java": [0,5],
  "DiamondTest.kt": [0,7],
  "HikerTest.php": [0,5],
  "hikerTest.js": [0,5],
  "hiker-test.js": [0,5],
  "hiker-spec.js": [0,5],
  "hiker.test.js": [0,5],
  "hiker.tests.ts": [0,5],
  "hiker_tests.erl": [0,5],
  "hiker_test.clj": [0,5],
  "fizzBuzz_test.d": [0,8],
  "hiker_test.go": [0,5],
  "hiker.tests.R": [0,5],
  "hikertests.swift": [0,5],
  "HikerSpec.groovy": [0,5],
  "hikerSpec.feature": [0,5],
  "hiker.feature": [0,5],
  "hiker.fun": [0,5],
  "hiker.t": [0,5],
  "hiker.plt": [0,5],
  "hiker": [0,5],
};

