#include<bits/stdc++.h>
using namespace std;

int main(){


vector<int>v1;

v1.push_back(10);
v1.push_back(20);
v1.push_back(30);



vector<int>v2;
v2.push_back(50);
v2.push_back(60);
v2.push_back(70);


cout<< "Before swaping "<<endl<<"v1: ";
for(int i=0; i<v1.size(); i++){


    cout<<v1[i]<< " ";
}
cout<<endl<<  "v2 : ";

for(int i=0; i<v2.size(); i++){

    cout<<v2[i]<< " ";
}


swap(v1,v2);


cout<<endl;

cout<< "After swaping "<<endl<<"v1: ";
for(int i=0; i<v1.size(); i++){


    cout<<v1[i]<< " ";
}
cout<<endl<<  "v2 : ";

for(int i=0; i<v2.size(); i++){

    cout<<v2[i]<< " ";
}



return 0;
}
