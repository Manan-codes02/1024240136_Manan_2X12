#include<iostream>
using namespace std;

int main()
{
    int choice,num,ele,place,value,pos,a[15];
    cout << "Enter number of elements in array: ";
    cin >> num;
    cout << "Enter elements in array: ";
    for(int i=0;i<num;i++)
    {
        cin >> a[i];
    }

    while (true)
    {
        cout << "\n=== MENU ===" << endl;
        cout << "1. Display" << endl;
        cout << "2. Insert" << endl;
        cout << "3. Delete" << endl;
        cout << "4. Linear Search" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Displaying array: ";
            for(int i=0;i<num;i++)
            {
                cout << a[i] << "\t";
            }
            cout << endl;
            break;

        case 2:
            cout << "Enter element to insert and its position: ";
            cin >> ele >> pos;
            if (pos < 1 || pos > num+1) {
                cout << "Invalid position!" << endl;
            } else {
                for (int i = num; i >= pos; i--) {
                    a[i] = a[i-1];
                }
                a[pos-1] = ele;
                num++;
            }
            break;

        case 3:
            cout << "Enter element to delete: ";
            cin >> ele;
            place = -1;
            for(int i=0;i<num;i++)
            {
                if(a[i] == ele)
                {
                    place = i;
                    break;
                }
            }
            if (place == -1) {
                cout << "Element not found!" << endl;
            } else {
                for (int i = place; i < num-1; i++) {
                    a[i] = a[i+1];
                }
                num--;
                cout << "Element deleted!" << endl;
            }
            break;

        case 4:
            cout << "Enter element to search: ";
            cin >> value;
            place = -1;
            for(int i=0;i<num;i++)
            {
                if(a[i] == value)
                {
                    place = i;
                    break;
                }
            }
            if (place != -1)
                cout << value << " found at position " << place+1 << endl;
            else
                cout << "Element not found" << endl;
            break;

        case 5:
            cout << "Exiting program..." << endl;
            return 0;

        default:
            cout << "Invalid choice!" << endl;
        }
    }
}
