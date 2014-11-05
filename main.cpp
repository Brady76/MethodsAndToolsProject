#include <iostream>
using namespace std;

int main()
{
cout << "Hi, this is the first stage of our interactive C++ tutorial." << endl << "Let's start by writing the \"Hello World\" program." << endl;
cout << "Our first lines in order are '#include <iostream>' and 'using namespace std;' these lines allow us to use cout and cin, read as C output and C input, they allow you to manually ";
cout << "input values during runtime \nas well as print them out for you to read, we will be using these in a little bit." << endl;
cout << "Our next line requires us to declare a function, which is essentially a group of code statements that are given a name, you begin by saying what the function is intended to return";
cout << "\nIn this program, we will name the function main and it will return type int (however since we're just using cout's right now, the return type is irrelevant, after declaring the return";
cout << "type and the name\nwe put a pair of parentheses like so (), in the future we might include variables inside those parentheses to indicate that the function takes outside input, but this one";
cout << "does not, so leave it just as ()\nSo in summary your function declaration should look like this: \nint main()\nAfter that you'll want to go down a line and put a '{', and down another to put";
cout << "a '}', these are bounds and they indicate the scope of your function, we'll talk about scope later, but for now just know that\nyour commands for the function have to be inside the bounds\n";
cout << "Finally inside the bounds we want to write 'cout << \"Hello World!\";' the double arrows indicate data flow, with cin's you would use >>, the quotations around Hello World! are important";
cout << "As they signify that we are outputting a string, this avoids complications like if we were to have a variable named Hello but we only wanted to print the word Hello. Also notice the ';'";
cout << "A ';' indicates the end of a statement or\na command, this is also important, if you miss one you're going to have compilation errors." << endl << endl;
cout << "Now you're going to rewrite this function by yourself line by line as prompted, keep your syntax the same as previously described above, name your function main, and we want to print" << endl;
cout << "Test 1, success!" << endl;
cout << "Input line 1: " << endl;
string line1 = "#include <iostream>";
string line2 = "using namespace std;";
string line3 = "int main()"; 
string line4 = "{";
string line5 = "cout << \"Hello World!";
string line6 = "}"; 
string temp;
getline(cin, temp);
if(line1.compare(temp) != 0) //have to use .compare to check if strings are equivalent
{
	cout << temp << endl;
	cout << "error, please try again: " << endl;
	getline(cin, temp);
	//function(temp) //I'd like to make it so when we're having our user actually interact with the tutorial by inputting we have the error messages working so they can attempt the line again
				   //to do that we'll need to make helper functions or such else. If we don't do this then the user will have to repeat the whole tutorial all over again to attempt, and with
				   //the testing system I have implemented it's very easy to fail with just a missing space or otherwise
}
else
{
	cout << "line1 success!" << endl;
}

}
