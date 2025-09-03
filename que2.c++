// int nums = {1,1,1,2,2,3};
// k = 2
// Output = 2
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;

int FindIndex(vector<int> nums, int k){
    int n = nums.size() ;
    sort(nums.begin(), nums.end()) ;
    int count = 1 ;
    for(int i=1; i<n; i++){
        if(nums[i] == nums[i+1]){
            count++ ;
            if(count > n/k){
                return nums[i] ;
            }
        }
        else{
            count = 1 ;
        }
    }
    return -1 ;

}

int main (){
int nums[10] = {1,1,1,2,2,3};
int k = 2 ;
vector<int> arr(nums[10], k) ;
cout<<FindIndex(arr, k) ;
return 0 ;
}