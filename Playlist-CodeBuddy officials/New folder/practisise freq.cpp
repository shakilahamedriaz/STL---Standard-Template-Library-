#include<bits/stdc++.h>
using namespace std;

int main()
{
    //the given array:
    int arr[] = {1,2,1,1,3,4};
    int len = sizeof(arr) / sizeof(int);

    //create a new array to store the each freq.
    int freq[len];
    memset(freq,0,sizeof(freq)); //initialize all frequency is zero.
  //The memset() function in C++ copies a single character for a specified number of time to an object.

    //count the frequency of each elements;

    for(int i=0; i<len; i++){

        freq[arr[i]]++;

    }

    //print frequency
    for(int i=0; i<len; i++){

        if(freq[i] !=0){

            cout<< "Frequency of "<<i<< " is: "<<freq[i]<<endl;
        }
    }



    return 0;

}
