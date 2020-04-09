#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v1;
    for (int i = 0; i < 10; i++)
        v1.push_back(i);
    v1[5] = -1;
    v1[6] = -99;
    for (auto item: v1)
        cout << item << " ";
    cout << endl;
    cout << "vector v1 has " << v1.size() << " elements." << endl;
    
    vector<string> vs;
    cout << "Enter three strings: " << endl;
    for (int i = 0; i < 3; i++)
    {
        string s;
        cin >> s;
        vs.push_back(s);
    }

    for(unsigned int i = 0; i < vs.size(); i++)
        cout << vs[i] << " ";
    cout << endl;

    vector<double> vd {0,100,2,3,4,5,6,7,8,999};
    for (auto i = vd.begin(); i != vd.end(); i++)
        cout << *i << " ";
    cout << endl;

    sort(vs.begin(), vs.end());
    for (auto item: vs)
        cout << item << " ";
    cout << endl;
    int threes = count(v1.begin(), v1.end(), 3);
    cout << "vector of ints has " << threes << " elements with value 3." << endl;
    int tees = count(vs[0].begin(), vs[0].end(), 't');
    cout << "vector of strings has " << tees << " letter t's.";
    return 0;
}