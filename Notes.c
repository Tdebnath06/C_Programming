#include <stdio.h>
#include <stdbool.h>

int main()
{
    int myFavoriteNumber = 0;
    printf("Please enter your favorite my number\n");
    scanf("%d", &myFavoriteNumber); //takes in input
    printf("You enetered number: %d\n", myFavoriteNumber);

    bool myBoolean = 1;
    return myBoolean;

    return 0;
}


//Compiler Errors
/*Semantic errors: something is wrong with the meaning
a+b; when it doesnt make sense to add a and b

Syntax error: another type of compiler error; 2nd type*/
//C can't really catch semantic (logic) errors

//Compiler Warnings - DO NOT IGNORE THEM!
//It is only a warning because the compiler is still able to generate machine code (syntactically correct)

//Linker Errors
//The Linker is having trouble linking all the object files together to create an executable - usually a library or object file that is missing

//Runtime Errors - Happens when the program is executing
/*Some typical examples
- divide by 0
- file not found
- out of memory*/
//can cause program to crash

//Logic Errors
/*Errors or bugs in your code that cause your program to run incorrectly
Logic errors are mistakes made by the programmer*/

//Data Types - used to declare the type of data (obviously) and is used to define the size of the data
//int - integer - whole number; can use for hexadecimal as well
//float - floating point number - decimal number; can be used for scienctific notation
//char - character - single character
//double - double precision floating point number - decimal number
//_Bool - can be used to story only 0 or 1; T/F
//void - void type - nothing
//Variables - used to store data
//Declaring a variable - telling the compiler what type of data you are storing and what the name of the variable
//C has 3 adj keywords to mod the basic int type: short, long, and unassigned
//short - short integer
//long - long integer
//unassigned - unassigned integer; can be used if you want the int to only be a positive integer
//These specifiers can be used for doubles as well
//long int var = 131071100L; this is a long long integer, specified by the "L" at the end of the number

//Enums and Chars
//Enums - a user defined data type that is used to store a set of values
/*enum primaryColor {red, blue, yellow};
enum primaryColor myColor, gregsColor;
myColor = red;*/
//compiler trears the enum as a set of values; list starts at 0
//enum direction {up, down, left = 10, right};}
//so now the values associated with these directions are up = 0, down = 1, left = 10, right = 11
//Char - a single character; anything within single quotes are defined as a char
//char myChar = 'a';
//chars can also be unsigned
//when declaring a char you NEED the single quotes, and nothing else
//Escape characters - used to represent special characters such as backspacing, going to the next line, making the speaker beep
//char x = '\n'; new line
//table exists for all escape characters

int enumFunction()
  {
  enum gender {male, female};
  enum gender myGender;
  myGender = male;
  enum gender yourGender = female;
  bool isMale = (myGender == yourGender);
  return isMale; //returns false
  }
//Format Specifiers - used when displaying variables as output
    //they specify the type of data of the variable to be displayed
//int sum = 89;
//printf("The sum is %d", sum);
/*%d and %i - int and bool*/
/*%f - float*/
/*%c - char*/
/*%s - string*/
/*%p - pointer*/
/*%x - hexadecimal*/
/*%e - double*/
/*%g - double*/
/*%o - octal*/
/*%u - unsigned int*/
/*%lu - unsigned long*/
/*%lu - unsigned long long*/
/*%lf - long double*/
/*%t - time*/
int formatSpecifiers()
{
    float x = 3.994488208320;
    printf("%.2f",x); //prints 4.00
    
}


int cLine (int argc, char *argv[])
{
    int numberOfArguments = argc;
    char *argument1 = argv[0];
    char *argument2 = argv[1];
    printf("Number of Arguments: %d\n", numberOfArguments);
    printf("Argument 1 is the program name: %s\n", argument1);
    printf("Argument 2 is the command line argument: %s", argument2);
}

//Basic Operators - arithmetic, assignment, and relational operators
//Logical operator - operator that returns a boolean result that's based on the boolean result of one or two other expressions
//Assignment operator - assigns the value of the expression at its right to the variable at its left
//Relational operator - will compare variables against eachother

int arithmeticOperators() 
{
   int var1 = 5, var2 = 5;

   // 5 is displayed
   // Then, var1 is increased to 6.
   printf("%d\n", var1++);

   // var2 is increased to 6 
   // Then, it is displayed.
   printf("%d\n", ++var2);

   return 0;
}

//Bitwise Operators - operate on the bits in integer values

//c+=a; c=c+a; and so forth with other operations
// a<<b = a*2^b; a>>b = a/2^b
/*& - Binary AND operator, copied a bit to the result if it exists in both operands; (A&B) = 12, 0000 1100
| - Binary OR operator. copies a bit if it exists in either operand; (A|B) = 61, 0011 1101*/


int bitwiseOperators()
{
    unsigned int a = 60; //001100
    unsigned int b = 13; // 0000 1101
    int result1 = a & b;
    // 0000 1100
    int result2 = a|b; //0011 1101
    printf("The result is %d", result1); //prints 12
    printf("The second result is: %d", result2); //prints 61
    return 0;
}

//The Cast and sizeof operators
//sizeof operator prints out the size of data types
//Operator Precedence - order of operators
//if precedence for 2 operators are the same, most of the time we go left to right

//if statements - decision making staements

int ternaryStatement()
{
    int x;
    int y;
    x = y > 7 ? 25 : 50;
    //results in x being set to 25 if y is greater than 7, or to 50 otherwise
}

//Switch Statments- alternative to the else if statement; can only use if you're comparing against a constatnt, can't use for complex boolean expressions

int switchStatments()
{
    enum Weekday {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};
    enum Weekday today = Monday;
    switch(today)
    {
        case Sunday:
        printf("Today is Sunday");
        break;

        case Monday:;
        printf("Today is Monday");
        break;

        case Tuesday:
        printf("Today is Tuesday");
        break;

        default:
        printf("Whatever");
        break;
    }

    return 0;
}
// can also work with user input and multiple user inputs
//goto statement - don't really use it; exactly what it sounds like
//loops


int loops()
{

    int count = 10;
    for(int count = 1; count <= 10; ++count)
    {
        printf("%d\n", count);//prints out numbers 1-10 on different lines
    }
    //the while loop may execute 0 times since it checks the condition first
    //the do while loop will always execute at least once since it executes the body first and then checks the condition at the end
    //I have not provided examples for the while and do-while loops, but they are very self explanatory

    for (int i = 1; i <= count; ++i)
    {
        int sum = 0;
        for(int j = 1; j <= i; ++j)
        {
            sum += j; 
        }
        
        printf("\n%d\t%d", i, sum);
    }

    enum Day {Monday, Tuesday, Wednesday, Thurssday, Friday, Saturday, Sunday};
    for(enum Day day = Monday; day <= Sunday; ++day)
    {
        if(day == Wednesday)
        continue; // now if the day is equal to Wednesday, it will skip and continue to increment

        printf("It is not Wednesday!"); //Do something usefule with day
    }
return 0;

}




