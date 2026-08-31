/*
#include <iostream>   // cout (output), cin (input)
#include <string>     // std::string (text and sentences)
#include <vector>     // std::vector (an array, dynamic/can grow or shrink)
#include <array>      // std::array (fixed)
#include <cmath>      // sqrt(), pow(), ceil(), floor(), abs(), log()
#include <iomanip>    // setw(), setprecision()     (Number formatting)
#include <fstream>    // file input/output (Create or open text files)
#include <algorithm>  // sort(), find(), max()    (sort and find)
#include <map>        // std::map   (stores pairs of data)
#include <set>        // std::set   (stores values without duplicates)
#include <queue>      // std::queue
#include <stack>      // std::stack
#include <random>     // random number generators
#include <chrono>     // time utilities
#include <cstdlib>    // random numbers and conversions
#include <ctime>      // Often used with random numbers
*/

#include <iostream>
#include <map>
using namespace std;
int main()
{
  map<string, int> age;

  age["Mark"] = 20;
  age["John"] = 18;

  std::cout << age["Mark"];
  return 0;
}

/*
(<<) insertion operator - It is used to format the data according to its data type and then send it to the cout object.
(<< ) left shift operator - Shifts bits to the left,
EX: A=0010001
    A<<2
    A=1000100

Namespace - A feature in C++ that allows you to group related code together to avoid naming conflicts


std::cout << "Hello, World!";           is a statement
A group of statement                    give a function
A group of functions and variables      create a class

A collection of Classes, Object, Function, Variable forms a namespace

the return 0 statement indicates that the program has finished successfully
(\n) newline- escape sequence or std::endl (go next line)
(\t) tab
(\\)
(\')
(\n\n) create a blank line
*/

/*
Data Types in C++
int myNum = 5;               // 2-4 Byte, Integer (whole number without decimals)
double myFloatNum = 5.99;    // 8 Byte, Floating point number (15 decimal))
float myFloatNum = 5.99;     // 4 Byte, Stores fractional numbers, containing one or more decimals (6-7 decimal)
char myLetter = 'D';         // 1 Byte, Character
string myText = "Hello";     // String (text)
bool myBoolean = true;       // 1 Byte, Boolean (true = 1 or false = 0)
auto variableName = value    // will automatically identify the type but you cannot change the type later

Scientific notation (e)


there are 95 keywords in C++, DONT USE THESE AS NAME FOR VARIABLES (check messenger)
*/

/*
int x = 10;
int y = 3;

cout << (x + y) << "\n"; // 13
cout << (x - y) << "\n"; // 7
cout << (x * y) << "\n"; // 30
cout << (x / y) << "\n"; // 3 (integer division)
cout << (x % y) << "\n"; // 1

int z = 5;
++z;
cout << z << "\n"; // 6
--z;
cout << z << "\n"; // 5
*/

/*
Assign
=	    x = 5	    x = 5           (assign)
+=	    x += 3	    x = x + 3       (add)
-=	    x -= 3	    x = x - 3       (subtract)
*=	    x *= 3	    x = x * 3       (multiply)
/=      x /= 3	    x = x / 3       (divide)
%=	    x %= 3	    x = x % 3       (modulus)
&=	    x &= 3	    x = x & 3       (and)
|=	    x |= 3	    x = x | 3       (or)
^=	    x ^= 3	    x = x ^ 3       (power)
>>=	    x >>= 3	    x = x >> 3
<<=	    x <<= 3	    x = x << 3

Comparison
==	    Equal to	                x == y
!=	    Not equal	                x != y
>	    Greater than	            x > y
<	    Less than	                x < y
>=	    Greater than or equal to	x >= y
<=	    Less than or equal to	    x <= y

Logical
&& 	Logical and	    Returns true if both statements are true	                    x < 5 &&  x < 10
|| 	Logical or	    Returns true if one of the statements is true	                x < 5 || x < 4
!	Logical not	    Reverse the result, returns false if the result is true	        !(x < 5 && x < 10)

Order of Operation
()              - Parentheses
*, /, %         - Multiplication, Division, Modulus
+, -            - Addition, Subtraction
>, <, >=, <=    - Comparison
==, !=          - Equality
&&              - Logical AND
||              - Logical OR
=               - Assignment

cout << variableName(index);                        print the letter or number of the index
cout << variableName(myString.length() - 1)         print the end letter or number of the variable

string variableName = "Hello";
variableName(0) = 'W';
cout << variableName;           //"Wello"


\'	'	Single quote
\"	"	Double quote
\\	\	Backslash

getline(cin, variableName)          //reads an entire line, including spaces, up to the newline
cin >> variableName                 //reads a single token, stopping at whitespace

boolalpha;                          // enable printing "true"/"false"
noboolalpha;                        // reset to 1/0


if statement
if (condition) {
 //true
} else {
 //false
}

shorthand if else
variable = (condition) ? expressionTrue : expressionFalse;
variable = (condition) ? expressionTrue1 : (condition) ? expressionTrue2 :expressionFalse;

nested if
if (condition1) {
  // code to run if condition1 is true
  if (condition2) {
    // code to run if both condition1 and condition2 are true
  }
}


Logical operator
if (con1 && con2) {
 //code run if both true
}
if (con1 || con2) {
 //code run if one is true
}
int x = 5
if (!(x>10)) {
 //code run if the condition is false
}


Switch statement
switch(expression) {
  case expression1:
    // code block
    break;
  case expression2:
    // code block
    break;
  case expression3:
    // code block
    break;
  default:
    // run if cant find the expression
}

LOOPS
WHILE (check the condition first before running the code)
while (condition) {
  // code block to be executed
}
int i = 0;
while (i < 5) {
  cout << i << "\n";
  i++;
}
DO WHILE (run the code first before checking the condition || if the condition is false, it will run 1 time)
do {
  // code block to be executed
}
while (condition);


FOR LOOP
for (statement 1; statement 2; statement 3) {
  // code block to be executed
}
Statement 1 is executed (one time) before the execution of the code block.
Statement 2 defines the condition for executing the code block.
Statement 3 is executed (every time) after the code block has been executed

FOR EACH (also known as ranged-based for loop), which is used to loop through elements in an Array
for (type variableName : arrayName) {
  // code block to be executed
}

break;          (stop)
continue;       (skip)



ARRAY   V (size)
int num[4] = {0, 1, 2, 3};
string str[4] = {"one", "two", "three", "four"};

    V (index)
num[2];       (shows 2)       (to access the array)

*/

/*
STRUCTURE is usually defined outside main() because it's a type definition (a blueprint) that can be used anywhere in your program.

struct {             // Structure declaration
  int myNum;         // Member (int variable)
  string myString;   // Member (string variable)
} myStructure;       // Structure variable Name

myStructure.myNum = 1;
myStructure.myString = "Hello World!";


struct Struction{                           // "Struction" is the struct type
  int myNum;
  string myString;
} myStruct1, myStruct2, myStruct3;          // Multiple structure variables separated with commas

myStruct1.mynum = 6;                        //Assign
Struction myStruct4;                        //adding a variable
*/

/*
ENUM is short for "enumerations", which means "specifically listed".
can also be out side the int main
only store integral value, no string

enum Level {       V automatically start at 0,1,2,3,... if not assigned
  LOW,             0// not required to use uppercase, but often considered as good practice
  MEDIUM,          1
  HIGH             2// last item does not need a comma
};

enum Level myVar;                    // To access the enum
enum Level myVar = MEDIUM;         1
enum Level myVar = HIGH;           2


enum Level {
  LOW = 25,
  MEDIUM = 50,
  HIGH = 75
};


enum Level {
  LOW = 5,
  MEDIUM, // Now 6 (automatic)
  HIGH // Now 7    (automatic)
};

*/

/*
Reference - reference variable is an alias for an existing variable. It is created using the & operator:

string food = "Pizza";
string &meal = food;
cout << food << "\n";  // Outputs Pizza
cout << meal << "\n";  // Outputs Pizza
meal = "Burger"; // changes both meal and food
cout << food << "\n"; // Outputs Burger
cout << meal << "\n"; // Outputs Burger


Memory Address -  is a unique hexadecimal number that identifies the specific location in the computer's Random Access Memory (RAM) where a variable or object is stored

string food = "Pizza";        // A string variable
cout << &food;                // Outputs 0x6dfed4

Pointer
string* ptr = &food;          // A Pointer variable that stores the address of food
cout << ptr << "\n";          // Outputs 0x6dfed4
cout << *ptr << end;          // Outputs Pizza

Create a pointer variable with the name ptr, that points to a string variable, by using the asterisk sign * (string* ptr).
string* mystring; // Preferred
string *mystring;
string * mystring;



Memory Management - is the process of controlling how much memory your program uses - and how it is used. This includes creating, using, and releasing memory when it's no longer needed.

Memory Size
int main() {
  int myInt = 15;
  float myFloat = 16.135;
  double myDouble = 10.143567;
  char myChar = 'A';

  cout << sizeof(myInt) << "\n";     // 4 bytes (typically)
  cout << sizeof(myFloat) << "\n";   // 4 bytes
  cout << sizeof(myDouble) << "\n";  // 8 bytes
  cout << sizeof(myChar) << "\n";    // 1 byte
  return 0;
}


New - lets you manage memory yourself.
Delete - remove the "new"
int* ptr = new int;
  *ptr = 35;
  cout << *ptr << endl;           // 35
  delete ptr;                     //This tells C++: "I'm done with this memory, you can clean it up now."
  cout << *ptr;                   // 0

1. new int creates memory space for one integer
2. ptr stores the address of that space
3. *ptr = 35; stores the number 35
4. cout << *ptr; prints the value
5. delete ptr
6. cout << *ptr to show 0

For arrays, use new[] and delete[]. For single variables, use new and delete.


In most cases, you don't need to use new. C++ will automatically handle memory for normal variables like:
int age = 35;
string name = "John";
But sometimes, you have to manage memory yourself - especially when:

You don't know how much memory you'll need in advance (like how many guests or scores)
You want to create memory while the program is running, based on user input
You need to store large or flexible amounts of data
You want full manual control over memory (e.g., performance-critical code)
In those cases, new helps you create memory, and delete helps you clean it up when you're done.

*/

/*
Function are used to perform certain actions, and they are important for reusing code: Define the code once, and use it many times.

// Create a function
void myFunction() {                                          //decleration
  cout << "I just got executed!";                            //definition
}

int main() {
  myFunction(); // call the function
  myFunction(); // call the function the 2nd time
  return 0;
}
// Outputs "I just got executed!"
// Outputs "I just got executed!"

Parameters are specified after the function name, inside the parentheses. You can add as many parameters as you want, just separate them with a comma:
VVVVVVVVVV
void functionName(parameter1, parameter2, parameter3) {
  // code to be executed
}
or //            V type  V Parameter
void myFunction(string fname) {
  cout << fname << " Refsnes\n";
}

Default/Optional Parameter - If we call the function without an argument, it uses the default value
VVVVVVVVVVVV
void myFunction(string country = "Norway") {
  cout << country << "\n";
}
int main() {
  myFunction("Sweden");
  myFunction("India");
  myFunction();
  myFunction("USA");
  return 0;
}
// Sweden
// India
// Norway
// USA

Multiple Parameters -
vvvvvvvvv
void myFunction(string fname, int age) {
  cout << fname << " Refsnes. " << age << " years old. \n";
}
int main() {
  myFunction("Liam", 3);        // Liam Refsnes. 3 years old.
  return 0;
}


If you want the function to return a value, dont use the void keyword
can be stored in a variable
int myFunction(int x) {
  return 5 + x;
}
int main() {
  cout << myFunction(3);
  return 0;
}
// Outputs 8 (5 + 3)

int myFunction(int x, int y) {
  return x + y;
}
int main() {
  cout << myFunction(5, 3);
  return 0;
}
// Outputs 8 (5 + 3)


Pass By Reference
void changeValue(int &num) {
  num = 50;
}
int main() {
  int value = 10;
  changeValue(value);  // Call the function and change the value to 50
  cout << value;
  return 0;
}

void swapNums(int &x, int &y) {
  int z = x;
  x = y;
  y = z;
}

void modifyStr(string &str) {
  str += " World!";
}
int main() {
  string greeting = "Hello";
  modifyStr(greeting);
  cout << greeting;
  return 0;
}

Pass Array
void myFunction(int myNumbers[5]) {
  for (int i = 0; i < 5; i++) {
    cout << myNumbers[i] << "\n";
  }
}
int main() {
  int myNumbers[5] = {10, 20, 30, 40, 50};
  myFunction(myNumbers);
  return 0;
}


Pass Structure to Function
struct Car {
  string brand;
  int year;
};
void myFunction(Car c) {
  cout << "Brand: " << c.brand << ", Year: " << c.year << "\n";
}
int main() {
  Car myCar = {"Toyota", 2020};
  myFunction(myCar);
  return 0;
}


Pass by Reference (structure)
struct Car {
  string brand;
  int year;
};
void updateYear(Car &add) {
  add.year++;
}
int main() {
  Car myCar = {"Toyota", 2020};
  updateYear(myCar);
  cout << "The " << myCar.brand << " is now from year " << myCar.year << ".\n";
  return 0;
}



Function overloading allows multiple functions to have the same name, as long as their parameters or data type are different:
EX: dif data type
int myFunction(int x)
float myFunction(float x)
double myFunction(double x, double y)

EX: dif parameter
int plusFunc(int x, int y) {
  return x + y;
}
int plusFunc(int x, int y, int z) {
  return x + y + z;
}
int main(void) {
  int result1 = plusFunc(3, 7);
  int result2 = plusFunc(1, 2, 3);
}

*/