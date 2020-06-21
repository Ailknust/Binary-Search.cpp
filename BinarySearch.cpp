#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[11] = {12,20,25,32,44,46,50,51,54,55,60};
    int mid,key, found = 0;
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
            cout<< "Value found at location = "<<mid<<endl;
            found = 1;
            break;
        }

    }
    if (key != a[mid])
        cout<< "not found";
    return 0;


}
/*#include<bits/stdc++.h>
using namespace std;
int binarySearch(int array[], int start, int end, int x)
{
	if (end >= start) {
		int mid = (start + end)/2;
		if (array[mid] == x)
			return mid;
		else if (array[mid] > x)
			return binarySearch(array, start, mid - 1, x);
		else
			return binarySearch(array, mid + 1, end, x);
	}
	return 0;
}
int main(void)
{
	int array[] = { 2, 3, 4, 5, 10, 15, 40 };
	int x = 15;
	int n = sizeof(array)/sizeof(array[0]);
	int index = binarySearch(array, 0, n - 1, x);
	if(index == 0)
		cout << "Element is not in the array";
	else
		cout << "Element found at position " << index+1<<endl;

	 return 0;
}*/
