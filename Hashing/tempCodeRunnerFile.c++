#include<bits/stdc++.h>
using namespace std;

void Count_queries (vector<int> num, vector<int> arr){
    int count=0;
    int n = num.size();
    int m = arr.size();
    for(int i = 0; i <n; i++){
        for(int j =0; j <m; i++){
            if(num[i] == arr[j]){
                count++;
            }
        }
        cout<<count<< " ";
    }
    
}

int main(){
    int n;
    int m;
    cout << "Enter the size of the query arrays: ";
    cin >> n;
    cout << "Enter the size of the arr arrays: ";
    cin >> m;
    vector<int> num(n), arr(m);
    cout << "Enter elements of the query array: ";
    for(int i=0; i<n; i++)
        cin >> num[i];
    cout << "Enter elements of the arr array: ";
    for(int i=0; i<m; i++)
        cin >> arr[i];
    Count_queries(num, arr);
    return 0;
}
