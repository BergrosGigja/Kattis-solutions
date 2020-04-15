#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    string name;
    cin >> name;
    stringstream ss(name);
    
    string result;
    
    while(ss.good())
    {
        string sub;
        getline(ss, sub, '-');
        result += sub[0];
    }
    
    cout << result;
}