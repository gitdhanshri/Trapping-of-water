// #include<iostream>
// using namespace std;
// int collect_water(int arr[],int size)
// {
//     int res =0;
//     int lmax[size],rmax[size];
//     lmax[0]=arr[0];
//     for(int i=1;i<size;i++)
//     {
//         lmax[i]=max(arr[i],lmax[i-1]);
//     }
//     rmax[size-1]=arr[size-1];
//     for(int i=size-2;i>=0;i--)
//     {
//         rmax[i]=max(arr[i],rmax[i+1]);
//     }
//     for(int i=1;i<size-1;i++)
//     {
//         res=res+(min(lmax[i],rmax[i]))-arr[i];
//     }
//     return res;

// }
// int main(){
//     int arr[]={3,1,2,4,0,1,3,2};
//     int size=sizeof(arr)/sizeof(arr[0]);
 
// int total_wat=collect_water(arr,size);
// cout<<"\nTotal amount of collected water->"<<total_wat;
//   cout<<"\n";
// return 0;
// }
#include<iostream>
using namespace std;
int max(int a,int b)
{
    if(a>b)
    {
        return a;
    }
    else{
        return b;
    }
}
int min(int a, int b)
{
    if(a>b)
    
     return b;
    
    else
    return a;
}
int count_trap_water(int arr[],int n)
{
    int res=0;
    for(int i=1;i<n-1;i++)
    {
int lmax=arr[i];
    for(int j=0;j<i;j++)
        {

            lmax=max(lmax,arr[j]);
        }
    
    int rmax=arr[i];
    for(int j=i+1;j<n;j++)
    {
        rmax=max(rmax,arr[j]);
    }
    res=res+(min(rmax,lmax))-arr[i];
   }  

return res;
}
int main()
{
    // int arr[]={4,1,1,4};//6
    int arr[]={3,2,0,6,3,1,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"\n";
    int collect_water=count_trap_water(arr,size);
    cout<<"\n\nAmount of water collectecd by given pillaer is-->>"<<collect_water;
    cout<<"\n";
    return 0;
}