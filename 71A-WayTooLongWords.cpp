#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string word;
        cin >> word;
        int n= word.length();

        if(n<=10){
            cout << word << endl;
        }else{
            cout << word[0] << n-2 << word[n-1] <<endl;
        }
    }
    return 0;
}