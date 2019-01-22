#include<iostream>
using namespace std;

void merge(int a[],int begin,int end,int mid)
{
    int i,j,k,temp[100];
    i=begin;
    k=0;
    j=mid+1;

    while(i<=mid && j<=end)
    {
        if(a[i]<a[j])
        {
            temp[k]=a[i];
            k++;
            i++;
        }
        else
            {
                temp[k]=a[j];
                k++;
                j++;

        }
    }

    while(i<=mid)
   {
      temp[k]=a[i];
      k++;
      i++;
    }
  while(j<=end)
  {
    temp[k]=a[j];
    k++;
    i++;
  }
  for(i=begin;i<=end;i++)
  {
      a[i]=temp[i-begin];

  }

}

void mergesort(int a[],int begin,int end)
{
    int mid;
    if(begin<end)
{
    mid=(begin+end)/2;
    mergesort(a,begin,mid);
    mergesort(a,mid+1,end);
    merge(a,begin,end,mid);
}

}

int main()
{
    int n,arr[100],i;
    cout<<"Enter the size of array";
    cin>>n;
    cout<<"Enter elements"<<i+1<<":";
    for(i=0;i<n;i++)
    {

        cin>>arr[i];
    }
    mergesort(arr,0,n-1);
    cout<<"Sorted array is";
    for(i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    return 0;
}
