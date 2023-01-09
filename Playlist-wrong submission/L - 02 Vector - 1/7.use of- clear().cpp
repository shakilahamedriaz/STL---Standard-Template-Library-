//back() use for find out the Last element of the vector.
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


cout<<endl<< "size: "<<v.size()<<endl;


//after use clear function.

v.clear();
cout<< "after using clear function : ";
cout<<v.size()<<endl;


return 0;
}


