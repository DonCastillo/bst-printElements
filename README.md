## Bracket Checker Program 
* by Don Castillo
don.castillo@uleth.ca
Student#: 001224541
* Assignment in CPSC 3620: Data Structures and Algorithm

download the repository from: https://github.com/DonCastillo/bracket-checker.git

### HOW TO USE THE PROGRAM:

An instruction will be initially displayed in the console, together with the command keys that the user can type in to either quit the program (type 'Q') or display the instruction again (type 'H').

The user can type a string of mathematical expression in the "Enter an expression" field. As the user presses ENTER, the program will determine if the expression is nested properly or not, meaning if the bracket operators in the expression has a matching opening or closing operator of its kind. The valid pair of bracket operators are ( ), { }, [ ]. 

"Brackets are properly nested" 		will display if the expression is nested properly

"Brackets are NOT properly nested" 	will display if the expression is not nested properly
 
"No brackets in the expression"		will display if the expression does not have any bracket operator

### HOW TO RUN/COMPILE THE PROGRAM:

The program was written in C++ programming language, and Code::Blocks as its IDE. To run the program, it is better if it's ran via Code::Blocks as well. The repository bracket-checker contains a bracket-checker.cbp that you must open to be directed to the bracket-checker workspace. 

To retrieve all necessary files, click on Project >  Add Files Recursively, and from there add all the files in the directory src/ and include/. src/ contains all the .cpp files and include/ contains all the header files. 

Go to Project > Build Options, then select bracket-checker that is in the left pane of the window. Click on the Compiler Setting and make sure that "Have g++ follow the C++11 ISO C++ language standard [-std=c++11]" is checked to make sure the program uses the imported libraries with no error. Also make sure that the selected compiler is GNU GCC Compiler.

### HOW TO DOWNLOAD FROM THE REPOSITORY

Using git, enter this command:

git clone https://github.com/DonCastillo/bracket-checker.git

The online repository is in public and can be accessed anywhere

<img src="images/bracket-checker.PNG">

