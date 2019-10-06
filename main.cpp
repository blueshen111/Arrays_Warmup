// Jordan Steer-Furderer
// CIS 25
//
#include <iostream>
//#include <cstdlib>
//#include <cmath>
using namespace std;

//int lookFor (int stuff []){
//for (int i=0; i<8; i++){
//
//return i;
//}
//
//
//}

int reverseArray(int arr[], int arraySize){



    for (int i = arraySize; i >= 1; i--){


        cout << arr[i] << ", ";

    }
     for (int i = 0; i >= 0; i--){
                cout << arr[i];
     }

        //cout << arr[i] << ", ";
        return 2;
}

//void reverseArray(int arr[]){
//    cout << "{";
//    for (int i = 7; i >= 0; i--){
//
//        cout << arr[i] << ", ";
//    }
//
//    cout << "}";
//}

//int printArray(int arr[]){
//
//    for (int i = 7; i = 0; i--){
//
//        cout << arr[i];
//    }
//
//}




//int findPosition (int arr[], int input){
//
//    if (input != 1 && input != 2 && input != 4 &&
//        input != 5 && input != 6 && input != 7 && input != 10){
//            cout << "-1" << endl;
//    }
//
//    for (int i = 0; i < 8; i++){
//        if(arr[i] == input){
//            cout << i << endl;
//        }
//    }
//}

int findPosition (int arr[], int length, int input){


//    if (input != arr[0] && input != arr[1] &&input != arr[2] && input != arr[3] && input != arr[4] && input != arr[5] && input != arr[6] &&
//        input != arr[7] && input != arr[7]){
//            cout << "-1" << endl;
//    }


    for (int i = 0; i < length; i++){
        if(arr[i] == input){
            cout << i << endl;
            return i;
        }
    }
    cout << "-1" << endl;
return -1;
}



//void
int main()
{
int input;
int length;

int arr[] = {1, 4, 6, 5, 2, 7, 10, 4};

cout << "how long is the array?" << endl;
cin >> length;
cout << "enter a number and I'll tell you " << endl;
cout << "it's position in the array" << endl;
cin >> input;


//    for (int i = 0; i < 8; i++){
//        if(arr[i] == input){
//            cout << i << endl;
//        }
//    }

//                if (input != '1' ){
//                    cout << "-1" << endl;
//                }

findPosition(arr, length, input);

cout << "{";
reverseArray(arr, length - 1);
cout << "}" << endl;

//reverseArray(arr);

//cout << printArray(arr) << endl;
return 0;


}


















