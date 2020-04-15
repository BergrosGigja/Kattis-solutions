#include <iostream>

using namespace std;

int main()
{
    int amount, prevhrs, hrs, newhrs, miles, total;
    string totalStr;
    cin >> amount;
    
    while(amount != -1)
    {
        total = 0;
        prevhrs = 0;
        
        for(int i = 0; i < amount; i++)
        {
            cin >> miles >> hrs;
            
            if(prevhrs > 0)
            {
                newhrs = hrs - prevhrs;
            }
            else 
            {
                newhrs = hrs;
            }
            prevhrs = hrs;
            
            total += miles * newhrs;
        }
        
        totalStr += std::to_string(total) + " miles\n";
        cin >> amount;
    }
    cout << totalStr;
}