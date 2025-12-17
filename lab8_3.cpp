#include <iostream>
#include <string>

using namespace std;

int main(){
    int age;
    int height;
    int price;
    
    string crt;
    
    cout << "Enter your age: ";
    cin >> age;
    
    if(age > 25){
        if(age > 60){
            crt = "Brook";
        }else{
            cout << "Enter your bounty: ";
            cin >> price;
            if(price > 500000000){
                crt = "Jinbe";
            }else{
                crt = "Franky";
            }
        }
    }else{
        cout << "Enter your height: ";
        cin >> height;
        
        if(height < 100){
            crt = "Chopper";
        }else{
            if(height < 180){
                crt = "Usopp";
            }else{
                cout << "Enter your bounty: ";
                cin >> price;
                
                if(price > 1100000000){
                    crt = "Zoro";
                }else{
                    crt = "Sanji";
                }
            }
        }
    }
    
    cout << "Your character = " << crt << endl;
    return 0;
}
/*
"Enter your age: "
"Enter your height: "
"Enter your bounty: "
"Your character = "
"Zoro"
"Sanji"
"Usopp"
"Chopper"
"Franky"
"Brook"
"Jinbe"
*/
