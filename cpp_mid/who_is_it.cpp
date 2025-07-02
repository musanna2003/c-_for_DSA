#include <bits/stdc++.h>

using namespace std;

class Student{
    public:
    int id;
    char name[100];
    char sec;
    int marks;
};


int main()
{
    // Write your code here
    int x;
    cin >> x;
    for(int i = 0; i< x; i++){
        Student std_1;
        Student std_2;
        Student std_3;
        cin >> std_1.id >> std_1.name >> std_1.sec >> std_1.marks;
        cin >> std_2.id >> std_2.name >> std_2.sec >> std_2.marks;
        cin >> std_3.id >> std_3.name >> std_3.sec >> std_3.marks;
        if(std_1.marks >=std_2.marks && std_1.marks >=std_3.marks){
            if (std_1.marks == std_2.marks){
                (std_1.id<std_2.id)? cout << std_1.id << " " << std_1.name << " " << std_1.sec << " " << std_1.marks << endl : cout << std_2.id << " " << std_2.name << " " << std_2.sec << " " << std_2.marks << endl;
            }
            else if (std_1.marks == std_3.marks){
                (std_1.id<std_3.id)? cout << std_1.id << " " << std_1.name << " " << std_1.sec << " " << std_1.marks << endl : cout << std_3.id << " " << std_3.name << " " << std_3.sec << " " << std_3.marks << endl;
            }
            else{
                cout << std_1.id<< " " << std_1.name << " " << std_1.sec << " " << std_1.marks << endl;
            }
        }
        else if(std_2.marks >=std_3.marks){
            if (std_2.marks == std_3.marks){
                (std_2.id<std_3.id)? cout << std_2.id << " " << std_2.name << " " << std_2.sec << " " << std_2.marks << endl : cout << std_3.id << " " << std_3.name << " " << std_3.sec << " " << std_3.marks << endl; 
            }
            else{
                cout << std_2.id  << " "<< std_2.name << " " << std_2.sec << " " << std_2.marks << endl;
            }  
        }
        else{
            cout << std_3.id << " " << std_3.name << " " << std_3.sec << " " << std_3.marks << endl;
        }
    }

    return 0;
}
