//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main(){
//    int n=5;
//    int arr[5]={1,2,3,4,5};
//    
//    for (int st=0 ; st<n ; st++){
//        for(int end =st ; end <n ;end++){
//            for( int i =st ; i<=end ;i++){
//                cout<<arr[i];
//
//            }
//            cout<<" ";
//        }
//        cout<<endl;
//    }
//
//    
//    
//    return 0;
//}


//Brute Force Approach


//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main(){
//    int n=7;
//    int arr[7]{3,-4,5,4,-1,7,-8};
//
//    int maxSum=INT_MIN;
//    for(int st =0 ; st<n ;st++){
//        int currSum=0;
//        for( int end =st;end<n;end++){
//            currSum+=arr[end];
//            maxSum=max(currSum,maxSum);
//
//            
//        }
//    }
//    cout<<maxSum;
//
//    return 0;
//}

//kadan's Algorithm

//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main(){
//    int n=7;
//    int arr[7]{3,-4,5,4,-1,7,-8};
//    int maxSum=INT_MAX;
//    int curtSum=0;
//    for(int i=0;i<n;i++){
//        curtSum+=arr[i];
//        maxSum=max(curtSum,maxSum);
//
//        if (curtSum<0){
//            curtSum=0;
//        }
//        
//    }
//    cout<<maxSum;
//    return 0;
//}



//pair sum


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