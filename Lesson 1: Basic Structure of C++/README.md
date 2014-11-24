Lesson 1: Structure of a C++ Program
==========

Welcome to Lesson 1 of C++ tutorials! This lesson will introduce the basic structure of a C++ program. You will also implement your first program called "Hello World". Although it is a very simple, it contains the fundamental components of a C++ program.

Hello World
---------

The best way to learn a programming language is by writing programs. Here, we have a basic program that prints "Hellow World" (which is typically the first program that beginners write). We have broken down the program line by line to discuss what each component of our program does.

	//my first program in C++
	#include <iostream>
	
	int main()
	{
		std::cout << "Hello World!";
	}

1. Line 1: // My first program in C++
--* The two slash signs, "//"  indicate that the line is a comment by the programmer. Typically, programmers use these comments as observations or descriptions of the program or function that succeeds the comment. Comments have no effect on the behavior of the program itself, but they are useful tools that help the user understand what the actual code is doing. In this example, the comment just states what the name of the program is.
2. Line 2: #include <iostream>
--* Lines beginning with a hash sign (#) are directives read and interpreted by what is known as the preprocessor. They are special lines interpreted before the compilation of the program itself begins. In this case, the directive #include <iostream>, instructs the preprocessor to include a section of standard C++ code, known as header iostream, that allows to perform standard input and output operations, such as writing the output of this program (Hello World) to the screen.
3. Line 3: A blank line.
--* Blank lines have no effect on a program. They simply improve readability of the code.
4. Line 4: int main ()
--* This line initiates the declaration of a function. A function is a section of code that performs a certain task. Every function is given first be a data type: in this case is **int**. After the data type is declared, the function is given a name: in this case, the name given is **main**. The name of functions are intoducted with a succession of a type of data that they are processing. The **()** following main are parameters. We will go discuess functions in greater detail in a later chapter.

The function named main is a special function in all C++ programs; it is the function called when the program is run. The execution of all C++ programs begins with the main function, regardless of where the function is actually located within the code.

Lines 5 and 7: { and }
The open brace ({) at line 5 indicates the beginning of main's function definition, and the closing brace (}) at line 7, indicates its end. Everything between these braces is the function's body that defines what happens when main is called. All functions use braces to indicate the beginning and end of their definitions.

Line 6: std::cout << "Hello World!";
This line is a C++ statement. A statement is an expression that can actually produce some effect. It is the meat of a program, specifying its actual behavior. Statements are executed in the same order that they appear within a function's body.

This statement has three parts: First, std::cout, which identifies the standard character output device (usually, this is the computer screen). Second, the insertion operator (<<), which indicates that what follows is inserted into std::cout. Finally, a sentence within quotes ("Hello world!"), is the content inserted into the standard output.

Notice that the statement ends with a semicolon (;). This character marks the end of the statement, just as the period ends a sentence in English. All C++ statements must end with a semicolon character. One of the most common syntax errors in C++ is forgetting to end a statement with a semicolon.




Executable Terminal Program
---------

Similar to any spoken language, C++ and all programming languages have a specific syntax or way on how things are written. To give you practice on C++ syntax, each lesson will include an interactive file that allows you to practice typing in the C++ language. 


Practice Assignemnts
--------

The key to becoming a great programmer is practice. In these tutorials, we have provided templates and test files for you to practice implementing your own code. Each section will have their own assignment in which you can practice writing your own code, and test files for each assignment so you'll know whether or not you have implemented your code correctly.

Remember, learning how to program takes a bit of patience, so be sure that you take your time when going through these lessons.

Have fun!

