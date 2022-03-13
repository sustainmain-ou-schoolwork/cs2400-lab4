/**
 *    @file: prog1.cc
 *  @author: Josh Marusek
 *    @date: 2021-09-17
 *   @brief: From lab 4; gets a number from the user and allows them to leave if they answer correctly
 */

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  int number;   // user input is piped to this variable
  int answer;   // computed answer (42 will allow the user to exit)

  do {
    cout << "Enter a number, and I'll compute the answer: ";
    cin >> number;
    switch (number) {
    case 42:
      cout << "You have the answer already!\n";
      answer = 42;
      break;
    case 12345:
      cout << "You entered the secret number!\n";
      answer = 42;
      break;
    case 0:
      answer = 0;
      cout << "You've got nothing!\nTry again.\n";
      break;
    case 1:
      answer = number*2;
      cout << "Well, at least you have something\nBut it's not enough, try again.\n";
      break;
    case 13:
      answer = -13;
      cout << "You're very unlucky aren't you.\nTry again.\n";
      break;
    case 21:
      answer = 22;
      cout << "Well, I'll give you one more, but it's still not enough.\n"
	   << "Try again.\n";
      break;
    default:
      answer = -1;
      cout << "That number is so bogus, I'm taking what little you have away from you.\n"
	   << "Try again, and be smart about it this time.\n";
      break;
    }
    
  } while (answer != 42);
  
  cout << "You've succeeded in getting out of this dumb program!\n"
       << "Congratulations\n";

  return (EXIT_SUCCESS);
}
