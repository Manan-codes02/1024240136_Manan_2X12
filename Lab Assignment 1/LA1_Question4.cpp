#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"=== MENU ==="<<endl;
    cout<<"1. Reverse the elements of an array "<<endl;
    cout<<"2. Find the matrix multiplication "<<endl;
    cout<<"3. Find the Transpose of a Matrix "<<endl;
    cout<<"Enter Your Choice"<<endl;
    cin>>n;
    switch (n)
    {
    case 1:{
        int num,a[15];
        cout<<"Enter number of elements in array: ";
        cin>>num;
        for(int j=0;j<num;j++)
        {
            cin>>a[j];
        }
        cout<<"Reverse of array is: ";
        for(int j=num-1;j>=0;j--)
        {
            cout<<a[j]<<"   ";
        }
    }
        break;  
    case 2:{
        int r1,c1,r2,c2,a[10][10],b[10][10],m[10][10];
        cout<<"Enter rows for 1st matrix: "<<endl;
        cin>>r1;
        cout<<"Enter columns for 1st matrix: "<<endl;
        cin>>c1;
        cout<<"Enter values to the 1st matrix"<<endl;
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c1;j++)
            {
                cin>>a[i][j];
            }
        }
        cout<<"Enter rows for 2nd matrix: "<<endl;
        cin>>r2;
        cout<<"Enter columns for 2nd matrix: "<<endl;
        cin>>c2;
        cout<<"Enter values to the 2nd matrix"<<endl;
        for(int i=0;i<r2;i++)
        {
            for(int j=0;j<c2;j++)
            {
                cin>>a[i][j];
            }
        }
        if (r2 == c1)
        {
            for (int i = 0; i < r1; i++)
            {
                for (int j = 0; j < c2; j++)
                {
                    for (int k = 0; k < c1; k++)
                    {
                        m[i][j] += a[i][k] * b[k][j];
                    }
                }
            }
        }
        else
        {
            cout<<"Multiplication not possible!"<<endl;
            break;
        }
        cout<<"Multiplication of matrix is: ";
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c2;j++)
            {
                cout<<m[i][j]<<"    ";
            }
            cout<<endl;
        }
        break;
        }
    case 3:{
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

        cout<<"Transpose of matrix is:"<<endl;
        for(int i=0;i<c;i++)
        {
            for(int j=0;j<r;j++)
            {
                cout<<a[j][i]<<"    ";
            }
            cout<<endl;
        }
        break;
    }
    default:
        cout<<"Enter a valid choice!";
        break;
    }
}