#include <iostream>
#include <string>
using namespace std;

int main ()
{
  int amount;
  cin >> amount;
  
  int var;
  int count = 0;
  for(int i = 0; i < amount; i++)
  {
      cin >> var;
      if(var < 0)
      {
        count++;
      }
  }
  cout << count;
}