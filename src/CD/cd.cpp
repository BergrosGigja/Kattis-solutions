#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int jack, jill;
    cin>>jack>>jill;
    
    
    while (jack != 0 || jill != 0)
    {
        int size = jack + jill;
        int cds[size] = {};
        
        int input;
        
        for (int i = 0; i < size; i++)
        {
            cin>>input;
            cds[i] = input;
        }
        
        sort(cds, cds + size);
        
        int amount = 0;
        for (int i = 1; i < size; i++)
        {
            if (cds[i - 1] == cds[i])
            {
                amount++;
            }
        }
        cout<<amount<<endl;
        
        cin>>jack>>jill;
    }
    return 0;
}