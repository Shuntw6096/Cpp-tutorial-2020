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
    cout << greeting << endl;

    int l = greeting.length();
    cout << "\"" << greeting << "\" is " << l << " characters long." << endl;

    auto space = greeting.find("dary");
    string beginnig = greeting.substr(space - 1);
    cout << beginnig << endl; 
    return 0;
}