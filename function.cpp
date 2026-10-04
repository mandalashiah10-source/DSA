//#include <iostream>
//using namespace std;
//
//int sumOfn(int n){
//    int s=0;
//    for(int i=0;i<=n;i++){
//        s=s+i;
//    }
//    return s;
//
//    
//}
//int main(){
//    cout<<"Sum of n Number"<< sumOfn(10)<<endl;
//    return 0;
//}



#include <iostream>
using namespace std;

int fac(int n){
    int facto=1;
    for(int i=1;i<=n;i++){
        facto=facto*i;


    }
    return facto;
}

int main(){
    cout<<"Factorial of a number: "<<fac(6);
    
    return 0;
}