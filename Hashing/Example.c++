#include<bits/stdc++.h>
using namespace std;

void Count_queries (vector<int> num, vector<int> arr){
    int n = num.size();
    int m = arr.size();
    for(int i = 0; i <n; i++){
        int count=0;
        for(int j =0; j <m; j++){
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
    cout << "Enter the size of the num array: ";
    cin >> n;
    cout << "Enter the size of the arr array: ";
    cin >> m;
    vector<int> num(n), arr(m);
    cout << "Enter elements of the num array: ";
    for(int i=0; i<n; i++)
        cin >> num[i];
    cout << "Enter elements of the arr array: ";
    for(int i=0; i<m; i++)
        cin >> arr[i];
    Count_queries(num, arr);
    return 0;
}
