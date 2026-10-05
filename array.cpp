
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

//#include <iostream>
//using namespace std;
//
//int main(){
//    int num[]={65,76,99,54,3,44};
//    int size=6;
//
//    int largestVal=INT_MIN;
//    for(int i=0;i<size;i++){
//        if (num[i]>largestVal){
//            largestVal=num[i];
//        }
//    }
//    cout<<largestVal;
//    return 0;
//}


// find the sum , product and avg of  5 subject of marks using array!!
//#include <iostream>
//using namespace std;
//
//int main() {
//    int marks[] = {56, 78, 96, 34, 27};
//    int sz = 5;
//    int sum = 0;
//    int product = 1;
//    float avg;
//
//    for (int i = 0; i < sz; i++) {
//        sum = sum + marks[i];
//    }
//
//    for (int i = 0; i < sz; i++) {
//        product = product * marks[i];
//    }
//
//    avg = sum / 5.0;
//
//    cout << "Sum = " << sum << endl;
//    cout << "Product = " << product << endl;
//    cout << "Average = " << avg << endl;
//
//    return 0;
//}



//program of swap the max num and min number from array


#include <iostream>
#include <climits>
using namespace std;

void swapNum(int num[], int sz) {

    int smallest = INT_MAX;
    int Greatest = INT_MIN;

    int smallIndex = 0;
    int largeIndex = 0;

    for (int i = 0; i < sz; i++) {

        if (num[i] < smallest) {
            smallest = num[i];
            smallIndex = i;
        }

        if (num[i] > Greatest) {
            Greatest = num[i];
            largeIndex = i;
        }
    }

    swap(num[smallIndex], num[largeIndex]);
}

int main() {

    int num[] = {23, 56, 87, 54, 67};
    int sz = 5;

    swapNum(num, sz);

    for (int i = 0; i < sz; i++) {
        cout << num[i] << " ";
    }

    return 0;
}