#include <string.h>  
#include<iostream>  
using namespace std;  
int main()  
{  
    int i,j;  
    char str1[100];  
    cout << "輸入一個字串: ";  
    cin >> str1;  
    j = strlen(str1);  
   cout << "輸出:";  
    for(i = j;i>=1;i--){  
        cout << str1[i];  
    }  
    cout << str1[0] << endl;  
}

