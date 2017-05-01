*******************************************************
*  Name      :  Patricia Figueroa
*  Class     :  CSC 2421
*  HW#       :  5
*  Due Date  :  Feb. 24, 2016
*******************************************************

                 Read Me

*******************************************************
*  Description of the program
*******************************************************

The program "dictionary" reads in a list of unsorted words
into a <list> STL which represents the implementation of a
doubly linked list. It reads a list of words from the file findwords.txt.
For each word in the file findwords.txt, it searches that list from the
beginning of the list and if found, it will print (to the screen) how
many searches it made to find the word. If found, it will search from
the back of the list and print how many searches it had to make;
if not found it will insert the item into the back of the list.
Then again, sort the list.

When complete the program will print out each word on a new line
in a file called revsorted.txt.

*******************************************************
*  Source files
*******************************************************

Name:  main.cpp
   Main program.  This is the driver program that calls functions
   to read data from an input file, use the data make a new file,
   and print an output.

Name:  dictionary.h
   Contains the definition for the class dictionary.

Name: dictionary.cpp
   Defines and implements the class dictionary for implementing a new word.

*******************************************************
*  Circumstances of programs
*******************************************************

   The program runs successfully.

   The program was developed and tested on Xcode Version 7.1. It was
   compiled, run, and tested on Mac OS X El Capitan.


*******************************************************
*  How to build and run the program
*******************************************************

1. Uncompress the homework.  The homework file is compressed.
   To uncompress it use the following commands
       % unzip [PatriciaFigueroa_HW5]

   Now you should see a directory named homework with the files:
        main.cpp
        dictionary.h
        dictionary.cpp
        makefile
        Readme.txt

2. Build the program.

    Change to the directory that contains the file by:
    % cd [PatriciaFigueroa_HW5]

    Compile the program by:
    % make

3. Run the program by:
   % ./[HW5]

4. Delete the obj files, executables, and core dump by
   %./make clean
