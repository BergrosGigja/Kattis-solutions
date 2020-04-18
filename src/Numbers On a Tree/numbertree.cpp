#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    int height;
    string path;
    cin >> height;
    getline(cin, path);
    
    int root = pow(2, height + 1) - 1;
    int start = root;
    int result = start;
    
    int count = 0;
    int level = 0;
    for (char x : path)
    {
        if (x == 'R' || x == 'L')
        {
            start = start - pow(2, level);
            result = start - (count * 2);
            
            if (x == 'R')
            {
                result -= 1;
            }
            
            count = start - result;
            level++;
        }
    }
    cout<<result;
}