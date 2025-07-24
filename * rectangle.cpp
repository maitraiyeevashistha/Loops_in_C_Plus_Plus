#include <iostream>
using namespace std;
int main() {
    int i,j,k;
    int n=5;
    for( i=1;i<=n;i++){
        for( j=1;j<=n-1;j++){
            for(k=1;k<=1;k++){
                cout<<"*";
            }
            cout<<" ";
        }
        cout<<endl;
    }

    return 0;
}

/*output:
* * * * 
* * * * 
* * * * 
* * * * 
* * * * 
*/
