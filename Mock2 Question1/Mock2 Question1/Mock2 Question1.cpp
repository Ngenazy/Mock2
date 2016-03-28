//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//								COMPUTER METHODS 3 PRACTICAL TEST2
//Name:Mukudzei Mangena M
//Student No:
//Date:28/03/24
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<iostream>
#include<string>

using namespace std;


//*****Question 2******
//Question 2 consists of 2 parts.
//2.1	Create a class "Card" which has a number and letter in the form number:letter eg 5:B  
//      Include default constructor, destructor, accessor and mutator (see how they are used in main to
//      determine the format required).
//      Put the declaration and definition in appropriate files! 
// 2.2  Overload the stream insertion operator for your class to print card values in format number:letter


// ***** DO NOT MODIFY CODE BELOW THIS LINE *****
int main(int argc, char *argv[]) {

	Card myCard(8, 'M');									// instantiate card class. 

	cout << "My card is " << myCard << endl;			// demonstrate overloaded stream insertion operator

	myCard.set(10, 30);									// change the card number and letter

	int number;										//remove this line in your final solution
	char letter;									//remove this line in your final solution
													//These 2 lines are there to show you the type of arguments
													//in the following line.

	myCard.get(number, letter);					//The arguments "number" and "letter" inside the parantheses
												//are there only to show you the order of arguments when you call
												//the .get().In your final solution write myCard.get().

	cout << "My card has number" << number << " and letter " << letter;   // display values in another format

}