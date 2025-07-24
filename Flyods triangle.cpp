#include<iostream>
using namespace std;

int main(){
    int i,j,k,sum;
    for(i=0;i<4;i++)
    {
        for(k=0;k<=i;k++)
        {
            sum=sum+1;
            cout<<sum<<" ";
        }
    cout<<endl;
    }
    return 0;
}
/*Output:
1 
2 3 
4 5 6 
7 8 9 10 */
