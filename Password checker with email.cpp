/*Name : Maitraiyee Vashistha 
PRN : 24070123057
E&TC A-3*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int password;
    string email;
    int user_password;
    cout << "Enter your email : ";
    cin >> email;
    if(email == "xyz@gmail.com"){
        password = 123;
         cout << "Enter the password : ";
         cin >> user_password;
            while(password > 0){
                if(password != user_password){
                   cout << "Incorrect Password !" << endl;
                    cout << "Enter the password : ";
                    cin >> user_password;
                }
                else{
                    cout << "account unlocked !";
                    break;
                    }
            }
    }
    else if(email == "abc.gmail.com"){
        password = 456;
         cout << "Enter the password : ";
         cin >> user_password;
            while(password > 0){
                if(password != user_password){
                   cout << "Incorrect Password !" << endl;
                    cout << "Enter the password : ";
                    cin >> user_password;
                }
                else{
                    cout << "account unlocked !";
                    break;
                    }
            }
    }
    else if(email == "def@gmail.com"){
        password = 789;
         cout << "Enter the password : ";
         cin >> user_password;
            while(password > 0){
                if(password != user_password){
                   cout << "Incorrect Password !" << endl;
                    cout << "Enter the password : ";
                    cin >> user_password;
                }
                else{
                    cout << "account unlocked !";
                    break;
                    }
            }
    }
    else{
        cout << "incorrect email" << endl;
    }
    return 0;
}
