/*
David Chen
2017
Guessing Game Program in C++
 */

//include libraries
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

//main function
int main()
{
  //declare local variables  
  int guesses = 0;
  char again = 'y';
  int input = 101;
  int myNumber = 0;
  //first while loop to set random number
  while(again == 'y'){
    srand(time(NULL));
    myNumber=rand()%100;
    //second while loop with if and elseif to tell user relationship between guess and myNumber
    while(input != myNumber){
    cout << "Input a number between 0 and 100 inclusive" << endl;
    cin >> input;
    if (input > myNumber){
      cout << "Too high" << endl;
    } else if (input < myNumber){
      cout << "too low" << endl;
      }
    //keeps track of the number of guesses
    guesses++;
    }
    //prints out results and asks user whether to play again
  cout << "Good job!  You won. Number of guesses " << guesses << "." << endl << "Input a y to play again, a n to quit.";
      cin >> again;
      guesses = 0;
  }
  return 0;
}
