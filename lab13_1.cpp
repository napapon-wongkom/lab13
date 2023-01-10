#include<iostream>
using namespace std;
int fibonacci(int);
int main(){
    int x;
    cin >> x;
    cout << fibonacci(x);
    return 0; 
}
int fibonacci(int x){
    int ans;
    if(x==0){
        ans = 0;
    }else if(x==1){
        ans =1;
    }else if(x>1){
        ans = fibonacci(x-1) + fibonacci(x-2);
    }
    return ans;
}
