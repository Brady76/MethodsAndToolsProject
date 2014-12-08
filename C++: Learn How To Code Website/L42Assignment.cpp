/*4.2 Assignment: Functions!*/
#include <iostream>
using namespace std;

//helper function, call this later when writing "usehelperfunctiontomultiply", this function is done, do not edit.
int helperfunctionformultiply(int a, int b){
	return a * b;
}

//Write a recursive summation function for int x, return the summation
int summation(int x){
}

//Pass x and y to the multiplication function provided and return the result
int usehelperfunctiontomultiply(int x, int y){
}

//Testing function, don't touch this!
int main(){
	if(summation(5) == 15)
		cout << "summation passes!" << endl;
	else
		cout << "summation failed" << endl;
	if(usehelperfunctiontomultiply(5, 10) == 50)
		cout << "usehelperfunctiontomultiply passes!" << endl;
	else
		cout << "usehelperfunctiontomultiply failed" << endl;
	
}
