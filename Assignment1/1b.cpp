#include<iostream>
using namespace std;

int check(int goal)
{
    int sum=0;
    int n=1;
    if(goal==0)
    {
        return 0;
    }

    while(sum<goal)
    {   
        sum+=++n; 
    }
    return n-1;
}

int main()
{
    int n;
    cout<<"ENTER GOAL: "<<endl;
    cin>>n;
    cout<<"The smallest positive integer n: "<<check(n);
}

