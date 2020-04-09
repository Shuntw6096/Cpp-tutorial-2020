#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int ans = rand() % 100;
    int j = 0;
    int i;
    for(i = 0; i <= 5; i++)
    {
        cout << "Enter an integer: ";
        cin >> j;
        if (j > ans)
            cout << "Your number is greater than mine.\n";
        else if (j < ans)
            cout << "Your number is smaller than mine.\n";
        else if (j == ans)
        {
            cout << "Your number is correct.\n";
            break;
        }
    } 

    if (i == 6)
    {    
        cout << "Your final number is " << j << '.' << endl;
        cout << "My number is " << ans << '.';
    }
    return 0;
}