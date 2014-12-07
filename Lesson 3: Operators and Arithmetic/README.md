Lesson 3: Operators and Arithmetic
==========

Now we're going to start really digging into the interesting stuff with your coding assignments.  In this chapter we're going to learn about operators in C++ and how we use them (namely to implement
arithmetic)

Arithmetic Operators
----------

Just briefly I wanted to bring up the "=" operator, in C++ it's called the 'Assignment Operator', we used it before when we wanted to assign values to our variables, like x = 5.  Anyways...
Your arithmetic operators are:  
+	addition		
-	subtraction
*	multiplication
/	division
%	modulo, modulo is similar to division except it gives you the remainder (e.g. 11 % 3 will return 2, since 11/3 gives a remainder of 2

Compound Assignment Operators
----------

These operators are shortcuts of sort, they're used when you have an existing variable that you'd like to perform an operation on.  The ones for arithmetic are:  
+=	addition
-=	subtraction
*=	multiplication
/=	division
%=	modulo

Say you have a variable x, x holds the value 5 and we want to add 5 more to it so x holds 10, you could write this like:
x = x + 5
x += 5

Both of these would be valid and would end with x being set equal to 10, the same concept applies to the rest of the compound assignment operators

Increment and Decrement Operators
----------

These operators are typically used in loops (control structures that you'll be learning about soon!), they're useful when we want to add or subtract 1 from an already exisiting variable. They are
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
x would hold 0, y would hold 1

x = 0
y = x++
x would hold 0, y would also hold 0

Comparison Operators
----------
These are operators we use to determine if values are greater than, less than, or equal to other values.  The result of these operators is a "true or false" (or boolean) output.
These operators are:
==	Equal to
!=	Not equal to
<	Less than
>	Greater than
<=	Less than or equal to
>=	Greater than or equal to

This is important later when we learn to use conditional statements, but some examples are:  
1 == 1	returns true
2 <=1	returns false
3 != 5	returns true

Logical Operators
----------
This is also something that's more important when we're using conditional statements, but these are operators that work with boolean values 
!	Not, this flips the true/false outcome of a statement, for example, !(5 <= 6) would return false, 5 is less than 6, but the not flips the evaluation of true to be false
&&	And, Say we have two expressions, (a <= b) && (b == 5), with the && operator both of these conditions would have to be true for the whole expression to evaluate to true, otherwise it results in false
||	Or, Take (a <= b) and (b==5) again, but now it's (a<=b) || (b==5), now only one of those expressions needs to be true for the whole expression to evaluate to true, it's only false when both are false

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
We have a coding assignment for you to work on, follow the instructions in the comments above each function and run it when you're done to see if you passed.
