/*Iterators are used to point
 at the memory addresses of STL
 containers. They are primarily
 used in sequences of numbers,
characters etc.

//specefic point niye ota niye play kora jay

*/

#include<bits/stdc++.h>
using namespace std;

int main(){

vector<int>v;

v.push_back(1);
v.push_back(2);
v.push_back(3);
v.push_back(4);

//   the process of declear iterartion:

//vector<int>::iterator iterator_name;

vector<int>::iterator it;

it=v.begin()+2;
cout<<*it<<endl;


cout<< "USe iteration print : "<<endl;

for(int i=v.begin(); it!=v.end(); it++){


    cout<<it<<endl;

}

return 0;
}
