#include <iostream>
#include <string.h>
#include <cstdlib>
#include <array>
using namespace std;

void stop(){
  char stp;
  fflush(stdin);
  scanf("%c",&stp);;
}

/*Let’s pretend we’re writing a card game.

6a) A deck of cards has 52 unique cards (13 card ranks of 4 suits). Create enumerations for the card ranks (2, 3, 4, 5, 6, 7, 8, 9, 10, Jack, Queen, King, Ace) and suits (clubs, diamonds, hearts, spades).

*/
enum CardSuit {
  CLUBS,
  DIAMONDS,
  HEARTS,
  SPADES,
  MAX_SUITS
};

enum CardRank {
  RANK_2,
  RANK_3,
  RANK_4,
  RANK_5,
  RANK_6,
  RANK_7,
  RANK_8,
  RANK_9,
  RANK_10,
  JACK,
  QUEEN,
  KING,
  ACE,
  MAX_RANK
};

/*
6b) Each card will be represented by a struct named Card that contains a rank and a suit. Create the struct.
*/

struct Card {
  CardSuit suit;
  CardRank rank;
};

/*
6c) Create a printCard() function that takes a const Card reference as a parameter and prints the card rank and value as a 2-letter code (e.g. the jack of spades would print as JS).
*/

void printCard(Card a){
  string card;

  switch (a.rank) {
    case RANK_2: card = "2"; break;
    case RANK_3: card = "3"; break;
    case RANK_4: card = "4"; break;
    case RANK_5: card = "5"; break;
    case RANK_6: card = "6"; break;
    case RANK_7: card = "7"; break;
    case RANK_8: card = "8"; break;
    case RANK_9: card = "9"; break;
    case RANK_10: card = "10"; break;
    case JACK: card = "J"; break;
    case QUEEN: card = "Q"; break;
    case KING: card = "K"; break;
    case ACE: card = "A"; break;
  }

  switch (a.suit) {
    case CLUBS: card = card + "C"; break;
    case DIAMONDS: card = card + "D"; break;
    case HEARTS: card = card + "H"; break;
    case SPADES: card = card + "S"; break;
  }

  cout << card;

}

//  6e) Write a function named printDeck() that takes the deck as a const reference parameter and prints the values in the deck. Use a for-each loop.

void printDeck(std::array<Card, 52> deck){
  for (auto card : deck) {
    printCard(card);
    cout << endl;
  }
}

// 6f) Write a swapCard function that takes two Cards and swaps their values.

void swapCard(Card &a, Card &b){
  Card aux = a;
  a = b;
  b = aux;
}

/*
6g) Write a function to shuffle the deck of cards called shuffleDeck(). To do this, use a for loop to step through each element of your array. Pick a random number between 1 and 52, and call swapCard with the current card and the card picked at random. Update your main function to shuffle the deck and print out the shuffled deck.

Hint: Review lesson 5.9 -- Random number generation for help with random numbers.
Hint: Don’t forget to call srand() at the top of your main function.
Hint: If you’re using Visual Studio, don’t forget to call rand() once before using rand.
*/
int randNum(int min, int max){
  int num;
  static const double fraction = 1.0 / ((static_cast<double>(RAND_MAX) + 1.0)+ 1.0);
  num = static_cast<int>(rand() * fraction * (max - min + 1) + min);
  return num;
}

void shuffleDeck(array<Card, 52> &deck){
  for(int i=0; i<52; i++){
    int num = randNum(0,51);
    swapCard(deck[i],deck[num]);
  }
}

/*
6h) Write a function named getCardValue() that returns the value of a Card (e.g. a 2 is worth 2, a ten, jack, queen, or king is worth 10. Assume an Ace is worth 11).
*/

int getCardValue(Card a){
  int cardValue;
  switch (a.rank) {
    case RANK_2: cardValue = 2; break;
    case RANK_3: cardValue = 3; break;
    case RANK_4: cardValue = 4; break;
    case RANK_5: cardValue = 5; break;
    case RANK_6: cardValue = 6; break;
    case RANK_7: cardValue = 7; break;
    case RANK_8: cardValue = 8; break;
    case RANK_9: cardValue = 9; break;
    case RANK_10: cardValue = 10; break;
    case JACK: cardValue = 10; break;
    case QUEEN: cardValue = 10; break;
    case KING: cardValue = 10; break;
    case ACE: cardValue = 11; break;
  }
  return cardValue;
}

/*
Create a function named playBlackjack() that returns true if the player wins, and false if they lose. This function should:
* Accept a shuffled deck of cards as a parameter.
* Initialize a pointer to the first Card named cardPtr. This will be used to deal out cards from the deck (see the hint below).
* Create two integers to hold the player’s and dealer’s total score so far.
* Implement Blackjack as defined below.

Hint: The easiest way to deal cards from the deck is to keep a pointer to the next card in the deck that will be dealt out. Whenever we need to deal a card, we get the value of the current card, and then advance the pointer to point at the next card. This can be done in one operation:
getCardValue(*cardPtr++);

This returns the current card’s value (which can then be added to the player or dealer’s total), and advances cardPtr to the next card.

Also write a main() function that plays a single game of Blackjack.

## RULES

Here are the rules for our version of Blackjack:
* The dealer gets one card to start (in real life, the dealer gets two, but one is face down so it doesn’t matter at this point).
* The player gets two cards to start.
* The player goes first.
* A player can repeatedly “hit” or “stand”.
* If the player “stands”, their turn is over, and their score is calculated based on the cards they have been dealt.
* If the player “hits”, they get another card and the value of that card is added to their total score.
* An ace normally counts as a 1 or an 11 (whichever is better for the total score). For simplicity, we’ll count it as an 11 here.
* If the player goes over a score of 21, they bust and lose immediately.
* The dealer goes after the player.
* The dealer repeatedly draws until they reach a score of 17 or more, at which point they stand.
* If the dealer goes over a score of 21, they bust and the player wins immediately.
* Otherwise, if the player has a higher score than the dealer, the player wins. Otherwise, the player loses (we’ll consider ties as dealer wins for simplicity).
*/
bool playBlackjack(array <Card,52> deck){
  Card* cardPtr = &deck[0];
  int playerScore = 0, dealerScore = 0, cardValue;

  cout << "The deck has been shuffled." << endl;
  stop();

  cout << "The dealer will get a card" << endl;
  stop();

  dealerScore = getCardValue(*cardPtr);

  cout << "The dealer got ";
  printCard(*cardPtr++);
  cout << ". So, the dealer has " << dealerScore << " points." << endl;
  stop();

  cout << "Now, you will get two cards" << endl;
  stop();
  for (size_t i = 0; i < 2; i++) {
    cardValue = getCardValue(*cardPtr);
    playerScore += cardValue;
    cout << "\tYou got ";
    printCard(*cardPtr++);
    cout << ". That means that you earned " << cardValue << " points.";
    stop();
  }
  cout << endl << "Your total score now is: " << playerScore << endl;
  stop();

  char hint;
  do{
    do{
      cout << "Do you want to hint or stand? (h/s): "; cin >> hint;
      if (hint != 'h' && hint != 's')
        cout << "Invalid option" << endl;
    }while (hint != 'h' && hint != 's');
    if (hint == 's')
      break;
    cardValue = getCardValue(*cardPtr);
    playerScore += cardValue;
    cout << "\tYou got ";
    printCard(*cardPtr++);
    cout << ". That means that you earned " << cardValue << " points." << endl;
    cout << "\tYour total score now is: " << playerScore << endl << endl;
    if (playerScore > 21){
      return false;
    } else if (playerScore == 21){
      return true;
    }
  }while (hint == 'h');

  stop();
  do{
    cardValue = getCardValue(*cardPtr);
    dealerScore += cardValue;
    cout << endl << "\tThe dealer got ";
    printCard(*cardPtr);
    cout << ". That means that he earned " << cardValue << " points." << endl;
    cout << "\tThe total score of the dealer  now is: " << dealerScore << endl;

    stop();
  }while(dealerScore<=17);

  if (dealerScore > 21) {
    return true;
  } else if (dealerScore >= playerScore){
    return false;
  }

  return true;
}

int main(int argc, char const *argv[]) {

  srand(static_cast<unsigned int>(time(0))); // To allow the function randNum work properly

/*6d) A deck of cards has 52 cards. Create an array (using std::array) to represent the deck of cards, and initialize it with one of each card.

Hint: Use static_cast if you need to convert an integer into an enumerated type.*/
  std::array <Card,52> deck;
  int card = 0;

  for (int j = 0; j < MAX_RANK; j++) {
    for (int k = 0; k < MAX_SUITS; k++) {
      deck[card].suit = static_cast<CardSuit>(k);
      deck[card].rank = static_cast<CardRank>(j);
      card++;
    }
  }

  shuffleDeck(deck);

  cout << "\tLet's play Blackjack. \n " << endl;

  bool winner = playBlackjack(deck);
  if (winner == true) {
    cout << "The player wins !! CONGRATULATIONS !!" << endl;
  } else {
    cout << "The player loses. The dealer gets it all." << endl;
  }

  return 0;
}
