#include<iostream>
#include<map>
using namespace std;

int main(){

       int a[1004];
       map<int,int>m;

       int n;
       cout<<"Enter array elements size: ";
       cin>>n;

       cout<< "Enter the elements: ";
       //[1,3,4,3,4,3]
       for(int i=0; i<n; i++){
          cin>>a[i];
       }

       //1-1
       //3-3
       //4-2
       for(int i=0; i<n; i++)
       {
          m[a[i]]++;
       }

       //for print map.(frequency: )
       map<int,int>::iterator it;
       for(it=m.begin(); it != m.end(); it++){

           cout<<it->first<< " "<<it->second<<endl;
       }


     //How to search a single number/single numb frequency.
     int x;
     cout<< "Enter a num to find that frequency: ";
     cin>>x;

     it=m.find(x);

     if(it != m.end()){
        cout<< it->first<< " "<<it->second<<endl;
     }


    return 0;
}
