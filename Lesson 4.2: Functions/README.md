#Functions

So far, with the exception of some helper functions in a lab assignment, the only function we've worked with is main(). In C++, a __function__ is defined as a group of statements that are given a name. It is important that the main body of work goes inside a "main" function, because C++ is conditioned to look for *main*. We can, however, have other functions that are referenced inside **main**.  The syntax for a function is:

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

First, the program would is conditioned to go to the main function. It reads the line:

	if (functolicious(5, 10, 3) == 0)

Here, we use the name of a function (functolicious) and sent it's parameters into it (5, 10, 3). This process is known as a __function call__.

We have functolicious set up in the following manner:

	int functolicious(int x, int y, int z){
	}

The return type of this function is *int*, the name is *functolicious*, and it's *parameters* are three int's (called x y and z). Therefore when we performed our function call __functolicious(5, 10, 3)__, we are basically saying:

	x = 5;
	y = 10;
	z = 3;

From here,  the last statement of the function is:
	
	return value;

Because we have called the function in main, wwe need something to send back into main. The value returned is then compared to 0, and the function main continues!
Helper functions are extremely useful if there is a set of statements in which you want a particular set of values to be examined repeatedly. 

##Void Functions

There are times when we might want a functionthat doesn't require returning a value back to main. For example, suppose we are in need of morale support, and we want to make a void function to cheer us on! We may write a function like this:

	#include <iostream>
	using namespace std;
	
	void moralesupport(){
		cout << "You can do it!" << endl;
	}
	
	int main(){
		moralesupport();
	}

In this example, main calls *moralsupport();*, and simply prints "You can do it!".

##Things to notice:

* Whenever we are referencing a function, there is always a form of parentheses involved. This is so the compiler can differentiate between variables and a function. For example, "x" is different than x().
* Another thing is that you might be wondering why main() has no return statement, it does! The compiler automatically assumes in main that we will return 0 which essentially evaluates to nothing. 

##Recursive Functions

Recursive funtions are a complicated concept, but they are extremely useful because they make programs run significantly faster. Recursive functions are functions that are able to call themselves! Here's an example of a recursve function:

	//Basic example of a recursive function is one that solves factorials
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

We can see that we're just sending 5 to the function factorial to be printed out in *main*, but in the factorial function we can see that it calls itself when x is greater than 1!

When setting up recursive functions, we must always set up a __base case__,  or the bottom case of our recursive function. In this function our base case is the:

	else{
		return 1;
	}

When our function hits our base case (in this case, 1), our program has nothing left to recursively operate on and terminates.

Our recursive function traverses like this:

We have the line return(x * factorial(x-1)), in this case, x is 5 so it reads: 
-5 * factorial(4), and factorial 4 will evaluate to be 4 * factorial(3), extrapolating we get:
-5 * 4 * 3 * 2 * factorial(1), and so when we get to 1 we hit our base case, where we're told to just return 1 instead of going any deeper down the rabbit hole recursively!
-So we get our final answer, which is 120!
		
	
