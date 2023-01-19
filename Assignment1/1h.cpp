#include<iostream>
using namespace std;

void shift(int arr[], int s)
{
   if (s <= 0)
   {
       cout<<"ARRAY CANNOT BE EMPTY";
   }

  int temp=arr[s-1]; 
  for(int i=s-2;i>=0;i--)
  {
     
    arr[i+1]=arr[i];
  }

  arr[0]=temp;
}

int main()
{
    int arr[]={100,2,-3,280,5,2222,777,9999};
   int s=sizeof(arr)/sizeof(arr[0]);
   cout<<"ARRAY BEFORE SHIFT FUNCTION: \n";
   for(int i=0;i<s;i++)
   {
    cout<<arr[i]<<" ";
   }
   shift(arr,s);
   cout<<"\nARRAY AFTER SHIFT FUNCTION: \n";
   for(int i=0;i<s;i++)
   {
    cout<<arr[i]<<" ";
   }

}