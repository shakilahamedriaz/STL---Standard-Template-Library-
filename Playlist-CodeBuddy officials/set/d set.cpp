//how to search for a particular elemt in a set:
#include<iostream>
#include<set>
using namespace std;

int main()
{
    char a[1001];
    set<char> s;
    
    int n;
    cout<< "entet the number of elemets in array"<<endl;
    cin>>n;
    //[a,c,b,d,d,a]
     for(int i=0; i<n; i++)
     {
        cin>>a[i];
     }

     for(int i=0; i<n; i++)
     {
        s.insert(a[i]);
     }

     set<char>::iterator it;
    

    cout<< "The distinct characters are: "<<endl;
     for(it=s.begin(); it!=s.end(); it++)
        {
            cout<< *it<< " ";
        }
      cout<<endl;

    //How to search:
    cout<< "Enter the element you want to search: "<<endl;
    char key;
    cin>>key;
    it=s.find(key);
    if(it!=s.end())
    {

        cout<<key<< " is present at the location:"<<endl;
    }
    else
    {
        cout<<key<< "is not present"<<endl;
    }



    return 0;
}