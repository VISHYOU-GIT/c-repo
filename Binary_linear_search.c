#include <stdio.h>
int linearSearch(int arr[],int n,int key){
  for(int i= 0;i<n;i++)
  {
    if(arr[i]==key){
      return i;
    }
  }
  return 1;

}
int binarySearch(int arr[],int n,int key)
{
 int low= 0, high =n-1;
 while(low<=high){
   int mid = (low+high)/2;
   if(arr[mid]==key){
     return mid;
   }
   else if(arr[mid]<key){
     low = mid+1;
   }
   else {
     high = mid-1;
   }
 }
 return 1;

}
int main()
{
  int a[]={1,2,3,34,33};
  int b =6;
  int c= 334;
  
      printf("Searched Number is : %d \n \n",c);
  int d = binarySearch(a,b,c);
  
    int e = linearSearch(a,b,c);
  if(d==1 && e==1)
  {
       printf("Not found \n");
  }
else{
     printf("result with binary search: %d \n \n",d);
      printf("result with linear search: %d",e);
}
   
 
   
}
