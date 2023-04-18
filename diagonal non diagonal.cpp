// C Program to Find Sum of Diagonal, Non Diagonal Elements of Matrix
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,row,col ,sum1 = 0,sum2 = 0;
    cin>>row>>col;
     int A[row][col];
     //printf("Matrix A :--> \n");
     for(int i=0;i<row;i++)
     {
          for( j = 0; j < col; j++)
          {
               cin>>A[i][j];
          }
         // cout<<" ";
     }
     for (i = 0; i < row; i++)
     {
          for(j = 0; j < col; j++)
          {
               if(i == j)
               {
                    sum1 += A[i][i];
               }
               else
               {
                    sum2 += A[i][j];
               }
          }
     }
     cout<<"Sum of Diagonal Elements :-->"<< sum1<<" ";
     cout<<" " <<endl;
    cout<<"Sum of Non Diagonal Elements :--> " <<sum2<<" ";
     return 0;
}
