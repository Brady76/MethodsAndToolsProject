#Lesson 3: Operators and Arithmetic


Now we're going to start really digging into the interesting stuff with your coding assignments.  In this chapter we're going to learn about operators in C++ and how we use them. We will primarily be dealing with simple arithmetic functions.

## Assignment Operator

The assignment operator assigns a value to a variable. For example,

    x=5;

This statement assigns the integer value 5 to the variable x. The assignment operation always takes place from right to left, and never the other way around.

An important thing to keep in mind is that we are only assigning the value of y to x at the moment of the assignment operation. Therefore, if y changes at a later moment, it will not affect the new value taken by x. Let's go over a quick example to show how assignment operators work.

    // assignment operator
    #include <iostream>
    using namespace std;
    
    int main ()
    {
      int x, y;         // x:?,  y:?
      x = 9;            // x:9, y:?
      b = 4;            // x:9, y:5
      a = b;            // x:5, y:5
      b = 7;            // x:5, y:7
    
      cout << "x:";
      cout << x;
      cout << " y:";
      cout << y;
      // will print out "x:5, y:7"
    }

This program prints on screen the final values of x and y (5 and 7, respectively). Notice how x was not affected by the final modification of x, even though we previously declared x = y.




##Arithmetic Operators

Your arithmetic operators are:  

| Operator      | Description   |
| ------------- |:-------------:|
| +             | Addition      |
| -             | Subtraction   |
| *             | Multiplication|
| /             | Division      |
| %             | Modulo        |

The modulo operator is similar to division except it gives you the remainder (e.g. 11 % 3 will return 2, since 11/3 gives a remainder of 2).

##Compound Assignment Operators

These operators are shortcuts of sort. They are used when you have an existing variable that you'd like to perform an operation on.  The ones for arithmetic are:  

| Operator      | Equivalent to |
| ------------- |:-------------:|
| y +=  x       | y = y + x     |
| y -=  x       | y = y - x     |
| x *=  y       | x = x * y     |
| x /=  y       | x = x / y     |

Say you have a variable x which holds the value 5. If you would like to keep the variable assignment the same and add 5 to that value, you could write this like:

    // using simple operators
    #include <iostream>
    using namespace std;

    int main ()
    {
      int x = 5;
      x = x + 5;    // equivalent to 5+5
      cout << x;    // prints 10
    }

Now suppose we wanted to take that same example and implement compound assignment operators. Our program would now look like this.
    
    // using simple operators
    #include <iostream>
    using namespace std;

    int main ()
    {
      int x = 5;
      x += 5;       // equivalent to 5+5
      cout << x;    // prints 10
    }


Both of these would be valid and would end with x being set equal to 10, the same concept applies to the rest of the compound assignment operators

##Increment and Decrement Operators


These operators are typically used in loops (control structures that you'll be learning about soon!). They are useful when we want to add or subtract 1 from an already exisiting variable. They are written as the following.

    ++	Increment
    --	Decrement   

So for example:
   
    x++
    x += 1
    x = x + 1

Would all do the same thing!

One important thing to note is using the increment/decrement operator as a suffix versus using it as a prefix  
If the operator is used as a prefix, the value is incremented/decremented and then evaluated, if the operator is used as a suffix, the value is evaluated and then incremented/decremented
For example:

    x = 0
    y = ++x
    // x would hold 0, y would hold 1

    x = 0
    y = x++
    // x would hold 0, y would also hold 0

##Comparison Operators

These are operators we use to determine if values are greater than, less than, or equal to other values.  The result of these operators is a "true or false" (or boolean) output.
These operators are:

| Operator      | Description        |
| ------------- |:------------------:|
| ==            | Equal to           |
| !=            | Not Equal to       |
| <             | Less Than          |
| >             | Greater Than       |
| <=            | Less or Equal to   |
| >=            | Greater or Equal to|


This is important later when we learn to use conditional statements, but some examples are:  

    1 == 1	returns true
    2 <=1	returns false
    3 != 5	returns true

##Logical Operators

This is extremely important when using conditional statements. These are operators that work with boolean values (true or false)

**! (Not)**: This flips the true/false outcome of a statement. For example, !(5 <= 6) would return false, 5 is less than 6, but the not flips the evaluation of true to be false

**&& (And):**: Say we have two expressions, (a <= b) && (b == 5), with the && operator both of these conditions would have to be true for the whole expression to evaluate to true, otherwise it results in false

**|| (Or):**, Take (a <= b) and (b==5) again, but now it's (a<=b) || (b==5), now only one of those expressions needs to be true for the whole expression to evaluate to true, it's only false when both are false

Type Casting
----------
Type casting is a feature of C++ that allows you to convert a value from one data type to another, it looks like this:

    float z;
    int x = 5;
    z = (float) x;

In this case, the int 5 is converted into the float 5

String arithmetic
----------
You can combine strings together using the "+" operator. It looks like this:

    string x = "hello";
    x += "hi";

At this point, x would contain "hellohi"

Assignment
----------

For this assignment, you will be asked to implement a set of functions that follows a specific order. Follow the instructions in the comments above each function and run it when you're done to see if you passed.
