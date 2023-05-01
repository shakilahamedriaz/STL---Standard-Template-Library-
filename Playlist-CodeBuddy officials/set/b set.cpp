// print distinct characters
//from a,b,c,a,d,d
//set<char>s;
//s.insert('a');
#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<char>s;
    s.insert('a');
    s.insert('b');
    s.insert('c');
    s.insert('d');
    s.insert('a');
    s.insert('d');
    s.insert('d');

    for(auto i:s)
    {
        cout<<i<< " ";

    }
    return 0;
}