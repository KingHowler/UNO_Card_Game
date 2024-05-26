#include <iostream>

int main() {
  int colour = 4;
  int cardsRemaining[5] = {25,25,25,25,8};
    std::cout << cardsRemaining[colour] << '\n';
    cardsRemaining[colour] = cardsRemaining[colour] - 1;
    std::cout << cardsRemaining[colour] << '\n';

  while (true) {}
  return 0;
}
