#include<iostream>
#include<vector>

using namespace std;

void merge(vector<int>&arr,int st,int mid,int end){
    vector<int>temp;
    int i=st,j=mid+1;

    while (i<=mid&& j<=end)
    {
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i]);
            i++;
        }else{
            temp.push_back(arr[j]);
            j++;
        }
    }

    //left side elements if remain
    while(i<=mid){
        temp.push_back(arr[i]);
            i++;
    }

    //right side
     while(j<=end){
        temp.push_back(arr[j]);
            j++;
    }

    for(int idx=0;idx<temp.size();i++){
        arr[idx+st]=temp[idx];
    }
    

}


void mergeSort(vector<int>&arr,int st,int end){
    if(st<end){
        int mid=st+(end-st)/2;

        mergeSort(arr,st,mid);//left part
        mergeSort(arr,mid+1,end);//right part

        merge(arr,st,mid,end);
    }
}

int main(){
    vector <int> arr={12,23,54,12,43,2,42,58,99,32};
    mergeSort(arr,0,arr.size()-1);

    for(int val : arr){
        cout << val <<" ";
    }
    cout<< endl;
    cout<<"hello";
    return 0;
}
