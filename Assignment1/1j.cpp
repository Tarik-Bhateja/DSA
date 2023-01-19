#include<iostream>
using namespace std;
int main()
{
    int arr1[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int arr2[]={21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40};

    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);

    int newsize=n1+n2;
    int newarr[newsize];
    for(int i=0;i<newsize;i++)
    {
        if(i<n1)
        {
        newarr[i]=arr1[i];
        }
        else{
        newarr[i]=arr2[i-n1];
        }
    }

    for(int i=0;i<newsize;i++)
    {
        cout<<newarr[i]<<" ";
    }
}