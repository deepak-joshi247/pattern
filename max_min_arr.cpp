#include<iostream>
#include<cmath>
#include<climits>
using namespace std;

int getmin(int size,int arr[],int min){
    for(int j=0;j<size;j++)
{
    if(min>arr[j]){
        min=arr[j];  
    }
}
return min;
}


int getmax(int size,int arr[],int max){
    for(int p=0;p<size;p++)
{
    if(max<arr[p]){
        max=arr[p];  
    }
}
return max;
}


int main()
{
int size;
cin>>size;  //to get how many num will be there
int arr[100];
for(int i=0;i<size;i++)
{
cin>>arr[i];         //to store num
}

//now we assign int_max to min as any number is less than int_max
//same for max we assign int_min

int min=INT_MAX;  
int max=INT_MIN;
//we use function to get max and min
cout<<"max is "<<getmax(size,arr,max);
cout<<" min is "<<getmin(size,arr,min);
return 0;
}