#include <iostream>
using namespace std;

int main(){
    int n;
    int j=1;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        for (int k = 0; k < i; k++)
        {
            cout<<j<<" ";
            j++;
        }
        cout<<endl;
    }
    


    return 0;
}