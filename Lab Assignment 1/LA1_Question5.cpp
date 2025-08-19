#include<iostream>
using namespace std;
int main()
{
    int r,c,a[10][10];
    cout<<"Enter number of rows: "<<endl;
    cin>>r;
    cout<<"Enter number of columns: "<<endl;
    cin>>c;
    cout<<"Enter values to the matrix"<<endl;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>a[i][j];
        }
    }

    cout<<"Entered matrix is:"<<endl;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<a[i][j];
            cout<<" ";
        }
        cout<<endl;
    }

    for(int i=0;i<r;i++)
    {
        int sum=0;
        for(int j=0;j<c;j++)
        {
            sum = sum+a[i][j];
        }
        cout<<"Sum of "<<i<<" row is: "<<sum;
        cout<<endl;
    }

    for(int j=0;j<c;j++)
    {
        int sum=0;
        for(int i=0;i<r;i++)
        {
            sum = sum+a[i][j];
        }
        cout<<"Sum of "<<j<<" column is: "<<sum;
        cout<<endl;
    }
}