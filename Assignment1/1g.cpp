#include<iostream>
using namespace std;

int MAX_INT(int arr[], int s)
{
   if (s <= 0)
      return -1;
   int maxIndex = 0;
   int maxValue = arr[0];
   for (int i = 1; i < s; i++)
   {
      if (arr[i] > maxValue)
      {
          maxValue = arr[i];
          maxIndex = i;
      }
   }
   return maxIndex;
}
int main()
{
    int arr[]={100,2,-3,280,5};
   int s=sizeof(arr)/sizeof(arr[0]);
   for (int i = 0; i < s; i++)
   {
      cout<<arr[i]<<" ";
   }
   cout<<endl;
   
    cout<<"MAX ELEMENT IS AT INDEX: (INDEXING STARTING FROM 0) \n"<<MAX_INT(arr,s)<<"("<<"i.e "<<MAX_INT(arr,s)+1<<" Position "<<")";

}