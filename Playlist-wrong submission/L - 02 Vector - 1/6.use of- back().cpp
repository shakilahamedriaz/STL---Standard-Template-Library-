//clear() use for clear the whole element in the vector then size will be zero
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

cout<<endl<<"Last element is (by using back() function ) : "<<endl;

cout<<v.back()<<endl;





return 0;
}

