#include <iostream>

using namespace std;

int main()
{
    int n;
    int cnt=1;
    while(n!=1){
        if(n%2==0){
            cnt++;
            n=n/2;
        }
        else{
            cnt++;
            n=3*n+1;
        }
    }
return cnt;
}

