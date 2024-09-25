#include<iostream>
#include<cmath>
using namespace std;
int factorial(int n){     //n here is just use to store the copy of var assingned to the function
    int fact=1;
    if(n==0){
        return 1;
    }
    else{
       for(int i=0;i<n;i++){

         fact=fact*(n-i);
        
       }
       return fact;
    }
}

int answer(int factn,int factn_r,int factr){
    int func_ans;
    func_ans=factn/(factn_r*factr);

  return func_ans;

}
int main()

{

int r,n;
cin>>n;
cin>>r;
    int n_r=n-r;
int factn=factorial(n);
int factn_r=factorial(n_r);

int factr=factorial(r);
int ans=answer(factn,factn_r,factr);
cout<<ans;
return 0;
}