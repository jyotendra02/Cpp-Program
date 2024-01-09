#include <iostream>
using namespace std;

int binarysearch(int a[], int low, int high, int item)
{
  int mid;
  if(low<=high)
  {
     mid = (low+high)/2;
     if(a[mid]==item)
      return mid;
     else if(a[mid]<item)
      return binarysearch(a, mid+1, high, item);
     else
      return binarysearch(a, low, mid-1, item);
  }
  return -1;
}

void search(int a[],int high, int item )
{
  int result = binarysearch(a, 0, high,item);
  
  if(result == -1)
     cout<<"-------Element Not Found!!-------"<<endl;
  else
    cout<<"Element Found at Index: "<<result<<endl;
}

int main() {
  
  int arr[]={1,9,10,18};
  int length = sizeof(arr)/sizeof(arr[0]);
  search(arr,length-1,10);
}