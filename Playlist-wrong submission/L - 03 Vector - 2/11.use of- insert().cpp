//insert() fucntion use for insert data any index of vector

#include<bits/stdc++.h>
using namespace std;

int main(){


vector<int>v;

v.push_back(10);
v.push_back(20);
v.push_back(30);
v.push_back(40);

for(int i=0; i<v.size(); i++){

    cout<<v[i]<< " ";


}


v.insert(v.begin()+2,1); // select point + new_value




cout<<endl<< "after insert new element : ";
for(int i=0; i<v.size(); i++){

    cout<<v[i]<< " ";


}

cout<<endl<< "for multiple element insert : ";

  v.insert(v.begin()+2,3,1); // point + 3 times(1 element)add

for(int i=0; i<v.size(); i++){

    cout<<v[i]<< " ";


}


return 0;
}
