//Smallest element 

//#include <iostream>
//#include <climits>
//using namespace std;
//
//int main(){
//    int arr[]={2,3,4,5,67,9,8};
//    int n = sizeof(arr)/sizeof(arr[0]);
//
//    int min= INT_MAX;
//
//    for ( int i=0; i <n ;i++){
//        if ( arr[i]<min){
//            min=arr[i];
//        }
//    }
//    cout<<"Smallest element in a array: "<<min;
//    
//    return 0;
//}



// Second smallest number


#include <iostream>
#include <climits>
using namespace std;

int main(){
    int arr[]={2,3,4,5,67,9,8};
    int n = sizeof(arr)/sizeof(arr[0]);

    int min= INT_MAX;
    int sec_min=INT_MAX;

    for( int i =0 ; i <n; i++){
        if (arr[i]<min){
            sec_min=min;
            min=arr[i];

        }
        else if ( arr[i]>min && arr[i]<sec_min){
          sec_min = arr[i];
        }

    
    } 
    cout<< "Second smallest number:"<< sec_min;
    cout<<endl;
    
    return 0;
}