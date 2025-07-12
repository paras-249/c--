#include <vector>
using namespace std;
class Solution {
public:
    int minSwaps(vector<int>& nums) {
        nums=[2,4,6,5,7];
        int n= nums.size();
        int i=0 ;
        int j=i+1;
        int count=0;

        while(i<j){
            if(i %2==0 && j%2 !=0){
                swap(nums[i],nums[j]);
                count++;
                i=j;
            }else{

                i++;
            }
            return count;
            
        }
        return -1;
        
    }
};