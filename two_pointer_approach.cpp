#include <iostream>
using namespace std;

int main(){
    int container[]={1,2,6,2,5,4,8,3,7};
    int n=sizeof(container)/sizeof(container[0]);
    int maxWater=0;
    int left =0;
    int right=n-1;

    while (left <right){
        int w=right-left;
        int ht=min(container[left],container[right]);
        int curWater=w*ht;
        maxWater=max(maxWater,curWater);

        if (container[left]< container[right]){
            left++;
        }else{
            right --;
        }
    }cout<<maxWater;
    return 0;
}