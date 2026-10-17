//#include <iostream>
//using namespace std;
//
//int main(){
//    int prices[]= {7, 1, 5, 3, 6, 4};
//    int n = sizeof(prices) / sizeof(prices[0]);
//
//    int maxP=0;
//    int bestBuy=prices[0];
//
//    for (int i=0; i < n; i++){
//        if ( prices[i]>bestBuy){
//            maxP=max(maxP,prices[i]-bestBuy);
//          
//        }bestBuy=min(bestBuy,prices[i]);
//    }
//    cout<<maxP;
//    return 0;
//}

#include <iostream>
using namespace std;

int main() {
    int prices[] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(prices) / sizeof(prices[0]);

    int profit = 0;

    for (int i = 1; i < n; i++) {
        if (prices[i] > prices[i - 1]) {
            profit += prices[i] - prices[i - 1];
        }
    }

    cout << profit;
    return 0;
}