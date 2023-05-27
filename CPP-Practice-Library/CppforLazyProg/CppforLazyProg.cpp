/*
 * Author: William Z Chadwick
 * Date Created: 05/25/2023
 * Date Modified: 05/27/2023
 * Description: A place to follow along in Will Briggs books on C++20
 * programming for lazy programmers, which also
 * [I forgot what I was going to say]
 */

// Hello, world! program, for _C++ for Lazy Programmers_
//    It prints, "Hello World!" on the screen.
//    Quite an accomplishment, huh?
//    [the above 3 lines are Brigg's]

    #include "SSDL.h"
        int main(int argc, char** argv) {
	    sout <<
	        "Hello, world! (Press any key to quit.)\n";
	SSDL_WaitKey(); // Wait for user to hit any key
        return 0;
	}

