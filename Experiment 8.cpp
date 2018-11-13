#include<iostream>
using namespace std;

void insertionsort(int arr[],int n)
{
    int i,j,k,temp,m;
    for(i=0;i<n;i++)
    {
        m=arr[i];
        j=i;
        while(arr[j-1]>m && j>0)
        {
            arr[j]=arr[j-1];
            j--;
        }
        arr[j]=m;
    }
}

int main()
{
    int i,arr[20],n,item;;
    cout<<"Enter no of elements";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    insertionsort(arr,n);
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<"\nEnter new value to be inserted : ";
    cin>>item;
     i = n-1;
     while(item<arr[i] && i>=0)
     {
           arr[i+1]=arr[i];
           i--;
     }
     arr[i+1]=item;
     n++;
     cout<<"\nAfter insertion array is :\n";
      for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}
