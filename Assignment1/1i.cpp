


#include<iostream>
using namespace std;


  void duplicate(int arr[], int n) {
      int mark[n];

       for (int i = 0; i < n; i++)
      {
          mark[i]=1;
      }

   

      for (int i = 0; i < n; i++) {

        if (mark[i] == 1) {

          for (int j = i + 1; j < n; j++) {

            if (arr[i] == arr[j]) {

              mark[j] = 0;
            }
          }
        }
      }
;

      for (int i = 0; i < n; i++) {
        if (mark[i] != 0) {
          cout << arr[i] << " ";
        }
      }
    }


int main()
{
    int arr[]={2,2,100,-3,280,5,2222,777,100,9999};
   int s=sizeof(arr)/sizeof(arr[0]);
   cout<<s;
   cout<<"ARRAY BEFORE Removing duplicates: \n";
   for(int i=0;i<s;i++)
   {
    cout<<arr[i]<<" ";
   }
  
   cout<<"\nARRAY AFTER Removing duplicates: \n";
   duplicate(arr,s);

}