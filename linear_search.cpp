// #include<iostream>
// #include<cmath>
// using namespace std;
// int main()
// {
// int size;
// int arr[100];
// cin>>size;
// for (int i = 0; i < size; i++)
// {
// cin>>arr[i];
// }
// int dummy;
// for(int j=0;j<(size/2);j++)
// {
//     dummy=arr[(size-1)-j];
//     arr[(size-1)-j]=arr[j];
//     arr[j]=dummy;
// }
// for (int i = 0; i < size; i++)
// {
//    cout<<arr[i]<<" ";
// }


// return 0;
// }
//-----------------------------------done-----------------------

// #include<iostream>
// #include<cmath>
// using namespace std;
// int main()
// {
//     int size;
// int arr[20];
// cin>>size;
// for (int i = 0; i < size; i++)
// {
//     cin>>arr[i];
// }

// for (int i = 1; i < size; i=i+2)
// {
//     swap(arr[i-1],arr[i]);


// }
// for (int i = 0; i < size; i++)
// {
//     cout<<arr[i]<<" ";
// }


// return 0;
// }
//--------------------done------------------------
// #include<iostream>
// #include<cmath>
// using namespace std;
// int main()
// {
// int arr[100];
// int size;
// cin>>size;
// for (int i = 0; i < size; i++)
// {
//    cout<<"enter val ";
//    cin>>arr[i];

// }
// for (int i = 0; i < size; i++)
// {
    
//     for (int j = i+1;j < size; j++)
//     {
//         if(arr[i]==arr[j])
//         {
//             cout<<arr[i]<<endl;
//         }
//     }
    
// }


// return 0;
// }

//---------------done---------------------------------
//array intersection
// #include<iostream>
// #include<cmath>
// using namespace std;
// int main()
// {
// int arr1[100];
// int arr2[100];
// int size1;
// int size2;

// cout<<"first array size val ";
// cin>>size1;
// cout<<"second array size val ";
// cin>>size2;
//    cout<<"give array one val";  //take arr1 val
// for (int  i = 0; i < size1; i++)
// {
//    cin>>arr1[i];
// }

//    cout<<"give second array  val";  //take arr2 val;
// for (int  i = 0; i < size2; i++)
// {
//    cin>>arr2[i];
// }
// for (int i = 0; i < size1; i++)
// {
//     for (int j = 0; j < size2; j++)
//     {
//         if(arr1[i]==arr2[j])
//         {
//             cout<<arr1[i];
//         }
//     }
    
// }

// return 0;
// }
//------------------done--------------------------------------
// //array sum
// #include<iostream>
// #include<cmath>
// using namespace std;
// int main()
// {
// int size;
// int count=0;
// int sum;
// cout<<"give sum val ";
// cin>>sum;
// int arr[100];
// cout<<" array size val ";
// cin>>size;
//    cout<<"give array one val "; 
// for (int  i = 0; i < size; i++)
// {
//    cin>>arr[i];
// }
// for (int  i = 0; i < size; i++)
// {
//     for (int j = i+1; j<size; j++)   //i+1 else it compare with previous also
//     {
//         if(sum==(arr[i]+arr[j])){
//             count++;
//         }
//     }
    
// }
// cout<<count;
// return 0;
// }
//--------------done-------------------------------
// //sort 0 1 2
// #include<iostream>
// #include<cmath>
// using namespace std;
// int main()
// {
// int size;




// int arr[100];
// cout<<" array size val ";
// cin>>size;
//    cout<<"give array one val "; 
// for (int  i = 0; i < size; i++)
// {
//    cin>>arr[i];
// }
// for (int  i = 0; i < size; i++)
// {
//     for (int j = i+1; j<size; j++)   //i+1 else it compare with previous also
//     {
//       if(arr[i]>arr[j]){
//         swap(arr[i],arr[j]); 
//       }
//     }
// }
// for (int  i = 0; i < size; i++)
// {
//    cout<<arr[i];
// }
// return 0;
// }
//-------------------done-----------------------------