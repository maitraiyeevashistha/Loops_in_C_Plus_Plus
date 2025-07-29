/* Name : Maitraiyee Vashistha 
PRN : 24070123057
Batch : E&TC A-3 */

#include<iostream>
using namespace std;

int main(){
    int num, rev = 0;
    cout<<"Enter a number: ";
    cin>>num;
    while(num != 0){
        int digit = num % 10;
        rev = rev*10 + digit;
        num = num/10;
    }
    cout<<"Reversed num : "<<rev;
    return 0;
}

/*Sample Output: 
Enter a number: 22069
Reversed num : 96022
/