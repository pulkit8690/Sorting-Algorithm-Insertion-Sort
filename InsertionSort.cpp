#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void insertion_sort(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        int temp=arr[i];
        int j=i-1;
        for(;j>=0;j--)
        {
            if(arr[j]>temp)
            {
                arr[j+1]=arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j+1]=temp;
    }
}
void print(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<< arr[i]<<" ";
    }
}
int main()
{

    int n;
    cout << "Enter Size Of Array: ";
    cin >> n;
    int arr[n];
    cout << "Entering Elements Of Array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout<<"Before Sort: ";
    print(arr,n);
    cout<<endl;
    cout<<"After Sorting: ";
    insertion_sort(arr,n);
    print(arr,n);
    return 0;
}




