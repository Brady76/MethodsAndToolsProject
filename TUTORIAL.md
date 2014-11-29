Lesson 2: Variables and Types
==========

By now you've written your first C++ program, congratulations! In this chapter we're going to discuss variables as well as the data types string, float, boolean, and int

Identifiers
----------
An identifier is any sequence of one or more characters including the underscore (_) excluding symbols, punctuation marks, and spaces. This identifier however can't be the same as the predefined keywords
of C++ that indicate operations.  It's also important to note that C++ is case sensitive, so the indentifier "ITERATOR" wouldn't be the same as "iterator", for example. 

Intro to Ints
----------
First a brief note on declaration, to declare a variable you use the syntax datatype indentifier, so if we wanted to declare an integer named Number we'd write:  
Int Number;

Now we have a variable of integer type, next we'd want to initialize it to hold some sort of value, so we could write:
Number = 0;

Then our variable would hold the number 0.  Integer's are for whole numbers, if you were to try:
Number = 5.5;	it would automatically be rounded down to 5
Number = "String";	you would get this message "error: invalid conversion from ‘const char*’ to ‘int’ [-fpermissive]"
Number = true;	Number would be set to be equal to 1, if it was false it would be equal to 0, these are numerical values that are known to represent true or false.

Intro to Floats
----------
To declare these variables we use the type name "float", for example:
float Number = 5.5;	Notice something we did here, you can both declare and initialize a variable on the same line. This goes for all data types.

Use floats for numbers with decimals since integers only hold whole numbers.

Intro to Strings
----------
If we don't have any mathematical intentions for a data type and we just want a message, you might find it useful to use the data type string!
It's used just like every other data type we've worked with so far, but the message or value assigned to it must be within a pair of quotation marks, strings can hold all characters. An example:
string mystring = "hello"

Intro to Booleans
----------
Booleans are an interesting data type, in C++ they're simply referred to as bools, and the variable name is just "bool".  They're made to hold either "true" or "false". Often they're used to work
conditional "if" statements and the like, which we'll get to later, but for now just know that the declaration of a boolean looks like:
bool myboolean = true;
or
bool myboolean = false;

Assignment #2
----------
For this assignment we've made an HTML quiz for you...
[COMPLETE LATER ONCE HTML IMPLEMENTATION IS FINISHED]
