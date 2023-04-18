#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    int row,col,i,j;
    cin>>row>>col;
    int ar[row][col];
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cin>>ar[i][j];
        }
    }
    int req_row;
    cin>>req_row;
    for(int i=0; i<col; i++)
    {
        cout<<ar[req_row][i]<<" ";
        return 0;
    }
}
   //*** input option*****
  /* input option
  row col -  4 3
    1 2 3
    3 4 5 row col input
    6 7 8
    3 4 7
    2 which number of row ,
    output:
    6 7 8 -- 2 no rows element */
