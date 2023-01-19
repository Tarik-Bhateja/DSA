#include <iostream>
using namespace std;
 
int main()
{

    int r1,c1;
    cout<<"ENTER ROWS FOR MATRIX1: "<<endl;
    cin>>r1;
    cout<<"ENTER COLUMNS FOR MATRIX1: "<<endl;
    cin>>c1;
    
    //order of matrix B
    int r2,c2;
    cout<<"ENTER ROWS FOR MATRIX2: "<<endl;
    cin>>r2;
    cout<<"ENTER COLUMNS FOR MATRIX2: "<<endl;
    cin>>c2;
    
    int m1[r1][c1],m2[r2][c2];

    cout<<"Enter Values for Matrix 1: "<<endl;
   for(int i=0;i<r1;i++)
   {
       for(int j=0;j<c1;j++)
       {
         cin>>m1[i][j];
       }
   }

    cout<<"Enter Values for Matrix 2: "<<endl;
   for(int i=0;i<r2;i++)
   {
       for(int j=0;j<c2;j++)
       {
         cin>>m2[i][j];
       }
   }

    if(c1 != r2){
        cout << "Matrix  multiplaction Not possible for the given matrices";
    } else {
        int m3[r1][c2];
     
        for(int i=0; i<r1; i++){
            for(int j=0; j<c2; j++){
                int sum =0;
                for(int k=0; k<r2; k++){
                    sum += (m1[i][k] * m2[k][j]);
                }
                m3[i][j] = sum;
            }
        }
        

        cout << "After Multplication Matrix: \n";

         for(int i=0;i<r1;i++)
   {
       for(int j=0;j<c2;j++)
       {   
           if(j%c2==0)
           {
               cout<<endl;
           }
           cout<<m3[i][j]<<" ";
       }
   }
      
    }
    
    return 0;
}