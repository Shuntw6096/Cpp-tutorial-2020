#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name;
    cout << "Who are you? ";
    cin >> name;
    string greeting = "Hello, " + name + ".";
    if (name == "dary")
    {
        greeting += " I know you.";
    }
    cout << greeting;
    return 0;
}