#include<bits/stdc++.h>
using namespace std;


int main(){


vector<int>v;  //no need to declare size


v.push_back(1);  //v[0]  index
v.push_back(2);
v.push_back(3);
v.push_back(4);
v.push_back(5);

cout<< "size : ";
cout<<v.size()<<endl;

//v.size like normal array size

cout<< "The elements of the vector : ";
for(int i=0; i<v.size(); i++){


    cout<<v[i]<< " ";
}



return 0;
}
