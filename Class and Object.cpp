#include<bits/stdc++.h>
using namespace std;

class Student
{
public: //Access modifier /specifier
    char name[100];
    int roll;
};
int main()
{
    Student fahim;
    strcpy(fahim.name,"fahim Hossain");
    fahim.roll=26;

    cout<<fahim.name<<" "<< fahim.roll<<endl;
}
