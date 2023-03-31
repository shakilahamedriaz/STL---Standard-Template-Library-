//https://codeforces.com/problemset/problem/4/C
#include<bits/stdc++.h>
#include<map>
#include<string>
using namespace std;
int main(){
      map<string,int>m;

    int n;
    cin>>n;
    for(int i=0;i<n; i++){
        string s;
        cin>>s;
        
        m[s]++;

        if(previously_appeared==0){
            cout<<"OK"<<endl;
        }
        else{
            cout<<s<<m[s]<<endl;
        }
    }
    return 0;
}


