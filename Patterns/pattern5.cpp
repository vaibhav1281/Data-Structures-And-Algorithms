#include<bits/stdc++.h>
using namespace std;

void pattern5(int n){
    for(int i = 0; i < n; i++){
        for(int j =n ; j >i; j--){
            cout <<n-j+1<<" ";
        }
        cout << "\n";
    }
}
int main(){
    int n=5;
    pattern5(n);
}