#include<bits/stdc++.h>
using namespace std;

int main(){

    // find the frequency of an array:
    // the given array is:
    int arr[] = {1,2,1,1,3,4};
    int len = sizeof(arr) / sizeof(int);

    // create an array to store the frequency of each element
    int freq[len];
    memset(freq, 0, sizeof(freq)); // initialize all frequencies to 0

    // count the frequency of each element
    for(int i=0; i<len; i++){
        freq[arr[i]]++;
    }

    // print the frequency of each element
    for(int i=0; i<len; i++){
        if(freq[i] != 0){
            cout<< "Frequency of "<<i<< " is: "<<freq[i]<<endl;
        }
    }

    return 0;
}
