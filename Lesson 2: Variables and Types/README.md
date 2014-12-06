# Lesson 2: Variables and Types


By now you've written your first C++ program, congratulations! Though the "Hello World" program may seem a bit trivial, programming is not limited to printing simple sentences on screens. In this chapter we're going to discuss variables as well as the data types *string*, *float*, *boolean*, and *int*. Variables will allow us to go a little further with the capabilities of C++ and they will enable us to write programs that perform useful tasks.

## Variables

A variable provides us with named storage that our programs can manipulate. Each variable in C++ has a specific type, which determines the size and layout of the variable's memory; the range of values that can be stored within that memory; and the set of operations that can be applied to the variable.

So why use variables? Suppose we are asked to remember the number 2, and then we are asked to also memorize the number 7 at the same time. We now have 2 different values stored in our memory (2 and 7). Now, if we were asked to add 1 to the first number stired, we should retain the numbers 3 (that is 2+1) and 7 in our memory. Then we could, for example, add these values and obtain 10 as result.

    a = 2;
    b = 7;
    a = a + 1;
    result = a + b;
  
Considering the fact that we've only used two small integer values, the previous example is pretty trivial. However, your computer can store millions of numbers like these at the same time and conduct sophisticated mathematical operations with them.

Each variable needs a unique name that identifies it and distinguishes it from the others. For example, in the previous code the variable names were a, b, and result, but we could have called the variables any names we could have come up with, as long as they were valid C++ identifiers.

##Identifiers

An identifier is any sequence of one or more characters including the underscore (_) excluding symbols, punctuation marks, and spaces. This identifier however can't be the same as the predefined keywords
of C++ that indicate operations.  It's also important to note that C++ is case sensitive, so the indentifier "ITERATOR" wouldn't be the same as "iterator", for example. 

##Declaring Variables

Before we use any variables, we must declare it and its type before we can use it. This informs the compiler the size to reserve in memory for the variable and how to interpret its value. The syntax to declare a new variable in C++ is straightforward: we simply write the type followed by the variable name (i.e., its identifier). For example:

        int a;
        float thenumber;

These are two valid declarations of variables. The first one declares a variable of type int with the identifier a. The second one declares a variable of type float with the identifier thenumber. Once declared, the variables a and thenumber can be used within the rest of their scope in the program.

If we want to declare one or more variables of the same type, they can all be declared in a single statement by separating their identifiers with commas. For example:

        int a, b, c;

In this example, we have declared three variables of type int with the identifier a, b and c. This is the equivalent to the following code:

        int a;
        int b;
        int c;

##Initializing Variables

After variables are declared, they have an undetermined value until they are assigned a value for the first time. Initialization is when we give the variable a specific value.

In C++, there are three ways to initialize variables. They are all equivalent and are reminiscent of the evolution of the language over the years:

The first one, known as c-like initialization (because it is inherited from the C language), consists of appending an equal sign followed by the value to which the variable is initialized:

**type identifier = initial_value;**

For example, to declare a variable of type int called x and initialize it to a value of zero from the same moment it is declared, we can write:

        int a = 5;

The second way, which is known as constructor initialization (introduced by the C++ language), encloses the initial value between parentheses (()):

type identifier (initial_value); 
For example:

        int a (5);

The third way, which is known as uniform initialization, uses a similar method to the previous example, but it uses curly braces ({}) instead of parentheses (this was introduced by the revision of the C++ standard, in 2011):

type identifier {initial_value}; 
For example:

        int a {5};



##Intro to Ints

First a brief note on declaration, to declare a variable you use the syntax datatype indentifier, so if we wanted to declare an integer named Number we'd write:  
Int Number;

Now we have a variable of integer type, next we'd want to initialize it to hold some sort of value, so we could write:
Number = 0;

Then our variable would hold the number 0.  Integer's are for whole numbers, if you were to try:
Number = 5.5;	it would automatically be rounded down to 5
Number = "String";	you would get this message "error: invalid conversion from ‘const char*’ to ‘int’ [-fpermissive]"
Number = true;	Number would be set to be equal to 1, if it was false it would be equal to 0, these are numerical values that are known to represent true or false.

##Intro to Floats

To declare these variables we use the type name "float", for example:
float Number = 5.5;	Notice something we did here, you can both declare and initialize a variable on the same line. This goes for all data types.

Use floats for numbers with decimals since integers only hold whole numbers.

## Intro to Strings

If we don't have any mathematical intentions for a data type and we just want a message, you might find it useful to use the data type string!
It's used just like every other data type we've worked with so far, but the message or value assigned to it must be within a pair of quotation marks, strings can hold all characters. An example:
string mystring = "hello"

## Intro to Booleans

Booleans are an interesting data type, in C++ they're simply referred to as bools, and the variable name is just "bool".  They're made to hold either "true" or "false". Often they're used to work
conditional "if" statements and the like, which we'll get to later, but for now just know that the declaration of a boolean looks like:
bool myboolean = true;
or
bool myboolean = false;

## Assignment #2

For this assignment we've made an HTML quiz for you...
[COMPLETE LATER ONCE HTML IMPLEMENTATION IS FINISHED]
