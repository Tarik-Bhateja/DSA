// sum,max element,linear_search

#include<iostream>
using namespace std;

int sum(int arr[],int n)
{
int sum=0;
for(int i=0;i<n;i++)
{
    sum+=arr[i];
}

return sum;
}

int max_element(int arr[],int n)
{
int max=arr[0];
for(int i=1;i<n;i++)
{
    if(arr[i]>max)
    {
        max=arr[i];
    }
}

return max;
}

int linear_search(int arr[],int n,int value)
{
for(int i=0;i<n;i++)
{
    if(arr[i]==value)
    {
        return i+1;
    }
}
return -1;
}
int main()
{
    int value;
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"SUM IS : "<<sum(arr,n)<<endl;
    cout<<"MAXIMUM IS : "<<max_element(arr,n)<<endl;
    cout<<"ENTER VALUE TO FIND IN ARRAY: "<<endl;
    cin>>value;
    int check=linear_search(arr,n,value);
    if(check<0)
    {
        cout<<"VALUE NOT FOUND IN ARRAY"<<endl; 
    }
    else
     cout<<"VALUE ENTERED EXISTS AT : "<<check<<" POSITION"<<endl;
 }