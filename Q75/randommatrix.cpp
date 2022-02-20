#include<iostream>
#include<cstdlib>
#include<ctime>
#include<iomanip>
using namespace std;

int main(){
    unsigned seed;
    seed = time(0);
    srand(seed);
    // cout << rand() << "\t";
    // cout << rand() << "\t";
    // cout << rand() << endl;
    cout << seed;
    int arr[3][3] ;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            arr[i][j] = rand() % 1;
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout <<setw(4)<< arr[i][j];
        }
        cout << endl;
    }
    return 0;
}