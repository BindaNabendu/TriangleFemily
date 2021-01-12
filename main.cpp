#include <iostream>
using namespace std;
void firstTriangle(int size){
    for (int i = 0; i <= size; i++) {
        for (int j = 0; j <= i; j++) {
            cout<<"* ";
        }
        cout<<endl;
    }
}
void secondTriangle(int size){
    for (int i = 0; i <= size; i++) {
        for (int j = 0; j <= size - i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}
void thirdTriangle(int size){
    for (int i = 0; i <= size; i++) {
        for (int j = size - i; j >= 0; j--) {
            if (i==0){
                cout<<"* ";
            }else if((j== size-i) || (j == 0)){
                cout<<"* ";
            } else{
                cout << "  ";
            }
        }
        cout << endl;
    }
}
void fourthTriangle(int size){
    for (int i = 0; i <size; i++) {
        for (int j = size-i; j>0; j--) {
            cout << "  ";
            if(j==1){
                for (int k = 0; k <= i*2; k++) {
                    if(k%2==0){
                        cout << "* ";
                    } else{
                        cout << "  ";
                    }
                }
            }
        }
        cout << endl;
    }
}
void fifthTriangle(int size){
    for (int i = 0; i <size; i++) {
        for (int j = 0; j<=i; j++) {
            cout << "  ";
            if(j==i){
                for (int k = 0; k < (size-i)*2; k++) {
                    if(k%2==0){
                        cout << "* ";
                    } else{
                        cout << "  ";
                    }
                }
            }
        }
        cout << endl;
    }
}
void sixthTriangle(int size){
    for (int i = 0; i <size; i++) {
        for (int j = size-i; j>0; j--) {
            cout << "  ";
            if(j==1){
                for (int k = 0; k <= i; k++) {
                    if(k==0 || (k==i)){
                        cout << "*   ";
                    }else if(i == size-1){
                        cout << "*   ";
                    } else{
                        cout << "    ";
                    }
                }
            }
        }
        cout << endl;
    }
}

int main() {
    const int size = 6;
    int userCommand;
    cout<<"Please enter your command to see specific triangle:";
    cin>>userCommand;

    while (userCommand != 0){
        if (userCommand == 1){
            firstTriangle(size);
        } else if(userCommand == 2){
            secondTriangle(size);
        } else if(userCommand == 3){
            thirdTriangle(size);
        }else if (userCommand == 4){
            fourthTriangle(size);
        } else if(userCommand == 5){
            fifthTriangle(size);
        } else if(userCommand == 6){
            sixthTriangle(size);
        }else{
            cout<<"You Enter wrong information"<<endl;
        }
        cout<<"Please enter your command to see specific triangle:";
        cin>>userCommand;

    }
    return 0;
}
