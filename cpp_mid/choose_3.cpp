#include <bits/stdc++.h>

using namespace std;

int fun(int arr[],int l, int s){
    for(int j = 0; j< l-2; j++){
       for(int k = j+1; k< l-1; k++){
            for(int m = k+1; m< l; m++){
                if(arr[j]+arr[k]+arr[m]==s){
                    return 1;
                }
            }
        } 
    }
    return 0;
}



int main()
{
    // Write your code here
    int t;
    cin >> t;
    for (int i = 0; i < t; i ++){
        int l,s;
        cin >> l >> s;
        if(l<=2){
            cout<<"NO\n";
            break;
        }
        int arr[l];
        for (int j = 0; j< l; j++){
            cin >> arr[j];
        }
        fun(arr,l,s)?cout << "YES" : cout << "NO";
    }
    

    return 0;
}