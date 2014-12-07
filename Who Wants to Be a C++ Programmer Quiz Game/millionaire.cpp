//Who Wants to Be a Millionaire
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

void question15(){
	int answer, final_answer, play_again; 
	
	cout<<"\n\n";
	cout<<"\t ------------------------------------------------------------\n";
	cout<<"\t|                 Final Question!: $1,00,000                 |\n";
	cout<<"\t ------------------------------------------------------------\n";
	cout<<"\t|                                                            |\n";
	cout<<"\t|                                                            |\n";
	cout<<"\t|     What is the command used to print out statments?       |\n";
	cout<<"\t|                                                            |\n";
	cout<<"\t|                                                            |\n";
	cout<<"\t|------------------------------------------------------------|\n";
	cout<<"\t|     1.  cout                 |     2.  print               |\n";
	cout<<"\t|------------------------------------------------------------|\n";
	cout<<"\t|     3.  cin                  |     4.  return              |\n";
	cout<<"\t| -----------------------------------------------------------|\n";	
	cout<<"what is your answer: ";	
	cin >> answer;
	cout<<"Is that your final answer?";
	cin >> final_answer;
	
	if (final_answer == 4)
	{
		if (answer == 4)
		{ 
			cout<< "That is the correct answer!" << endl; 
			cout<< "Congradulations! You have have won Who Wants to be a C++ Programmer!";
			exit(EXIT_SUCCESS);
		}
		else
		{ 
			cout<< "Sorry that is incorrect" << endl;
			cout<< "Would you like to keep playing? Press '1' for yes, '2' for no: ";
			cin >> play_again;
			if (play_again == 1)
			{
				question15();
			}
			else 
			{
				cout << "Thank you for playing!";
			}
		}	
	}
	else
	{
		cout<< "Please enter another answer";
		question15();
	}
}


void question14(){
	int answer, final_answer, play_again; 
	
	cout<<"\n\n";
	cout<<"\t ------------------------------------------------------------\n";
	cout<<"\t|                 Question Number 14: $500,000               |\n";
	cout<<"\t ------------------------------------------------------------\n";
	cout<<"\t|                                                            |\n";
	cout<<"\t|                                                            |\n";
	cout<<"\t|     What is the command used to print out statments?       |\n";
	cout<<"\t|                                                            |\n";
	cout<<"\t|                                                            |\n";
	cout<<"\t|------------------------------------------------------------|\n";
	cout<<"\t|     1.  cout                 |     2.  print               |\n";
	cout<<"\t|------------------------------------------------------------|\n";
	cout<<"\t|     3.  cin                  |     4.  return              |\n";
	cout<<"\t| -----------------------------------------------------------|\n";	
	cout<<"what is your answer: ";	
	cin >> answer;
	cout<<"Is that your final answer?";
	cin >> final_answer;
	
	if (final_answer == 1)
	{
		if (answer == 1)
		{ 
			cout<< "That is the correct answer! You have won $500,000!" << endl;
			cout<< "Let's move on to question 15!";
			question15();
		}
		else
		{ 
			cout<< "Sorry that is incorrect" << endl;
			cout<< "Would you like to keep playing? Press '1' for yes, '2' for no: ";
			cin >> play_again;
			if (play_again == 1)
			{
				question14();
			}
			else 
			{
				cout << "Thank you for playing!";
			}
		}	
	}
	else
	{
		cout<< "Please enter another answer";
		question14();
	}
}

void question13(){
	int answer, final_answer, play_again; 
	
	cout<<"\n\n";
	cout<<"\t ------------------------------------------------------------\n";
	cout<<"\t|                 Question Number 13: $250,000               |\n";
	cout<<"\t ------------------------------------------------------------\n";
	cout<<"\t|                                                            |\n";
	cout<<"\t|                                                            |\n";
	cout<<"\t|     What is the command used to print out statments?       |\n";
	cout<<"\t|                                                            |\n";
	cout<<"\t|                                                            |\n";
	cout<<"\t|------------------------------------------------------------|\n";
	cout<<"\t|     1.  cout                 |     2.  print               |\n";
	cout<<"\t|------------------------------------------------------------|\n";
	cout<<"\t|     3.  cin                  |     4.  return              |\n";
	cout<<"\t| -----------------------------------------------------------|\n";	
	cout<<"what is your answer: ";	
	cin >> answer;
	cout<<"Is that your final answer?";
	cin >> final_answer;
	
	if (final_answer == 3)
	{
		if (answer == 3)
		{ 
			cout<< "That is the correct answer! You have won $125,000!" << endl;
			cout<< "Let's move on to question 14!";
			question14();
		}
		else
		{ 
			cout<< "Sorry that is incorrect" << endl;
			cout<< "Would you like to keep playing? Press '1' for yes, '2' for no: ";
			cin >> play_again;
			if (play_again == 1)
			{
				question13();
			}
			else 
			{
				cout << "Thank you for playing!";
			}
		}	
	}
	else
	{
		cout<< "Please enter another answer";
		question13();
	}
}


void question12(){
	int answer, final_answer, play_again; 
	
	cout<<"\n\n";
	cout<<"\t ------------------------------------------------------------\n";
	cout<<"\t|                 Question Number 12: $125,000               |\n";
	cout<<"\t ------------------------------------------------------------\n";
	cout<<"\t|                                                            |\n";
	cout<<"\t|                                                            |\n";
	cout<<"\t|     What is the command used to print out statments?       |\n";
	cout<<"\t|                                                            |\n";
	cout<<"\t|                                                            |\n";
	cout<<"\t|------------------------------------------------------------|\n";
	cout<<"\t|     1.  cout                 |     2.  print               |\n";
	cout<<"\t|------------------------------------------------------------|\n";
	cout<<"\t|     3.  cin                  |     4.  return              |\n";
	cout<<"\t| -----------------------------------------------------------|\n";	
	cout<<"what is your answer: ";	
	cin >> answer;
	cout<<"Is that your final answer?";
	cin >> final_answer;
	
	if (final_answer == 2)
	{
		if (answer == 2)
		{ 
			cout<< "That is the correct answer! You have won $125,000!" << endl;
			cout<< "Let's move on to question 13!";
			question13();
		}
		else
		{ 
			cout<< "Sorry that is incorrect" << endl;
			cout<< "Would you like to keep playing? Press '1' for yes, '2' for no: ";
			cin >> play_again;
			if (play_again == 1)
			{
				question12();
			}
			else 
			{
				cout << "Thank you for playing!";
			}
		}	
	}
	else
	{
		cout<< "Please enter another answer";
		question12();
	}
}

void question11(){
	int answer, final_answer, play_again; 
	
	cout<<"\n\n";
	cout<<"\t ------------------------------------------------------------\n";
	cout<<"\t|                 Question Number 11: $64,000                |\n";
	cout<<"\t ------------------------------------------------------------\n";
	cout<<"\t|                                                            |\n";
	cout<<"\t|                                                            |\n";
	cout<<"\t|     What is the command used to print out statments?       |\n";
	cout<<"\t|                                                            |\n";
	cout<<"\t|                                                            |\n";
	cout<<"\t|------------------------------------------------------------|\n";
	cout<<"\t|     1.  cout                 |     2.  print               |\n";
	cout<<"\t|------------------------------------------------------------|\n";
	cout<<"\t|     3.  cin                  |     4.  return              |\n";
	cout<<"\t| -----------------------------------------------------------|\n";	
	cout<<"what is your answer: ";	
	cin >> answer;
	cout<<"Is that your final answer?";
	cin >> final_answer;
	
	if (final_answer == 1)
	{
		if (answer == 1)
		{ 
			cout<< "That is the correct answer! You have won $64,000!";
			question12();
		}
		else
		{ 
			cout<< "Sorry that is incorrect" << endl;
			cout<< "Would you like to keep playing? Press '1' for yes, '2' for no: ";
			cin >> play_again;
			if (play_again == 1)
			{
				question11();
			}
			else 
			{
				cout << "Thank you for playing!";
			}
		}	
	}
	else
	{
		cout<< "Please enter another answer";
		question11();
	}
}


void question10(){
	int answer, final_answer, play_again; 
	
	cout<<"\n\n";
	cout<<"\t ------------------------------------------------------------\n";
	cout<<"\t|                 Question Number 10: $50,000                |\n";
	cout<<"\t ------------------------------------------------------------\n";
	cout<<"\t|                                                            |\n";
	cout<<"\t|                                                            |\n";
	cout<<"\t|     What is the command used to print out statments?       |\n";
	cout<<"\t|                                                            |\n";
	cout<<"\t|                                                            |\n";
	cout<<"\t|------------------------------------------------------------|\n";
	cout<<"\t|     1.  cout                 |     2.  print               |\n";
	cout<<"\t|------------------------------------------------------------|\n";
	cout<<"\t|     3.  cin                  |     4.  return              |\n";
	cout<<"\t| -----------------------------------------------------------|\n";	
	cout<<"what is your answer: ";	
	cin >> answer;
	cout<<"Is that your final answer?";
	cin >> final_answer;
	
	if (final_answer == 4)
	{
		if (answer == 4)
		{ 
			cout<< "That is the correct answer! You have won $25,000!";
			cout<< "Let's move on to question 2!" << endl;
			question11();
		}
		else
		{ 
			cout<< "Sorry that is incorrect" << endl;
			cout<< "Would you like to keep playing? Press '1' for yes, '2' for no: ";
			cin >> play_again;
			if (play_again == 1)
			{
				question10();
			}
			else 
			{
				cout << "Thank you for playing!";
			}
		}	
	}	
	else
	{
		cout<< "Please enter another answer";
		question10();
	}
}

void question9(){
	int answer, final_answer, play_again; 
	
	cout<<"\n\n";
	cout<<"\t ------------------------------------------------------------\n";
	cout<<"\t|                 Question Number 9: $25,000                 |\n";
	cout<<"\t ------------------------------------------------------------\n";
	cout<<"\t|                                                            |\n";
	cout<<"\t|                                                            |\n";
	cout<<"\t|     What is the command used to print out statments?       |\n";
	cout<<"\t|                                                            |\n";
	cout<<"\t|                                                            |\n";
	cout<<"\t|------------------------------------------------------------|\n";
	cout<<"\t|     1.  cout                 |     2.  print               |\n";
	cout<<"\t|------------------------------------------------------------|\n";
	cout<<"\t|     3.  cin                  |     4.  return              |\n";
	cout<<"\t| -----------------------------------------------------------|\n";	
	cout<<"what is your answer: ";	
	cin >> answer;
	cout<<"Is that your final answer?";
	cin >> final_answer;
	
	if (final_answer == 3)
	{
		if (answer == 3)
		{ 
			cout<< "That is the correct answer! You have won $25,000!" << endl;
			cout<< "Let's move on to question 10!";
			question10();
		}
		else
		{ 
			cout<< "Sorry that is incorrect" << endl;
			cout<< "Would you like to keep playing? Press '1' for yes, '2' for no: ";
			cin >> play_again;
			if (play_again == 1)
			{
				question9();
			}
			else 
			{
				cout << "Thank you for playing!";
			}
		}	
	}
	else
	{
		cout<< "Please enter another answer";
		question9();
	}
}


void question8(){
	int answer, final_answer, play_again; 
	
	cout<<"\n\n";
	cout<<"\t ------------------------------------------------------------\n";
	cout<<"\t|                 Question Number 8: $15,000                 |\n";
	cout<<"\t ------------------------------------------------------------\n";
	cout<<"\t|                                                            |\n";
	cout<<"\t|                                                            |\n";
	cout<<"\t|     What is the command used to print out statments?       |\n";
	cout<<"\t|                                                            |\n";
	cout<<"\t|                                                            |\n";
	cout<<"\t|------------------------------------------------------------|\n";
	cout<<"\t|     1.  cout                 |     2.  print               |\n";
	cout<<"\t|------------------------------------------------------------|\n";
	cout<<"\t|     3.  cin                  |     4.  return              |\n";
	cout<<"\t| -----------------------------------------------------------|\n";	
	cout<<"what is your answer: ";	
	cin >> answer;
	cout<<"Is that your final answer?";
	cin >> final_answer;
	
	if (final_answer == 2)
	{
		if (answer == 2)
			{ 
				cout<< "That is the correct answer! You have won $15,000!" << endl;
				cout<< "Let's move on to question 9!";
				question9();
			}
		else
		{ 
			cout<< "Sorry that is incorrect" << endl;
			cout<< "Would you like to keep playing? Press '1' for yes, '2' for no: ";
			cin >> play_again;
			if (play_again == 1)
			{
				question8();
			}
			else 
			{
				cout << "Thank you for playing!";
			}
		}	
	}
	else
	{
		cout<< "Please enter another answer";
		question8();
	}
}


void question7(){
	int answer, final_answer, play_again; 
	
	cout<<"\n\n";
	cout<<"\t ------------------------------------------------------------\n";
	cout<<"\t|                 Question Number 7: $12,000                 |\n";
	cout<<"\t ------------------------------------------------------------\n";
	cout<<"\t|                                                            |\n";
	cout<<"\t|                                                            |\n";
	cout<<"\t|     What is the command used to print out statments?       |\n";
	cout<<"\t|                                                            |\n";
	cout<<"\t|                                                            |\n";
	cout<<"\t|------------------------------------------------------------|\n";
	cout<<"\t|     1.  cout                 |     2.  print               |\n";
	cout<<"\t|------------------------------------------------------------|\n";
	cout<<"\t|     3.  cin                  |     4.  return              |\n";
	cout<<"\t| -----------------------------------------------------------|\n";	
	cout<<"what is your answer: ";	
	cin >> answer;
	cout<<"Is that your final answer?";
	cin >> final_answer;
	
	if (final_answer == 4)
	{
		if (answer == 4)
			{ 
				cout<< "That is the correct answer! You have won $12,000!" << endl;
				cout<< "Let's move on to question 8!";
				question8();
			}
		else
		{ 
			cout<< "Sorry that is incorrect" << endl;
			cout<< "Would you like to keep playing? Press '1' for yes, '2' for no: ";
			cin >> play_again;
			if (play_again == 1)
			{
				question7();
			}
			else 
			{
				cout << "Thank you for playing!";
			}
		}
	}
	else
	{
		cout<< "Please enter another answer";
		question7();
	}
}

void question6(){
	int answer, final_answer, play_again; 
	
	cout<<"\n\n";
	cout<<"\t ------------------------------------------------------------\n";
	cout<<"\t|                 Question Number 6: $10,000                 |\n";
	cout<<"\t ------------------------------------------------------------\n";
	cout<<"\t|                                                            |\n";
	cout<<"\t|                                                            |\n";
	cout<<"\t|     What is the command used to print out statments?       |\n";
	cout<<"\t|                                                            |\n";
	cout<<"\t|                                                            |\n";
	cout<<"\t|------------------------------------------------------------|\n";
	cout<<"\t|     1.  cout                 |     2.  print               |\n";
	cout<<"\t|------------------------------------------------------------|\n";
	cout<<"\t|     3.  cin                  |     4.  return              |\n";
	cout<<"\t| -----------------------------------------------------------|\n";	
	cout<<"what is your answer: ";	
	cin >> answer;
	cout<<"Is that your final answer?";
	cin >> final_answer;
	
	if (final_answer == 4)
	{
		if (answer == 4)
		{ 
			cout<< "That is the correct answer! You have won $10,000!" << endl;
			cout<< "Let's move on to question 7!";
			question7();
		}
		else
		{ 
			cout<< "Sorry that is incorrect" << endl;
			cout<< "Would you like to keep playing? Press '1' for yes, '2' for no: ";
			cin >> play_again;
			if (play_again == 1)
			{
				question6();
			}
			else 
			{
				cout << "Thank you for playing!";
			}
		}

	}
	else
	{
		cout<< "Please enter another answer";
		question6();
	}
}

void question5(){
	int answer, final_answer, play_again; 
	
	cout<<"\n\n";
	cout<<"\t ------------------------------------------------------------\n";
	cout<<"\t|                 Question Number 5: $7,500                  |\n";
	cout<<"\t ------------------------------------------------------------\n";
	cout<<"\t|                                                            |\n";
	cout<<"\t|                                                            |\n";
	cout<<"\t|     What is the command used to print out statments?       |\n";
	cout<<"\t|                                                            |\n";
	cout<<"\t|                                                            |\n";
	cout<<"\t|------------------------------------------------------------|\n";
	cout<<"\t|     1.  cout                 |     2.  print               |\n";
	cout<<"\t|------------------------------------------------------------|\n";
	cout<<"\t|     3.  cin                  |     4.  return              |\n";
	cout<<"\t| -----------------------------------------------------------|\n";	
	cout<<"what is your answer: ";	
	cin >> answer;
	cout<<"Is that your final answer?";
	cin >> final_answer;
	
	if (final_answer == 1)
	{
		if (answer == 1)
		{ 
			cout<< "That is the correct answer! You have won $7,500!";
			cout<< "Let's move on to question 2!";
			question6();
		}
		else
		{ 
			cout<< "Sorry that is incorrect" << endl;
			cout<< "Would you like to keep playing? Press '1' for yes, '2' for no: ";
			cin >> play_again;
			if (play_again == 1)
			{
				question5();
			}
			else 
			{
				cout << "Thank you for playing!";
			}
		}
	}
	else
	{
		cout<< "Please enter another answer";
		question5();
	}
}

void question4(){
	int answer, final_answer, play_again; 
	
	cout<<"\n\n";
	cout<<"\t ------------------------------------------------------------\n";
	cout<<"\t|                 Question Number 4: $5000                   |\n";
	cout<<"\t ------------------------------------------------------------\n";
	cout<<"\t|                                                            |\n";
	cout<<"\t|                                                            |\n";
	cout<<"\t|     What is the command used to print out statments?       |\n";
	cout<<"\t|                                                            |\n";
	cout<<"\t|                                                            |\n";
	cout<<"\t|------------------------------------------------------------|\n";
	cout<<"\t|     1.  cout                 |     2.  print               |\n";
	cout<<"\t|------------------------------------------------------------|\n";
	cout<<"\t|     3.  cin                  |     4.  return              |\n";
	cout<<"\t| -----------------------------------------------------------|\n";	
	cout<<"what is your answer: ";	
	cin >> answer;
	cout<<"Is that your final answer?";
	cin >> final_answer;
	
	if (final_answer == 2)
	{
		if (answer == 2)
		{ 
			cout<< "That is the correct answer! You have won $5000!" << endl;
			cout<< "Let's move on to question 5!";
			question5();
		}
		else
		{ 
			cout<< "Sorry that is incorrect" << endl;
			cout<< "Would you like to keep playing? Press '1' for yes, '2' for no: ";
			cin >> play_again;
			if (play_again == 1)
			{
				question4();
			}
			else 
			{
				cout << "Thank you for playing!";
			}
		}
	}
	else
	{
		cout<< "Please enter another answer: ";
		question4();
	}
}

void question3(){
	int answer, final_answer, play_again; 
	
	cout<<"\n\n";
	cout<<"\t ------------------------------------------------------------\n";
	cout<<"\t|                 Question Number 3: $3000                   |\n";
	cout<<"\t ------------------------------------------------------------\n";
	cout<<"\t|                                                            |\n";
	cout<<"\t|                                                            |\n";
	cout<<"\t|     What is the command used to print out statments?       |\n";
	cout<<"\t|                                                            |\n";
	cout<<"\t|                                                            |\n";
	cout<<"\t|------------------------------------------------------------|\n";
	cout<<"\t|     1.  cout                 |     2.  print               |\n";
	cout<<"\t|------------------------------------------------------------|\n";
	cout<<"\t|     3.  cin                  |     4.  return              |\n";
	cout<<"\t| -----------------------------------------------------------|\n";	
	cout<<"what is your answer: ";	
	cin >> answer;
	cout<<"Is that your final answer?";
	cin >> final_answer;
	
	if (final_answer == 3)
	{
		if (answer == 3)
			{ 
				cout<< "That is the correct answer! You have won $3000!" << endl;
				cout<< "Let's move on to question 4!";
				question4();
			}
		else
		{ 
			cout<< "Sorry that is incorrect" << endl;
			cout<< "Would you like to keep playing? Press '1' for yes, '2' for no: " ;
			cin >> play_again;
			if (play_again == 1)
			{
				question3();
			}
			else 
			{
				cout << "Thank you for playing!";
			}
		}
	}
	else
	{
		cout<< "Please enter another answer: ";
		question3();
	}
}


void question2(){
	int answer, final_answer, play_again; 
	
	cout<<"\n\n";
	cout<<"\t ------------------------------------------------------------\n";
	cout<<"\t|                 Question Number 2: $1000                   |\n";
	cout<<"\t ------------------------------------------------------------\n";
	cout<<"\t|                                                            |\n";
	cout<<"\t|                                                            |\n";
	cout<<"\t|     What is the command used to print out statments?       |\n";
	cout<<"\t|                                                            |\n";
	cout<<"\t|                                                            |\n";
	cout<<"\t|------------------------------------------------------------|\n";
	cout<<"\t|     1.  cout                 |     2.  print               |\n";
	cout<<"\t|------------------------------------------------------------|\n";
	cout<<"\t|     3.  cin                  |     4.  return              |\n";
	cout<<"\t| -----------------------------------------------------------|\n";	
	cout<<"what is your answer: ";	
	cin >> answer;
	cout<<"Is that your final answer?";
	cin >> final_answer;
	
	if (final_answer == 1)
	{
		if (answer == 1)
		{ 
			cout<< "That is the correct answer! You have won $1000!"<< endl;
			cout<< "Let's move on to question 3!";
			question3();
		}
		
		else
		{ 
			cout<< "Sorry that is incorrect" << endl;
			cout<< "Would you like to keep playing? Press '1' for yes, '2' for no: ";
			cin >> play_again;
				
			if (play_again == 1)
			{
				question2();
			}		
			else 
			{
				cout << "Thank you for playing!";
			}
		}
	}
	
	else
	{
		cout<< "Please enter another answer";
		question2();
	}
}


void question1(){
	int answer, final_answer, play_again; 
	
	cout<<"\n\n";
	cout<<"\t ------------------------------------------------------------\n";
	cout<<"\t|                 Question Number 1: $500                    |\n";
	cout<<"\t ------------------------------------------------------------\n";
	cout<<"\t|                                                            |\n";
	cout<<"\t|                                                            |\n";
	cout<<"\t|     What is the command used to print out statments?       |\n";
	cout<<"\t|                                                            |\n";
	cout<<"\t|                                                            |\n";
	cout<<"\t|------------------------------------------------------------|\n";
	cout<<"\t|     1.  cout                 |     2.  print               |\n";
	cout<<"\t|------------------------------------------------------------|\n";
	cout<<"\t|     3.  cin                  |     4.  return              |\n";
	cout<<"\t| -----------------------------------------------------------|\n";	
	cout<<"what is your answer: ";	
	cin >> answer;
	cout<<"Is that your final answer?";
	cin >> final_answer;
	
	if (final_answer == 1)
	{
		if (answer == 1)
		{ 
			cout<< "That is the correct answer! You have won $500!" << endl;
			cout<< "Let's move on to question 2!";
			question2();
		}
		
		else
		{ 
			cout<< "Sorry that is incorrect" << endl;
			cout<< "Would you like to keep playing? Press '1' for yes, '2' for no: ";
			cin >> play_again;
			
			if (play_again == 1)
			{
				question1();
			}
			else 
			{
				cout << "Thank you for playing!";
			}
		}
	}
	
	else
	{
		cout<< "Please enter another answer: ";
		question1();
	}
}

int main()
{
	
	cout<<"\n\n";
	cout<<"\t ------------------------------------------------------------\n";
	cout<<"\t|             Who wants to be a C++ Programmer!              |\n";
	cout<<"\t ------------------------------------------------------------\n";
	cout<<"\t|   Welcome to Who Wants to be a Millionaire C++ Edition!    |\n";
	cout<<"\t|                                                            |\n";
	cout<<"\t|  This game is designed to test your knowledge on basic     |\n";
	cout<<"\t| C++ concepts that were introduced in the earlier tutorials!|\n";
	cout<<"\t|                                                            |\n";
	cout<<"\t|   The rules are simple. When prompted, enter the correct   |\n";
	cout<<"\t|  input. The game will end when you have made an incorrect  |\n";
	cout<<"\t|               answer. Good luck and have fun!              |\n";
	cout<<"\t|                                                            |\n";
	cout<<"\t| -----------------------------------------------------------|\n";
	
	string name;
	int play;
	cout<<"Enter your name: ";
	cin >> name;
	cout<<"Welcome "<<name<<" to \"Who wants to be a Millionaire\"\n";         
	cout<<"Are you ready to play? Press '1' to play, '2' to exit: ";
	cin >> play;
	
	if(play == 2)
	{
		cout << "Thanks for playing";
	}
	
	else
	{
		cout<< "Ok, let's begin!";
		question1();
	}

}

