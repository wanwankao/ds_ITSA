#include <iostream>  
using namespace std;  
//�P�_�y�Ц���B
int main(){
    int x, y;  
    while(cin >> x >> y){  
        if(x == 0 && y == 0){ //���I
            cout << "Origin" << endl;  
        }  
        else if(x != 0 && y == 0){ //x�b 
            cout << "x-axis" << endl;  
        }  
        else if(x == 0 && y != 0){ //y�b 
            cout << "y-axis" << endl;  
        }  
        else{ //�P�_�H�� 
            if(x > 0 && y > 0){//�Ĥ@�H��  
                cout << "1st Quadrant" << endl;  
            }  
            else if(x < 0 && y > 0){//�ĤG�H��
                cout << "2nd Quadrant" << endl;  
            }  
            else if(x < 0&& y < 0){ 
                cout << "3rd Quadrant" << endl;  
            }  
            else{  
                cout << "4th Quadrant" << endl;  
            }  
        }  
    }  
    return 0;  
}  