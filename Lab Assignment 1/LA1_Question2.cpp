#include<iostream>
using namespace std;
int main()
{
    int num,arr[20];
    cout<<"Enter number of elements in array: ";
    cin>>num;
    cout<<"Enter elements in array: ";
    for(int i=0;i<num;i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < num; i++) 
    {
        for (int j = i + 1; j < num; j++) 
        {
            if (arr[i] == arr[j]) 
            {
                for (int k = j; k < num - 1; k++) 
                {
                    arr[k] = arr[k + 1]; 
                }
                num--;
                j--;
            }
        }
    }

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < num; i++) 
    {
        cout << arr[i] << " ";
    }
}