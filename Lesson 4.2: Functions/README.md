Functions
==========
In reference to functions, so far we've only worked with main() with the exception of some helper functions in a lab assignment.  In C++ a function is defined as a group of statements given a name, 
it's important that the main body of work goes inside a "main" function because C++ is conditioned to look for that name, but we can have other functions that will be referenced inside main.  The syntax
for a function is:
type name (parameter, parameter, parameter.,...){
	statement
	statement
	...
}

An example of how you might use functions could be like this (This will also help explain what's going on in the previous lab assignment if you got confused)  

int functolicious(int x, int y, int z){
}

string repeatthrice(string x){
}

int main(){
	if (functolicious(5, 10, 3) == 0)
		cout << "Functolicious Passed!" << endl;
	else
		cout << "Functolicious failed." << endl;
	if (repeatthrice("hello") == "hellohellohello")
		cout << "repeatthrice passed!" << endl;
	else
		cout << "repeatthrice failed." << endl;
}

So first the program would be conditioned to go to the main function, it reads the line:
if (functolicious(5, 10, 3) == 0)

When you use the name of a function and send it it's parameters (in this case 5, 10, and 3) that's known as a "function call"
We have functolicious set up like so:
int functolicious(int x, int y, int z){
}

The return type of the function is int, the name is functolicious, and it's parameters are three int's we called x y and z, so when we did our function call functolicious(5, 10, 3) we're pretty much
saying:
x = 5;
y = 10;
z = 3;
And then going from there! The last statement of the function has to be:
return value;
In this case, because we need something to send back to main since it was called there, that value that is returned is then compared to 0 and the function main continues!
Generally if theres a set of statements you want some values to under go over and over again, you might find it helpful to make a helper function to do it for you! 

Void Functions
----------
Sometimes we might want a function to do something that doesn't require returning a value back to main. Say we're in need of morale support, so we want to make a void function to cheer us on!
We might write it like this:

#include <iostream>
using namespace std;

void moralesupport(){
	cout << "You can do it!" << endl;
}

int main(){
	moralesupport();
}

Some things you might have noticed..
----------
First off, you might have noticed that whenver we are referencing a function there are always some form of parentheses involved, that's so the compiler can differentiate between variables and a function.
So x can be different than x() for example.

Another thing is that you might be wondering why main() has no return statement, it does! Kind of, the compiler automatically assumes in main that we will return 0 which essentially evaluates to
nothing. 

Recursive Functions
----------
This is a complicated concept, but it's very useful.  It's based off the principle that functions are able to call themselves!
The most basic example of a recursive function is one that solves factorials.  Here's an example:

#include <iostream>
using namespace std;

int factorial(int x){
	if( x > 1){
		return(x * factorial(x-1));
	}
	else{
	return 1;
	}
}

int main(){
	int x = 5;
	cout << factorial(x) << endl;
}

We can see in main that we're just sending 5 to the function factorial to be printed out, but in the factorial function we can see that it calls itself when x is greater than 1!
An important thing to set up is a base case, in thise function our base case is the:
else{
	return 1;
}
A base case is rock bottom, once we hit rock bottom we can start returning upwards to get our final result.  I'll elaborate more on that in a bit.  
  
Our recursive function traverses like this:
We have the line return(x * factorial(x-1)), in this case, x is 5 so it reads: 
5 * factorial(4), and factorial 4 will evaluate to be 4 * factorial(3), extrapolating we get:
5 * 4 * 3 * 2 * factorial(1), and so when we get to 1 we hit our base case, where we're told to just return 1 instead of going any deeper down the rabbit hole recursively!
So we get our final answer, which is 120!
		
