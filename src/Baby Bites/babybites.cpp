#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str = "";
    int amnt;
    cin>>amnt;
    
    string number;
    for(int i = 1; i <= amnt; i++)
    {
        cin>>number;
        if(atoi(number.c_str()) && atoi(number.c_str()) != i || number == "0")
        {
            str = "something is fishy";
        }
    }
    
    if(str.length() <= 0)
    {
        str = "makes sense";
    }
    
    cout<<str;
}