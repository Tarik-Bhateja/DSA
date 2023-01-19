// sum,max element,linear_search

#include<iostream>
using namespace std;

int main()
{
   int rows,columns;

   cout<<"ENTER ROWS FOR MATRIX!:"<<endl;
   cin>>rows;
   cout<<"ENTER COLUMNS FOR MATRIX:"<<endl;
   cin>>columns;

   int M1[rows][columns],M2[rows][columns];
   int M3[rows][columns];
   
   cout<<"Enter Values for Matrix 1: "<<endl;
   for(int i=0;i<rows;i++)
   {
       for(int j=0;j<columns;j++)
       {
         cin>>M1[i][j];
       }
   }


   cout<<"Enter Values for Matrix 2: "<<endl;
   for(int i=0;i<rows;i++)
   {
       for(int j=0;j<columns;j++)
       {
         cin>>M2[i][j];
       }
   }

   cout<<"ADDITION OF MATRIX: ";
      
    for(int i=0;i<rows;i++)
   {
       for(int j=0;j<columns;j++)
       {
         M3[i][j]=M1[i][j]+M2[i][j];
       }
   }

   for(int i=0;i<rows;i++)
   {
       for(int j=0;j<columns;j++)
       {   
           if(j%columns==0)
           {
               cout<<endl;
           }
           cout<<M3[i][j]<<" ";
       }
   }

   cout<<endl<<"SUBTRACTION OF MATRIX: "<<endl;
for(int i=0;i<rows;i++)
   {
       for(int j=0;j<columns;j++)
       {
         M3[i][j]=M1[i][j]-M2[i][j];
       }
   }

   for(int i=0;i<rows;i++)
   {
       for(int j=0;j<columns;j++)
       {   
           if(j%columns==0)
           {
               cout<<endl;
           }
           cout<<M3[i][j]<<" ";
       }
   }
   
}