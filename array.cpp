
// Using Array find smallest Value;

//#include <iostream>
//using namespace std;
//
//int main(){
//    int marks[]={99,100,91,34,56};
//    int size=5;
//    int smallest=INT_MAX;
//
//    for (int i=0;i<5;i++){
//        if (marks[i] < smallest){
//            smallest=marks[i];
//        //smallest=min(marks[i],smallest);   
//        }
//    }
//    cout<<smallest;
//    return 0;
//}




//using Array find largest value;

#include <iostream>
using namespace std;

int main(){
    int num[6]={65,76,99,54,3,44};
    //int size=6;

    int largestVal=INT_MIN;
    for(int i=0;i<num[6];i++){
        if (num[i]>largestVal){
            largestVal=num[i];
        }
    }
    cout<<largestVal;
    return 0;
}