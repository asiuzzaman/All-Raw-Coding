#include<bits/stdc++.h>
using namespace std;
#define read() freopen("input.txt", "r", stdin);
#define write() freopen("output.txt", "w", stdout);
#define ll long long int 

void merge(int arr[], int left, int mid, int right) 
{ 
   
    int size_left = mid - left + 1; 
    int size_right =  right - mid; 
  
    
    int L[size_left], R[size_right]; 
  
    
    for (int i = 0; i < size_left; i++) 
        L[i] = arr[left + i]; 
    for (int j = 0; j < size_right; j++) 
        R[j] = arr[mid + 1+ j]; 
  
    
   int  i = 0; 
   int  j = 0;  
   int  k = left; 
    while (i < size_left and  j < size_right) 
    { 
        if (L[i] <= R[j]) 
        { 
            arr[k] = L[i]; 
            i++; 
        } 
        else
        { 
            arr[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
  
    
    while (i < size_left) 
    { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
  
    
    while (j < size_right) 
    { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
} 
  
void mergeSort(int arr[], int left, int right) 
{ 
    
     if(left>=right) return ;
     int mid=left+(right-left)/2;
     int count=0;

     mergeSort(arr,left,mid);
     mergeSort(arr,mid+1,right);




     merge(arr,left,mid,right);
   
} 
  

int main()
{
	#ifdef asiuzzaman
	read(); write();
	#endif
    
     int arr_size;
    cin>>arr_size;
    int arr[arr_size];


     for(int i=0;i<arr_size;i++)
     {
     	cin>>arr[i];
     }
    
  
    mergeSort(arr, 0, arr_size - 1); 
  
  int i;
  cout<<"[";
    for ( i = 0; i < arr_size-1; ++i)
    {
    	

    	cout<<arr[i]<<",";
    }
    cout<<arr[i]<<"]"<<endl;
    
}
