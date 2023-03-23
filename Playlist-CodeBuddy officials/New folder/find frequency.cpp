#include<bits/stdc++.h>
using namespace std;

int main(){

//find the frequency of an array:
//the given array is:
int arr[]={1,2,1,1,3,4};

int len= sizeof(arr)/sizeof(int);
for(int i=0;i<=len; i++){
    int num=arr[i];
    int cnt=1;
    for(int j=i+1; j<=len; j++){
        if(num==arr[j]){
            cnt++;
        }
    }
    cout<<"frequency of "<<num<< " is : "<<cnt<<endl;
}

    return 0;
}
