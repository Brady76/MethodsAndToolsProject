#include <iostream>
using namespace std;

/*A quick note on functions, inside the parentheses of functolicous and repeatthrice are parameters (like x, y, z), these are values that come from outside the function as input, so just assume they are
 * previously declared & initialized variables.  When you get the final solution in a variable you'll want to return it, so for example if we have variable x in repeatthrice and it has our final answer
 * of the word repeated three times, our last line of code should be return x; 
 */ 

/*We want functolicious to do these things in order:
 * Add 5 to x, subtract 3 from y, and multiply z by 7
 * Multiply x by y
 * Subtract y from x
 * Return the remainder of dividing x by z
*/
int functolicious(int x, int y, int z){
}

//this function should take a string x and repeat it three times, no need to worry about spacing
string repeatthrice(string x){
}




//Leave this function alone, this is for testing
int main(){
	if (functolicious(5, 10, 3) == 0)
		cout << "Functolicious Passed!" << endl;
	else
		cout << "Functolicious failed." << endl;
	if (repeatthrice("hello") == "hellohellohello")
		cout << "repeatthrice passed!" << endl;
	else
		cout << "repeatthrice failed." << endl;
	return 0;
}

