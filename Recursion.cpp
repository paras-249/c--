#include<iostream>
#include<vector>
using namespace std;

/*void printNum( int n){

    if(n==1){
        cout<<"1\n";
        return ;
    }
    cout<<n<<" ";
    printNum(n-1);
}*/

// For factorial using recursion
/*int factorial(int n){
    if(n==0){
        return 1;
    }
    return n*factorial(n-1);
}*/

// For the sum of the n

/*int Sum(int n){
    if(n==1){
        return 1;
    }
    return n+ Sum(n-1);
}*/


// The Give array is sorted or not

bool isSort(vector<int>arr, int n){
    if(n==0 || n==1){
        return true;
    }
    return arr[n-1]>=arr[n-2] && isSort(arr,n-1);
}
int main(){
    //printNum(55);

  //cout<<  factorial(5)<<endl;

  //cout<<  Sum(4)<<endl;

  vector<int> arr={1,2,3,4,9,6};
  cout<<isSort(arr,arr.size())<<endl;
   return 0;
}