#include<bits/stdc++.h>
#include<map>
using namespace std;

int main()
{
map<string,int>m;
map<string,int>::iterator it;

m["dipta"]=43;
m["arnab"]=42;
//m["nabil"]=41;
//another way to insert data.
m.insert(make_pair("nabil",41));




    return 0;
}