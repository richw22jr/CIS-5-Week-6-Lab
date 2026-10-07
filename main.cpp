#include <iostream>

using std::cout;
using std::endl;
// Lab 6 — Richard Webster
// CIS 5 Week 06 · Even and odd

int sumevens = 0;
int odds = 1;
int sumodds =0;

int main() {

  for (int evens = 0; evens <= 100; evens = evens + 2) {
    sumevens = sumevens + evens;
  }
  cout << "The sum of every even number from 0 t0 100 is " << sumevens << endl << endl;

  while (odds < 100) {
    sumodds = sumodds + odds;
    odds = odds + 2;
  }
  cout << "The sum of every odd number from 0 to 100 is "<< sumodds << endl;
  
   return 0;
}
