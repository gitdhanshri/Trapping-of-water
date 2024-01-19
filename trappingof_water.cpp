// #include<iostream>
// using namespace std;
// int max(int a,int b)
// {
//     if(a>b)
    
//         return a;
    
//     else
    
//         return b;
    
// }
// int min(int a,int b)
// {
//     if(a>b)
//     {
//         return b;
//     }
//     else
//     {
//         return a;
//     }
// }

// int collected_water(int arr[],int n)
// {
//     int right[n];
//     int left[n];
//     left[0]=arr[0];

//     for(int i=1;i<n;i++)
//     {
//         left[i]=max(arr[i-1],arr[i]);
//     }

//     right[n-1]=arr[n-1];
//     for(int i=n-2;i>=0;i--)
//     {
//       right[i]=max(arr[i+1],arr[i]);  
//     }

//     int res=0;
//     for(int i=0;i<n;i++)
//     {
//         res+=(min(left[i],right[i])-arr[i]);
//     }
//     return res;
// }
// int main(){
//     int arr[]={3,1,2,4,0,1,3,2};
//     int size=sizeof(arr)/sizeof(arr[0]);
 
// int total_wat=collected_water(arr,size);
// cout<<"\nTotal amount of collected water->"<<total_wat;
//   cout<<"\n";
// return 0;
// }

#include<iostream>
using namespace std;
int collect_water(int arr[],int size)
{
    int res =0;
    int lmax[size],rmax[size];
    lmax[0]=arr[0];
    for(int i=1;i<size;i++)
    {
        lmax[i]=max(arr[i],lmax[i-1]);
    }
    rmax[size-1]=arr[size-1];
    for(int i=size-2;i>=0;i--)
    {
        rmax[i]=max(arr[i],rmax[i+1]);
    }
    for(int i=1;i<size-1;i++)
    {
        res=res+(min(lmax[i],rmax[i]))-arr[i];
    }
    return res;

}
int main(){
    int arr[]={3,1,2,4,0,1,3,2};
    int size=sizeof(arr)/sizeof(arr[0]);
 
int total_wat=collect_water(arr,size);
cout<<"\nTotal amount of collected water->"<<total_wat;
  cout<<"\n";
return 0;
}