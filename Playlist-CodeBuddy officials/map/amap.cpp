#include<bits/stdc++.h>
#include<map>
#include<string>
using namespace std;

int main()
{
   map<string, int>marksmap;
   marksmap["Shakil"]=98;
   marksmap["fariha"]=55;
   marksmap["khairun"]=90;
   marksmap["rekha"]=100;
   marksmap["rafiqul"]=95;

   map<string, int>:: iterator it;

   for(it=marksmap.begin(); it !=marksmap.end(); it++)
   {
    cout<< (*it).first<< " "<<(*it).second<<endl;
   }
   
   cout<< "The size is: "<<marksmap.size();


    return 0;
}