#include<bits/stdc++.h>
using namespace std;

int main()
{

list<int>li;

li.push_back(1);
li.push_back(2);
li.push_back(3);
li.push_back(4);

//list er all elements clear hoye jbe
li.clear(); // for clear all list.

//for print element
for(auto it: li){

    cout<<it<< " ";
}

cout<<li.size()<<endl;


    return 0;
}