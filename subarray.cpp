//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main(){
//    int n=5;
//    int arr[5]={2,3,4,5,6};
//    int target =8;
//    
//    for (int st =0;st<n;st++){
//        int sum=0;
//        for (int end=st;end<n;end++){
//                sum+=arr[end];
//                if (sum==target){
//                    cout << "Sum is equal to target:"<<sum;
//                    return 0;
//                }
//
//
//        }
//    } 
//    cout << "No subarray found";
//    
//    return 0;
//}



// pair sum


//#include <iostream>
//#include <vector>
//using namespace std;
//
//vector<int> pairSum(vector<int> nums,int target){
//    vector<int>ans;
//    int n=nums.size();
//
//
//    for (int i =0 ; i<n ;i++){
//        for (int j = i+1 ; j <n ;j++){
//             if (nums[i]+nums[j]==target){
//                ans.push_back(i);
//                ans.push_back(j);
//                return ans;
//             }
//        }
//    }
//
//
//    return ans;
//}
//
//
//int main(){
//    vector<int> nums={2,7,11,15};
//    int target =9;
//
//
//    vector<int> ans=pairSum(nums,target);
//    cout<<ans[0]<<", "<<ans[1]<<endl;
//    
//    return 0;
//}



#include <iostream>
using namespace std;

int main(){
    int arr[]={3,7,2,9,4};
    int n =5;
    int lar=INT_MIN;
    for (int i =0;i<n;i++){
        if (arr[i]>lar){
            lar=arr[i];
        }
        

    }cout<<lar;
   

    return 0;
}