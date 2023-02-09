#include<bits/stdc++.h>
using namespace std;

int main()
{

list<int>li;

li.push_back(1);
li.push_back(2);
li.push_back(3);
li.push_back(4);




li.clear(); 
for(auto it: li){
    cout<<it<< " ";
}

if(li.empty()){

    cout<< "list is empty !"<<endl;
}
else{

    cout<< "list is not empty !"<<endl;
}
//empty ashbe cz clear() use kore list kahali kore

    return 0;
}