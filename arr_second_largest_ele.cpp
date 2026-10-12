#include <iostream>
#include <climits>
using namespace std;

int main(){
    int arr[]={1,5,6,8,3,68};
    int n=sizeof(arr)  / sizeof(arr[0]);
    int maxElement=INT_MIN;
   
    int secLarge=INT_MIN;

    for ( int  i = 0 ; i < n ; i++){
         if (arr[i]>maxElement){
            secLarge=maxElement;
            maxElement=arr[i]
            ;
            
            }
            else if (arr[i] > secLarge && arr[i] < maxElement) {
                secLarge = arr[i];

            }
        
        
    }cout<<maxElement<<endl;
    cout<<secLarge;

    return 0;
}