#include <iostream>
#include <string>
using namespace std;

int main ()
{
    int chessPieces[] = {1,1,2,2,2,8};
    for(int i = 0; i < 6; i++) 
    {
        int piece;
        cin >> piece;
        chessPieces[i] -= piece;
    }
    
    for(int i = 0; i < 5; i++)
    {
        cout << chessPieces[i] << " ";
    }
    cout << chessPieces[5];
}