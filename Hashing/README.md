**Count the number of occurrences of each element in `num` array in `arr` array.**

**Brute Force Approach**

```cpp
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

```
**Input**
```c++
Enter the size of the num array: 6
Enter the size of the arr array: 6
Enter elements of the num array: 1 2 3 4 5 6
Enter elements of the arr array: 1 3 1 9 2 7

````

**Output**

```c++
2 1 1 0 0 0
```

**Optimize approach using Hash**

```cpp


```