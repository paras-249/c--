#include<iostream>
#include<vector>

using namespace std;

int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}



int main(){
    cout<< factorial(4) <<"\n";
   
   int  sum[]={1,2,5,5,5,6,7};
    int sumans=0;
    for(int i=0;i<7;i++){
        sumans=sumans+sum[i];
    }
    cout<< sumans<<"\n";
    return 0;
}