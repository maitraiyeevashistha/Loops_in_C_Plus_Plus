#include <iostream>
using namespace std;

int main() {
    for(int i =1;i<=2;i++){
        cout<<"outer :" <<i<<"\n";
        for(int j=1;j<=3;j++){
            cout<<"inner :"<<j<<"\n";
        }
    }
    return 0;
}
/*output
outer :1
inner :1
inner :2
inner :3
outer :2
inner :1
inner :2
inner :3
*/
