#include <iostream>  
using namespace std;  
//1~N�������`�M  
int main() {  
    int N, sum;  //1~N�A�`�M
    while(cin >> N){  
        for(int i = 1;i <= N;i++){  //�p���`�M  
            sum = sum + i;  
        }  
        for(int j = 1;j <= N;j++){  //��X�榡�n�D
            if(j == 1){  
                cout << "1";  
            }  
            else{  
                cout << " + " << j;  
            }  
        }  
        cout << " = " << sum << endl;  
        sum=0;  
    }  
    return 0;  
}  