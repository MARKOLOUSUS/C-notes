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
(\n) newline- escape sequence or std::endll (go next line)
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


*/