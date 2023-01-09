//pop_back() use for Delete the last element of the vector


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


v.pop_back();  //for delete last element.

cout<< "After delete last elem. size : ";
cout<<v.size()<<endl;





cout<< "After dlt last element the vector : ";
for(int i=0; i<v.size(); i++){


    cout<<v[i]<< " ";
}

cout<<endl;

return 0;
}



