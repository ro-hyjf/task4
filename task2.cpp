#include<iostream>
#include<iomanip>
#include<cmath>
#include<string>
using namespace std;
#define ll long long
#define en endl
int main(){
  ll arr[2][2];
  cout<<"enter 4 numbers: ";
  for(int i=0;i<2;i++)
  {
    for(int j=0;j<2;j++)
    {
      cin>>arr[i][j];
    }
  }
  ll sum=0;
  for(int i=0;i<2;i++)
  {
   for(int j=0;j<2;j++)
   {
    sum+=arr[i][j];
   }
  }
  cout<<sum<<en;
   return 0;
   
 }
   
