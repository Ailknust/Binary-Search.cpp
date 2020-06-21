#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[11] = {12,20,25,32,44,46,50,51,54,55,60};
    int mid,key , found = 0;
    int low = 0;
    int high = 10;
    cout<< "Enter the value = ";
    cin>>key;
    while( low <= high)
    {
        mid = (low + high)/2;
        if(key < a[mid])
        {
            high = mid - 1;
        }
        else if(key > a[mid])
        {
            low  = mid + 1;
        }
        else if(key == a[mid])
        {
            cout<< "found at location = "<<mid<<endl;
            found = 1;
            break;

        }
    }
}
