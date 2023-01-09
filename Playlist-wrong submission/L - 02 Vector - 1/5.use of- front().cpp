//front() use for find out the first element of the vector.
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

cout<<endl<< "first element is : (by using front() function : "<<endl;

cout<<v.front()<<endl;





return 0;
}
