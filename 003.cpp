#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int sum =0;
    for(int i = 0;i<n; i++){
        int side;
        cin >> side;
        int peri = 3*side;
        sum +=peri;

    }
    cout << sum <<endl;
    return 0;
}

