#include <iostream>

using namespace std;


int number(int a[], int size){
    for(int i=0;i<size;i++){
        cout << a[i]<< " ";
    }

    return 0;
}

//  If we want to return an array in a function, we can do it by returning a pointer to the array or by returning the array itself.

int *number1(){
    int static numbers[5] = {1,2,3,4,5};
    return numbers;
}

int main(){
    int array[2][5];
   
    cout << "Enter the elements of the array: \n";

    for (int i = 0;i<2;i++){
        for(int j=0;j<5;++j){
            cin >> array[i][j];
        }
        cout << endl;
    }
    cout << "The elements of the array are: \n";

    for (int i = 0;i<2;i++){
        for(int j=0;j<5;++j){
            cout << array[i][j]<<" ";
        }
        cout << endl;
    }
    
    cout << endl;

    int array1[] ={1,2,3,4,5};

    int size = sizeof(array1)/sizeof(array1[4]);
    cout << "The size of the array is: "<< size << endl;

    number(array1, size);
    
    cout << endl;   
    cout<<  "Returning array in the function" << endl;

    int *p = number1();
    cout << p;

    cout << "The elements of the array are: \n";
    for(int i=0;i<5;i++){
        cout << p[i] << " ";
    }

    return 0;   
}


