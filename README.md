# CS121_project_4
## Procedural Horse Race Game

make constant numHorses
make a constant int trackLength
#include <random>

void advance(int horseNum, int* horses);
void printLane(int horseNum, int* horses);
bool isWinner(int horseNum, int* horses);

std::random_device rd;
std::uniform_int_distribution<int> dist(0, 1);

coin = dist(rd);
heads = 1; // heads means advance 1 space
tails = 0; // tails mean don’t advance for this turn
int keepGoing = TRUE

int main() {
  create an int array horseNum that contains values 0-4 inclusive
  while keepGoing == TRUE
    for each horse in the # of horses in the way;
      if (coin == heads);
        advance(int horseNum, int* horses)// int representing 1 horse, array containing all horse pos.
        update horseNum with this horse that has advanced position
      if (coin == tails);
        update horseNum with this horse that hasn’t moved
    printLane(int horseNum, int* horses);
  check isWinner(int horseNum, int* horses); // check if any horse has won
  
void printLane(int horseNum, int* horses);
    loop from zero to track length
    if the current loop index is equal to the horse’s value
      print the horse’s id
    else
      print a .
    
void advance(int horseNum, int* horses);
  given a horse number (int horseNum) and the array of horses (int* horses)
  run coin // (get random # 0 or 1);
  if coin == heads
    add coin to the horse’s position in array (array position +1)
  if coin == tails
    add coin to the horse’s position in the array (array position +0)

bool isWinner(int horseNum, int* horses);
  result = false
  given  a horse number and the array of horses
  if position of int horseNum equals length of track
    print “Horse number “ + int horseNUM + “ won!”
    set int KeepGoing to be false
    result = true
    
