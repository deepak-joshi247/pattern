// /*
// *
// **
// ***
// */
// #include<iostream>
// #include<cmath>
// using namespace std;
// int main()
// {
// int n;
// cin>>n;
// int i=1;
// while (i<=n)
// {
//     int j=1;
//     while (j<=i)
//     {
//         cout<<"* ";
//     j=j+1;
//     }
//     cout<<endl;
//     i=i+1;
// }

// return 0;
// }
// // ------------------------done----------------------------

// /*
// 1
// 23
// 456
// */
// #include<iostream>
// #include<cmath>
// using namespace std;
// int main(){

// int n;
// cin>>n;
// int i=1;
// int count=1;
// while (i<=n)
// {
//    int j=1;
//    while (j<=i)
//    {
//     cout<<count<<" ";
//     count =count+1;
//     j =j+1;
//    }
//    cout<<endl;
//    i=i+1;
// }

// return 0;
// }
// -----------------done--------------------------------
// /* 
// 1
// 21
// 321
// 4321
// */
// #include<iostream>
// #include<cmath>
// using namespace std;
// int main()
// {
// int n;
// cin>>n;
// int i=1;
// while (i<=n)
// {
//     int j=1; 
//     int m=i;
    
//      while(j<=i){
//             cout<<m;
//             m=m-1;
           
//        j=j+1;
//         }
    
//     cout<<endl;
//     i=i+1;
// }

// return 0;
// } 

/* --------------------------done --------------------------------------- */
/* ABC
   ABC */
//    #include<iostream>
//    #include<cmath>
//    using namespace std;
//    int main()
//    {
//    int n;
//    cin>>n;
//    int i=1;
//    while (i<=n)
//    {
//     int j=1;
//     while (j<=n)
//     {
//     char ch='A'+j-1;
//         cout<<ch;
//         j=j+1;
        
//     }
//     cout<<endl;
//     i=i+1;
//    }
   
//    return 0;
//    }

//    -------------------done----------------------------------
// /* ABC
//    DEF
//    GHI */
//    #include<iostream>
//    #include<cmath>
//    using namespace std;
//    int main()
//    {
//    int n;
//    cin>>n;
//    int i=1;
//         char ch='A';
//    while (i<=n)
//    {
//     int j=1;
//     while (j<=n)
//     {
//         cout<<ch;
//         ch=ch+1;
//         j=j+1;
//     }
//     cout<<endl;
//     i=i+1;
//    }
   
//    return 0;
//    }
// ----------------------done---------------------------------------
// // /* D
// //    CD
// //    BCD */
//    #include<iostream>
//    #include<cmath>
//    using namespace std;
//    int main()
//    {
//    int n;
//    cin>>n;
//    int i=1;
//    while (i<=n)
//    {
//     int j=1;
//    char ch='D'-(i-1);
//     while (j<=i)
//     {
//         cout<<ch;
//         ch=ch+1;
//         j=j+1;
//     }
//     cout<<endl;
//     i=i+1;
//    }
   
//    return 0;
//    }
// ---------------------------------done--------------------------------------- 
// // /* 1111
// //     222
// //      33
// //       4 */

// #include<iostream>
// #include<cmath>
// using namespace std;
// int main()
// {
// int n;

// int i=1;


// cin>>n;
// while (i<=n)
// {
//    int space=i-1;  //to print space 0,1,2,3 time
//    while (space>0)   // not print for first then print
//    {
//       cout<<" ";
//       space=space-1;
//    }
// int j=1;  
//    while(j<=n-i+1){   //this cause j=4,3,2,1 time
//       cout<<i;    // as each time i^th element is printinf as per row
//       j=j+1;
//    }
//    cout<<endl;
//    i=i+1;
// }

// return 0;
// }
// ------------------------------success-----------------
// /* 
// 1234
//  234
//   34
//    4 */

// #include<iostream>
// #include<cmath>
// using namespace std;
// int main()
// {
// int n;

// int i=1;

//     int name=1;

// cin>>n;
// while (i<=n)
// {
//    int space=n-i;  
//    while (space>0)   
//    {
//       cout<<" ";
//       space=space-1;
//    }
// int j=1;  
//    while(j<=i){   
//       cout<<name;
//       name=name+1;    
//       j=j+1;
//    }
//    cout<<endl;
//    i=i+1;
// }

// return 0;
// }
// --------------------done --------------------------
// /* 
// 1234554321
// 1234**4321
// 123****321
// 12******21
// 1********1
//  */
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int n;
cin>>n;
int a=0;             // for multiplying with 2 in triangle 2 and condition in 1
int i=1;
     
while (i<=n)

{
   int cond1=n-a;            // for printing third triangle and is same as cond but cond changes in 1 so we use diff name
int cond=n-a;
   
   int count=1;
   while (cond>0)             //first triangle 
   {
      cout<<count;
      count=count+1;
      cond=cond-1;
   }

   int star=a*2;
   while (star>0)         //second triangle
   {
      cout<<"*";
      
      star=star-1;
   }

   while (cond1>0)             //third triangle 
   {
      cout<<cond1;
      cond1=cond1-1;
   }
   
   
 a=a+1;
i=i+1;
cout<<endl;
}

return 0;
}
//------------------------------------------done-----------------------------------------