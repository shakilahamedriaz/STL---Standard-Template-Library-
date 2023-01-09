//empty() use for = is the vector is empty??

//clear() use for clear the whole element in the vector then size will be zero
#include<bits/stdc++.h>
using namespace std;


int main(){


vector<int>v;

int n;
cout<<  "size of vector : ";
cin>>n;

for(int i=0; i<n; i++){

    v.push_back(i);    //i= 1,2,3,4,5 (loop)
}


cout<< "The elements of the vector : ";
for(int i=0; i<v.size(); i++){


    cout<<v[i]<< " ";
}

cout<<endl;

//use of empty(_) fuction here :


v.clear();

if(v.empty()){

    cout<< "Empty vector"<<endl;
}
else{

    cout<< "Not empty"<<endl;
}





return 0;
}


