#include <iostream>
#include <string>

using namespace std;

int main()
{
    string w1, w2;
    while(true)
    {
        cout << "Enter a word: ";
        cin >> w1;
        cout << "Enter another word: ";
        cin >> w2;
        if (w1 == "stop" || w2 == "stop")
            break;
        if (w1.length() > w2.length())
            cout << "First word is longer than second word." << endl;
        else if(w1.length() < w2.length())
            cout << "First word is shorter than second word." << endl;
        else
            cout << "Two words's length are eqal." << endl;
        
    }
    return 0;
}