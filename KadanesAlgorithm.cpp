// maximum sum of a contiguous subarray


// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//   int nums;
//   cin>>nums;
//   int arr[nums];
//   for(int i=0;i<nums;i++){
//     cin>>arr[i];
//   }
//   int currSum = 0;
//   int maxSum = INT_MIN;

//   for(int i=0;i<nums;i++){
//     currSum+=arr[i];
//     maxSum=max(currSum,maxSum);

//     if(currSum<0){
//       currSum= 0;
//     }
//   }
//   cout << maxSum << endl;
// } 

#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    vector<int>nums;
    int currSum =0;
    int maxSum = INT_MIN;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int value;
        cin>>value;
        nums.push_back(value);
    }

    for(int val:nums){
        currSum+=val;
        maxSum=max(maxSum,currSum);
        if(currSum<0){
            currSum=0;
        }
    }
    cout << maxSum << endl;
}