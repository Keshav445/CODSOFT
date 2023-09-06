#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
  srand(time(0));
  int checkWon;
  char playagain;
  cout<<"\t\t\t\t\t\t********************************************"<<endl;
  cout<<"\t\t\t\t\t\t      WELCOME TO GUESS THE NUMBER GAME        "<<endl;
  cout<<endl;
  cout<<"\t\t\t\t\t\t********************************************"<<endl;

  int guess;
 do{
  int ranNum = rand() % 100 + 1;

  cout << "Guess the number between 1 and 100: ";
  cin>>guess;
  while (guess != ranNum) {
    
    if (guess > ranNum) {
      cout << "Your guess is too high. Guess lower: ";
      cin >> guess;
    }

    else {
      cout << "Your guess is too low. Guess higher: ";
      cin >> guess;
    }
  }

  cout << "Congratulations! You guessed the number correctly." << endl;
  cout<<endl;
  cout<<"\n Do you want to play again (y/n)"<<endl;
  cin>>playagain;
 }while(playagain == 'y' || playagain == 'Y');
  return 0;
}

