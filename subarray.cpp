#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n=5;
    int arr[5]={2,3,4,5,6};
    int target =26;
    
    for (int st =0;st<n;st++){
        int sum=0;
        for (int end=st;end<n;end++){
                sum+=arr[end];
                if (sum==target){
                    cout << "Sum is equal to target:"<<sum;
                    return 0;
                }


        }
    } 
    cout << "No subarray found";
    
    return 0;
}