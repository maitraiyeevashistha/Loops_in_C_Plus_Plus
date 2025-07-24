#include <iostream>
using namespace std;
int main() 
{
    int r = 5;

        for (int i = r; i >= 1; i--) {
       
        for (int j = 0; j < (r- i); j++) {
            cout << " ";
        }
       
        for (int k = 0; k < (2 * i - 1); k++) {
            cout << "*";
        }
        cout <<endl;
    }

    
    for (int i = 2; i <= r; i++) {
        
        for (int j = 0; j < (r - i); j++) {
            cout << " ";
        }
        
        for (int k = 0; k < (2 * i - 1); k++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
