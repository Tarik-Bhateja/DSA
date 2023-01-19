#include<iostream>
using namespace std;

void compute_sum(int first,int last)
{
    if(first>last)
    {
        cout<<"INCORRECT VALUES FOR FIRST AND LAST\n";
    }
    else
    {
       int sum = 0;
    for (int i = first; i <= last; i++) 
    {
        sum += i;
    }
    cout<<"Sum is :"<<sum<<endl;
    }
}
int main()
{
int first,last;
cout<<"ENTER FIRST NUMBER\n";
cin>>first;
cout<<"ENTER LAST NUMBER\n";
cin>>last;
compute_sum(first,last);
}