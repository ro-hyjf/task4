#include<iostream>
#include<iomanip>
#include<cmath>
#include<string>
using namespace std;
#define ll long long
#define en endl
int main(){
  ll arr[4];
  cout<<"enter 4 numbers: ";
  for(int i=0;i<4;i++)
  {
    cin>>arr[i];
  }
  ll max=arr[0];
  for(int i=1;i<4;i++)
  {
    if(arr[i]>max)
    {
      max=arr[i];
    }
  }
  cout<<max<<en;
   return 0;
   
 }
   
