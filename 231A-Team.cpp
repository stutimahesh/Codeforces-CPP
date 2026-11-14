#include<iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    cout << endl;

    vector<vector<int>> arr (n, vector<int>(3));

    for(int i=0; i<n; i++){
        for(int j=0; j<3; j++){
            cin >> arr[i][j];
        }
        cout << endl;
    }

    int count=0;
    for(int i=0 ; i<n; i++){
        int solve=0;
        for(int j=0; j<3; j++){
            if(arr[i][j]==1){
                solve++;
            }
        }
        if(solve>=2){
            count++;
        }
    }
    cout<< count <<endl;
    return 0;
}