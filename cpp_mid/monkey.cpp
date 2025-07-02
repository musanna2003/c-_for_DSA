#include <bits/stdc++.h>

using namespace std;



int main()
{
    // Write your code here
    char y[100001];
    while(fgets(y, 100001, stdin)){
    
        int l = strlen(y);
        sort(y,y+l);
        for (int i =0 ; i<l; i++){
            if(y[i]>='a' && y[i]<='z' ){
                cout<<y[i];
            }
        }
        cout << "\n";
    }

    return 0;
}