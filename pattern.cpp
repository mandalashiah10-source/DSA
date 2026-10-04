
//sqare

//#include <iostream>
//using namespace std;
//int main(){
//    int n=4;
//    
//    for (int i=1;i<=n ; i++){
//        for(int j=1;j<=n;j++){
//             cout<<j<<" ";
//
//        }
//        cout<<endl;
//        
//
//    }
//    return 0;
//} 

//contineous numbwe

//#include <iostream>
//using namespace std;
//
//int main(){
//    int n=3;
//    int num=1;
//    for(int i =0;i<n;i++){
//        for(int i =0;i<n;i++){
//            cout<<num<<" ";
//            num++;
//
//        }
//        cout<<endl;
//    }
//    return 0;
//}

// characer version

//#include <iostream>
//using namespace std;
//
//int main(){
//    int n =3;
//    char ch='A';
//    for(int i =0;i<n;i++){
//        for(int j =0;j<n;j++){
//            cout<<ch<<" ";
//            ch++;
//        }
//    cout<< endl;
//    }
//
//    
//    return 0;
//}





//Triangle
//#include <iostream>
//using namespace std;
//
//int main(){
//    
//    int n=4;
//
//    char ch='A';
//   
//    for(int i=0;i<n;i++){
//        for (int j=0;j<i+1;j++){
//            cout<<ch<<" ";
//            
//
//        }
//        cout<<endl;
//        ch++;
//    }
//   
//    
//    return 0;
//}



//#include <iostream>
//using namespace std;
//
//int main(){
//    int n=4;
//    char ch='A';
//    for(int i=0;i<n;i++){
//        for(int j=0;j<i+1;j++){
//            cout<<ch;
//            ch++;
//            
//            
//        }
//        cout<<endl;
//        //ch++;
//        
//        
//
//    }
//    return 0;
//
//}

//#include <iostream>
//using namespace std;
//
//int main(){
//    int n=4;
//    int num=-1;
//    for(int i=0;i<n;i--){
//        for(int j=0;j<-i;j++){
//            cout<<num;
//        }
//        cout<<endl;
//        num++;
//    }
//    return 0;
//}


//priymid of two triangke

#include <iostream>
using namespace std;

int main(){
    int n=4;
    for(int i=0; i<n;i++){

        // for space
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }

        for (int j=1;j<=i+1;j++){
            cout<<j;
        }

        for (int j=i;j>0;j--){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}