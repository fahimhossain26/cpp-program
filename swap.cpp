#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={2,4,1,5,6},n=5;
    for(int i=0;i<n-1;i++)
    {
            for(int j=i+1;j<n;j++)
            {
                if(a[i]>a[j])
                {
                    /*int tmp=a[i];
                    a[i]=a[j];
                    a[j]=tmp;
                    */
                    swap(a[i],a[j]);
                }
            }
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;

}
