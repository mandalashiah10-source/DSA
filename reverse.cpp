//// using Function
//
//#include <iostream>
//using namespace std;
//
//void reverseArray(int arr[],int  sz){
//    int st=0,end=sz-1;
//
//    while(st < end){
//        swap(arr[st],arr[end]);
//        st++;
//        end--;
//    }
//}
//
//int main(){
//    int arr[]={1,4,5,6,74,3,25};
//    int sz=sizeof(arr) / sizeof(arr[0]);
//
//    reverseArray(arr,sz);
//    for ( int i = 0 ; i< sz; i++){
//        cout<<arr[i]<<" ";
//    }
//    cout<<endl;
//    
//    return 0;
//}

#include <iostream>
using namespace std;

int main(){
    int arr[]={2,4,5,6,7,3};
    int n=sizeof(arr)/sizeof(arr[0]);

    int st = 0 ;
    int end = n-1;

    while  ( st < end){
        swap(arr[st],arr[end]);
        st++;
        end--;
    }


    for (int i=0; i<n ; i++){
        cout<< arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}