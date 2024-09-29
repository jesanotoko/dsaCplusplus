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

// #include<iostream>
// #include<vector>
// #include<climits>
// using namespace std;
// int main(){
//     vector<int>nums;
//     int currSum =0;
//     int maxSum = INT_MIN;
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         int value;
//         cin>>value;
//         nums.push_back(value);
//     }

//     for(int val:nums){
//         currSum+=val;
//         maxSum=max(maxSum,currSum);
//         if(currSum<0){
//             currSum=0;
//         }
//     }
//     cout << maxSum << endl;
// }
#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
#include<math.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v;
        int value;
        int mins=INT_MAX;
        int maxs=INT_MIN;
        for(int i=0;i<n;i++){
            cin>>value;
            mins=min(value,mins);
            v.push_back(value);
        }
        if(n%2==0 && n>1){
            v.erase(remove(v.begin(),v.end(),mins),v.end());
        }
        for(int i=0;i<v.size();i+=2){
            maxs=max(v[i],maxs);
        }
        float x = ceil(n/2.0);
        int y = x+maxs;
        cout << y << endl;
    }
}