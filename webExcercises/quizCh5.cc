#include <iostream>
#include <cstdlib> // for std::and() and std::srand()
#include <ctime> // for std::time()

using namespace std;

int getRandomNumber(int max, int min){ // This is not quite random.The first number is alway 85, then 40, 79, 80 ... (in my linux machine, with g++ compiler)
  static const double fraction = 1.0 / (RAND_MAX + 1.0);  // static used for efficiency, so we only calculate this value once
    // evenly distribute the random number across our range
    return min + static_cast<int>((max - min + 1) * (std::rand() * fraction));
}

bool playGame(){
  char ch;
  do{
    std::cout << "Do you want yo play again? (y/n)" << '\n';
    cin >> ch;
  }while(ch != 'y' && ch != 'n');

  return (ch == 'y');
}

void game(int number, int guesses){
  int guess;

  for (int i = 1; i <= guesses; i++) {
    cout << "Guess #" << i << ": "; cin >> guess;
    if (guess > number) {
      cout << "Your guess is too high" << endl;
    } else if (guess < number) {
      cout << "Your guess is too low" <<  endl;
    } else {
      cout << "Correct! You Win!" << endl;
      break;
    }

    if (i == guesses)
      cout << "Sorry, you lost :( The number was " << number << endl;

  }

}


int main(int argc, char const *argv[]) {

  int guesses = 7;
  int max = 100; int min = 1;

  do{
    int number = getRandomNumber(max, min);
    cout << "Let's play a game. I'm thinking of a number. You have 7 opportunities to guess what it is. " << endl;

    game(number,guesses);

  }while(playGame());

  return 0;
}
