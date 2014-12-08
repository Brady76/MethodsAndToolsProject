/*4.1 Assignment: Intro to Statements*/

#include <iostream>
using namespace std;

//Use an if and else statement to determine if value x is even or odd, return true if it's even, odd if it's false
bool evenorodd(int x){

}

//Use a for loop to make a summation function, a summation is similar to a factorial except you add, so the summation of 5 is equal to 5 + 4 + 3 + 2 + 1
int summation(int n){

}

//Batman's theme song is moving to cpp! Create a while loop that prints "nah" while the iterator is less than or equal to 15 (starting at 0), afterwards print "batman!" 
//Make sure there's a space between the nah's and the batman! (e.g. nahnahnah batman!")
string batmanthemesong(){

}

/*This is for testing, don't touch the main function!*/
int main(){
	if(evenorodd(5) == false && evenorodd(6) == true)
		cout << "evenorodd passes!" << endl;
	else
		cout << "evenorodd failed" << endl;
	if(summation(5) == 15) 
		cout << "summation passes!" << endl;
	else 
		cout << "summation failed" << endl;
	string string1 = "nahnahnahnahnahnahnahnahnahnahnahnahnahnahnahnah batman!";
	if(batmanthemesong().compare(string1) == 0) 
		cout << "batmanthemesong passes!" << endl;
	else
		cout << "batmanthemesong fails" << endl; 
}
