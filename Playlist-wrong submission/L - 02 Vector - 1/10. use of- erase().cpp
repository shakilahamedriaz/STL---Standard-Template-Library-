//erase() use for delete any data/element.

#include<bits/stdc++.h>
using namespace std;


int main(){


vector<int>v;


v.push_back(1);
v.push_back(2);
v.push_back(3);
v.push_back(4);
v.push_back(5);


cout<< "The elements of the vector : ";
for(int i=0; i<v.size(); i++){

    cout<<v[i]<< " ";
}


v.erase(v.begin()+1);  // first value(0)+ value = delete location index


cout<< endl<<"The elements of the vector : ";
for(int i=0; i<v.size(); i++){

    cout<<v[i]<< " ";
}


return 0;
}




