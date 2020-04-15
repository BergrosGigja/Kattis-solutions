#include <iostream>
#include <string>
using namespace std;

int main ()
{
    int x, y, n;
    cin >> x;
    cin >> y;
    cin >> n;
    
    for(int i = 1; i <= n; i++) 
    {
        bool fizz = i % x == 0;
        bool buzz = i % y == 0;
        
        if(fizz)
        {
            cout << "Fizz";
        }
        
        if(buzz)
        {
            cout << "Buzz";
        }
        
        if(!fizz && !buzz)
        {
            cout << i;
        }
        cout << "\n";
    }
}