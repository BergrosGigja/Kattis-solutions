#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    string s_password, p_password;
    cin>>s_password;
    cin>>p_password;
    
    bool isAccepted = false;
    
    if (s_password == p_password)
    {
        isAccepted = true;
    }
    else if (p_password.size() == s_password.size()) 
    {
        isAccepted = true;
        for(int i = 0; i < p_password.size(); i++)
        {
            int p_ascii = (int)p_password[i];
            int s_ascii = (int)s_password[i];
            
            if (p_ascii < s_ascii)
            {
                p_ascii += 32;
            }
            else if (p_ascii > s_ascii)
            {
                p_ascii -= 32;
            }
            
            if (p_ascii != s_ascii)
            {
                isAccepted = false;
            }
        }
    }
    else if (p_password.size() + 1 == s_password.size())
    {
        string sub_pass = "";
        
        if (isdigit(s_password[0]))
        {
            sub_pass = s_password.substr(1, s_password.size());
        }
        else if (isdigit(s_password[p_password.size()]))
        {
            sub_pass = s_password.substr(0, s_password.size() - 1);
        }
        
        if (sub_pass == p_password)
        {
            isAccepted = true;
        }
    }
    
    string answer = isAccepted ? "Yes" : "No";
    cout<<answer;
    
    return 0;
}