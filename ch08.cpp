#include <iostream>  
using namespace std;  
  
int main() {  
    //Ӌ��MVP��ֵ
    int score , rebounds, assists, screenshots, errors;  
    //ݔ��@��T��ƽ���÷֣��@�壬���������ء�ʧ�`
    int mvp;  
    while(cin >> score >> rebounds >> assists >> screenshots >> errors){  //(�÷�*1������*2���@��*2������*2)��(ʧ�`*2)
        mvp = (score*1 + assists*2 + rebounds*2 + screenshots*2) - (errors*2);  
        if(mvp>=45){  
            cout << "A" << endl;  
        }  
        else if(35 <= mvp && mvp <= 44){  
            cout << "B" << endl;  
        }  
        else if(25 <= mvp && mvp <= 34){  
            cout << "C" << endl;  
        }  
        else if(mvp < 25){  
            cout << "D" << endl;  
        }  
    }  
    return 0;  
}  