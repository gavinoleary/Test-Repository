#include <iostream>
#include <cmath>
using namepace std;

int main()
{
  int userInput;
  bool prime;
  
  cout << "Enter a positive integer: " << endl;
  cin >> userInput;
  
  if (userInput <= 1) 
    cout << "No primes here! << endl;
  
  for (int i = 2; i <= userInput; i++)
  {
    prime = true;
    for (int n = 2; n <= sqrt(i); n++)
    {
      if (i % n == 0)
        prime = false;
    }
    if (prime)
      cout << i << " is prime!" << endl;
  }
  return 0;

}
    
