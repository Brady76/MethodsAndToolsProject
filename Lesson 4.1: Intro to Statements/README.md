#Lesson 4.1: Intro to Statements  

Statement's can refer to anything from the code (from stating what a variable is when we initialize it, or what we want an expression to be) and are executed in the same order in which they appear in a program. For this lesson, we will focus on statements that allow us to control the flow of a program as it runs.


##If and Else Statement's

If and Else Statement's are known as "Selection Statements". They are typically written in the following syntax:

	if (condition(s)) statement

Conditions involve logical operators, meaning that an "if" statement will execute if it evaluates to true. but won't if it evaluates to false.  Here are some examples:

	if (x <= 5)			If x is less than or equal to 5, execute the statement
	if (x == true)			If x is true, execute the statement
	if (x >= y) 			If x is greater than or equal to y, execute the statement

Else statements are what they sound like. They have to come after an "if" statement, and generally execute after the first condition isn't met. Simply put, an if/else statement basically states " Do this if a condition is met, and if it is not met, do this instead." Here are some examples:

	if (x <= 5){
		cout << "x is less than or equal to 5" << endl;
	}
	else{
		cout << "x is greater than 5" << endl;
	}

There are some scenarios where we might want more conditions. In this case we, would use an "else if (condition) statement" Here is an example:

	if (thing == bird){
		cout << "It's a bird!" << endl;
	}
	else if (thing == plane){
		cout << "It's a plane!" << endl;
	}
	else{ 
		cout << It's superman! << endl;
	}

##For Loops

In C++ there are statements called **iteration statements**. Iteration statments repeat a statement while a specific condition is filled. The most popular of these is the **For Loop**. The syntax is:

	for (initialization; condition; increment) statement;

⋅⋅* In C++, an __iteration__ is each time a loop is executed. An __iterator__ is the counter that we use to control the number of iterations that are executed. An iterator can also be a cursor used to navigate data structures.
⋅⋅* The __initialization__ is generally where we declare our iterator
⋅⋅* The __condition__ functions exactly the same as they did in the "if/else" statements introduced earlier.  
⋅⋅* The __increment__ is generally how we manipulate our iterator until we eventually reach the end condition of our loop. For example, we could manipulate the iterator by:
	
	iterator++ (increment up by 1) 
	iterator-- (decrement down by 1)
	iterator+=2 (increment up by 2) 
	
These are only a few examples of how you can manipulate your increments. Keep in mind however, if you manipulate your increment in a way that the condition will never be false, your loop will continue infinitely. 

for example:

	for(int iterator = 5; iterator >= 0; iterator--){
		cout << iterator << endl;
	}

The above example would print:

	5	//initialization value
	4	//1st increment (5-1)
	3	//2nd increment (4-1)
	2	//3rd increment (3-1)
	1	//4th increment (2-1)
	0	//5th increment (1-1). Notice the loop will exit when the function prints 0.

The previous example provides a simple representation of a for loop. Our initialiation value is 5, and our iterator decrements by 1 until the intitial condition is false.

But what if we want two conditions?  What if we want three iterators, or several different increments? We can write more conditions to include more conditions if desired. We would do so by using commas while we're inside the parentheses to include extra parts to each section (sections divided by the semicolons). For example:

	int main(){
		for(int iterator1 = 3,iterator2 = 5; iterator1 >=0, iterator2 >=1; iterator1--,iterator2--){
			cout << iterator1 << " " << iterator2 << endl;
		}
	}

This example would print:

	 3  5
	 2  4
	 1  3
	 0  2
	-1  1

Notice that iterator1 actually goes below 0 due to our second condition in our last print statement. 

##While Loops
While Loops are similar to For Loops, but they are a little more simple. The syntax for a while loop is:

	while(condition) statement

Similar to a for loop, a while loop executes so long as a particular condition is met. Unlike for loops, however, while loops do not use iterators in their set up. Because while loops lack iterators, we have initialize our variables and iterators outside of the loop itself. For example:

	int main(){
		int iterator = 3;
		while(iterator >=0){
			cout << iterator << endl; 
			iterator--;
		}
	}

This example would print:

	3	// Our initialization value is 3
	2	// Decrement by 1 (3-1)
	1	// Decrement by 1 (2-1)
	0	// Decrement by 1 (1-1) and exit

So in comparison to the for loop where we had the initialization for iterator inside the parentheses, we move it up above it, and we have it's incrementation placed inside of the loop. The initialization has to occur outside of the loop, or else it will simply be reinitialized at the beginning of each iteration. 

##Jump Statements

Jump statments allow us to alter the flow of our program.  

### Continue Statement

The **continue statement** tells us to skip the rest of the statement in a loop, and jump to the top of the loop for another iteration. For an example:

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

Notice that the 3 is missing. When our iterator is equal to three, we are told to continue. This means that the flow of that iteration will never print three, and will instead skip to two and conitnue to proceed with the loop.

### Break Statement

**Break statements** tell us to exit a loop entirely when we reach it. For example:

	for(int iterator = 5; iterator >= 0; iterator--){
		if (iterator == 3){
		break;
		}
		cout << iterator << endl;
	}
	
This example will print:
	
	5
	4

When iterator is equal to three, we're told to exit the loop entirely!
