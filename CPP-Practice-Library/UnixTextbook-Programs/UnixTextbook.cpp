/* Author: William Z Chadwick
 * Date Created: 05/26/2023
 * Date Modified: 05/26/2023
 * Description: a place for cpp and c follow along code
 * from Sarwar, Koretsky and Sarwar's Unix Textbook
 */

//

// title of program on pg 577: power.c

//

#include <math.h>
#include <cstdio>

using namespace std;

int main()

{

	float x, y;

	printf ("The program takes x and y from stdin and displays x^y.\n");
	printf ("Enter integer x: ");

	scanf ("%f", &x);

	printf ("Enter integer y: ");

	scanf ("%f", &y);

	printf ("x^y is: %6.3f\n", pow((double)x, (double)y));

}

// this is going to be way too much ...
//
// I need to make more subdirectories...
// 

// 1st error:
// upon gcc compile attempt, discovered I have an "unterminated comment"!
// UnixTextbook.cpp:1:1: error: unterminated comment
//    1 | /* Author: William Z Chadwick
//      | ^
//
// this is from line six, where my multi-line comment has an extra space
// like so:  "* /"
//
// fixed...
//
// more errors:
//
// 2nd error:
//
// UnixTextbook.cpp:12:1: warning: ISO C++ forbids declaration of ‘main’ with no type [-Wreturn-type]
// 12 | main()
// | ^~~~
//
// 3rd error:
//
// UnixTextbook.cpp: In function ‘int main()’:
// UnixTextbook.cpp:18:9: error: ‘printf’ was not declared in this scope
// 18 |         printf ("The program takes x and y from stdin and displays x^y./n");
// |         ^~~~~~
// UnixTextbook.cpp:11:1: note: ‘printf’ is defined in header ‘<cstdio>’; did you forget to ‘#include <cstdio>’?
//
// ha
//
// fixed...
//
// more errors:
//
// 4th error:
//
// UnixTextbook.cpp: In function ‘int main()’:
// UnixTextbook.cpp:28:21: error: expected primary-expression before ‘)’ token
// 28 |         scanf ("%f",) &y;
// 
// 5th error:
//
// UnixTextbook.cpp:30:36: error: expected ‘)’ before ‘powe’
// 30 |         printf ("x^y is: %6.3f/n)," powe((double)x, (double)y));
// 
// 6th error:
// 
// UnixTextbook.cpp:30:30: warning: format ‘%f’ expects a matching ‘double’ argument [-Wformat=]
//    30 |         printf ("x^y is: %6.3f/n)," powe((double)x, (double)y));
//    |                              double
//
// fixed...
//
// two more:
//
// warning: format ‘%f’ expects a matching ‘double’ argument [-Wformat=]
//
// error: expected ‘;’ before ‘pow’
//
// okay, but the textbook actually says to run it with
// the option -lm before the -o and that this should make it go anyways?
//
// that got rid of the exit code stuff,
// but not the comment about expecting a double
//
// ohhhh, this line
// 	printf ("x^y is: %6.3f/n,"), pow((double)x, (double)y);
// was supposed to look like this:
// 	printf ("x^y is: %6.3f/n", pow((double)x, (double)y));
//
// ha
//
// so it finally worked,
// except...
// the /n escapes didn't take effect?
//
// ha
//
// so it finally worked,
// except...
// the /n escapes didn't take effect?
// 
// output:
// 	$ ./power
// 	The program takes x and y from stdin and displays x^y./nEnter integer x: 12
// 	Enter integer y: 15
// 	x^y is: 15407021574586368.000/n
//
// reason being that the slash is pointed completely the wrong way!
// It's the opposite slash...
//
// Now the program appears to work in full! cool!

/* end first program */

