#include<iostream>
using namespace std;

void check(int n)
{
    string numbers[]={"One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    if(n<1 || n>9)
    {
        cout<<"Please Specify between 1-9 only";
    }
    else
    {
        cout<<numbers[n-1];
    }
}
int main()
{
   
   int n;
   cout<<"ENTER DIGIT FROM 1-9 TO REPRESENT IN WORDS\n";
   cin>>n;
   check(n);

}