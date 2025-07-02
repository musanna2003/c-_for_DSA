#include <bits/stdc++.h>

using namespace std;

int *sort_it(int x){
    
    int *arr = new int[x];
    for(int i =0; i < x; i ++){
        cin >>  (arr)[i];
    }
    sort(arr,arr+x,greater<int>());
    return arr;
}

int main()
{
    int x;
    cin >> x;
    int *sor = sort_it(x);
    for(int i =0; i < x; i ++){
        cout << sor[i] << " ";
    }

    return 0;
}