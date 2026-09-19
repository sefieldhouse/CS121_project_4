#include <random>
#include <iostream>

const int trackLength = 15;
const int numberOfHorses = 5;


void advance(int horseNum, int* horses);   // int horseNum refers to horses 0 thru 4
void printLane(int horseNum, int* horses); //  int* horses refers to the positions i.e., {3,2,0,5,7}
bool isWinner(int horseNum, int* horses);

std::random_device rd;
std::uniform_int_distribution<int> dist(0, 1);

int main() {
  int horses[] = {0, 0, 0, 0, 0};
  bool keepGoing = true;
  int winner = -1;
  while (keepGoing) { 
    for (int horseNum = 0; (horseNum < numberOfHorses); horseNum++) {
      advance(horseNum, horses);
      printLane(horseNum, horses);
      bool result = isWinner(horseNum, horses);
      if (result == true) {
        (keepGoing = false);
	winner = horseNum;
      } // end if
    } // end for
    if (winner != -1) {
      std::cout << "Hourse number " << winner << " won the game!\n";
    } // end if
    else {
      std::cout << "Press ENTER for another turn.";
      std::cin.get();
    } // end else
  } // end while
  return 0;
} // end main

void printLane(int horseNum, int* horses) {
  for (int position = 0; position < trackLength; position++) { 
    if (horses[horseNum] == position) { // horseNum is the horse ID, horses is the horse position  
      std::cout << horseNum;
    } // end if
    else {
      std::cout << ".";
    } // end else 
  } // end for
  std::cout << std::endl;
} // end printLane
      
bool isWinner(int horseNum, int* horses) {
  int result = false;
  for (int position = 0; (position < trackLength); position++) {
    if (horses[horseNum] == trackLength) {
      result = true;
    } // end if
  } // end for
  return result;
} // end bool

void advance(int horseNum, int* horses) { 
  int coin = dist(rd);
  horses[horseNum] = horses[horseNum] + coin;
} // end advance
