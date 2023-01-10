#include<bits/stdc++.h>
using namespace std;

int main(){

vector<int>v1;

v1.push_back(10480);
v1.push_back(140);
v1.push_back(10);
v1.push_back(10);
v1.push_back(1099);


cout<< "Befor reverse these vector : "<<endl;
for(int i=0; i<v1.size(); i++){

    cout<<v1[i]<< " "<<endl;
}

reverse(v1.begin(), v1.end());

cout<< "After Reverse these vector : "<<endl;
for(int i=0; i<v1.size(); i++){

    cout<<v1[i]<< " "<<endl;
}


return 0;
}

