Lesson 4.1: Intro to Statements  
==========

Statement's can refer to anything from the code, from stating what a variable is when we initialize it, or what we want an expression to be and so on, but there are certain statements that allow us to
control the flow of a program as it runs.

If and Else Statement's
----------
If and Else Statement's are known as "Selection Statements", typically of the syntax:
if (condition(s)) statement

Condition's involve logical operators, meaning that an if statement will execute if it evaluates to true but won't if it evaluates to false.  Some examples:
if (x <= 5) statement		If x is less than or equal to 5, execute the statement
if (x == true) statement	If x is true, execute the statement
if (x >= y) statement		If x is greater than or equal to y, execute the statement

Else statements are what they sound like, they have to come after an "if" statement, but it generally just means that if the first condition isn't true, this is what we're doing instead. Example:
if (x <= 5){
	cout << "x is less than or equal to 5" << endl;
}
else{
	cout << "x is greater than 5" << endl;
}

There are some scenarios where we might want even more conditions on something, in this case we'd use "else if (condition) statement" An example:
if (thing == bird){
	cout << "It's a bird!" << endl;
}
else if (thing == plane){
	cout << "It's a plane!" << endl;
}
else{ 
	cout << It's superman! << endl;
}
	
For Loop's
----------
In C++ there are statements called iteration statements that repeat a certain statement while a certain condition is filled, the most popular of these is the For Loop. The syntax is:
for (initialization; condition; increment) statement;

Initialization is generally where we declare our iterator
An iterator is a term that's used in C++, each time a loop is executed we call that an "iteration", so the counter that we use to control the number of iterations there are is the "iterator"
An iterator can also be a cursor used to navigate data structures, but that's for later on.

The condition is the same as a condition for the statements above, like (x <=5) and so on.  

The increment is generally how we manipulate our iterator so that we eventually reach the end condition of our loop.  We could do things like iterator++, iterator--, iterator += 2, whatever 
you think is necessary, just some manipulation of your iterator, but if you manipulate it in a way that the condition won't ever be false your loop will continue infinitely. 

An example:

for(iterator = 5; iterator >= 0; iterator--){
	cout << Iterator << endl;
}

The above example would print:
5
4
3
2
1
0

While Loop's are similar to For Loop's but are much simpler, the syntax is:
while(condition) statement

So since there's a lack of an iterator in the set up, you'll have to set up that technique outside of that initial syntax, so you'll want your variable in the condition initialized outside of the loop
and the iteration to happen inside of it.  An example might looks like this:

int main(){
int iterator = 3
while(iterator >=0){
	cout << iterator << endl; 
	iterator--;
}
}

This example would print:
3
2
1
0

So compared to the for loop where we had the initialization for iterator inside the parentheses, we move it up above it, and we have it's incrementation placed inside of the loop.  The initialization 
has to happen outside of the loop or it would simply be reinitialized to that at the beginning of each iteration. 

Jump Statement's
----------
These are statements that allow us to alter the flow of our program.  

First off we have the continue statement, which tells you to skip the rest of the statement in a loop and just go to the top of the loop and do another iteration, an example:

for(int iterator = 5; iterator >= 0; iterator--){
	if (iterator == 3){
	continue;
	}
	cout << iterator << endl;
}

This would print:
5
4
2
1
0
Notice that the 3 is missing, because when iterator is equal to three we're told to continue, meaning the flow of that iteration will never reach the cout statement instead decrementing to two and 
then proceeding.

Next we have the break statement, this statement tells us to exit a loop entirely when we reach it, so if we had this:

for(int iterator = 5; iterator >= 0; iterator--){
	if (iterator == 3){
	break;
	}
	cout << iterator << endl;
}

It would print:
5
4
Because when iterator is equal to three, we're told to exit the loop entirely!
