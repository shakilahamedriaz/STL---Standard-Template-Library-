
//vecor value can print as like Array
#include<bits/stdc++.h>
using namespace std;


int main(){


vector<int>v;  //no need to declare size


v.push_back(1);  //v[0]  index
v.push_back(2);  //v[1]
v.push_back(3);  //v[2]
v.push_back(4);  //v[3]
v.push_back(5);  //v[4]

cout<< "Print like array : "<<endl;

cout<<v[0]<< " ";
cout<<v[3]<<endl;

cout<< "by using function we can print .EX :"<<endl;

cout<<v.at(0)<< " ";
cout<<v.at(3)<<endl;


cout<< " let check whay use  [ v.at() ] function"<<endl;

cout<<v[5];  //we can see garbage value cz index 5 is not availabe.

//but at the same time if we use function with not availble index

cout<<v.at(5);
//we can see a msg


return 0;
}
