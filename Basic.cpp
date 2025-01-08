#include <iostream>

using namespace std;


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

    return 0;
    
}

