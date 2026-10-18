#include <iostream>
using namespace std;

int main(){
    int container[]={1,2,6,2,5,4,8,3,7};
    int n=sizeof(container)/sizeof(container[0]);
    int maxWater=0;
    for ( int i =0; i<n ;i++){
        for (int j=i+1 ;j<n; j++){
            int w=j-i;
            int ht=min(container[i],container[j]);
            int curWater =w*ht ;

            maxWater=max(maxWater,curWater);
        }
    }
    cout<<maxWater;
    return 0;
}