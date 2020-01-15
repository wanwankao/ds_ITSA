#include <iostream>  
using namespace std;  

int main(){ 
    int M, N;  
    while(cin >> M >> N){  
        for(int i = 1;i <= M; i++){  
            for(int j = 1;j <= N;j++){  
                cout << i << " x " << j << " = " << i*j << endl;  
            }  
        }  
    }  
    return 0;  
}  
