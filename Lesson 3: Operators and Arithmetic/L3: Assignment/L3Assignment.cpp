#include <iostream>
using namespace std;

/*We want functolicious to do these things in order:
 * Add 5 to x, subtract 3 from y, and multiply z by 7
 * Multiply x by y
 * Subtract y from x
 * Return the remainder of dividing x by z
*/
int functolicious(int x, int y, int z){
	x += 5;
	y -= 3;
	z *= 7;
	x *= y;
	x = x - y;
	return x % z;
}





//Leave this function alone, this is for testing
int main(){
	if (functolicious(5, 10, 3) == 0)
		cout << "Functolicious Passed!" << endl;
	else
		cout << "Functolicious failed." << endl;
	return 0;
}

