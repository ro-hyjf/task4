#include<iostream>
#include<iomanip>
#include<cmath>
#include<string>
using namespace std;
#define ll long long
#define en endl
int main(){
  string x;
  ll count=0;
  cout<<" enter a sentence: ";
  getline(cin,x);
  for(int i=0;i<x.length();i++)
  {
    if(x[i]=='a'||x[i]=='e'||x[i]=='i'||x[i]=='o'||x[i]=='u')
    {
      count++;
    }
  }
  cout<<count<<en;
   return 0;
   
 }
   
