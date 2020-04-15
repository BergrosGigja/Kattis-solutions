#include <iostream>
#include <algorithm>
#include <math.h>
#include <string>

using namespace std;

int main()
{
    string stones = "";
    cin>>stones;
    
    if (stones.length() % 2 != 0)
    {
        cout<<"0";
        return 0;
    }
    
    sort(stones.begin(), stones.end());
    
    char bEnd = stones[(stones.length()/2) - 1];
    char wStart = stones[stones.length()/2];
    
    if(bEnd == 'B' && wStart == 'W')
    {
         cout<<"1";
    }
    else
    {
        cout<<"0";
    }
}
