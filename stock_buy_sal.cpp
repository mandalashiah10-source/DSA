#include <iostream>
using namespace std;

int main(){
    int stock[]={3,4,3,2,7,89,12};
    int n = sizeof(stock)/sizeof(stock[0]);
    int maxProfit=0;
    int bestBuy=stock[0];

    for ( int i =0 ; i <n ; i++){
        if ( stock[i]>maxProfit){
            maxProfit=max(maxProfit,stock[i]-bestBuy);
            bestBuy=min(bestBuy, stock[i]);
        }
     
    }
    cout<<maxProfit;
    return 0;
}