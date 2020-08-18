#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,r,x,y;
    cin >> n >> r >> x >> y;
    long int sum = r;
    int i1[n],i2[n];
    for(int i=0;i<n;i++){
        cin >> i1[i];
    }
    for(int i=0;i<n;i++){
        cin >> i2[i];
        if(i1[i]){
            if(i2[1]){
                sum+=x;
            }else{
            sum-=y;
            }
        }
    }

    if(sum > r){
        cout << "promoted" << endl;
    }else if (sum == r){
    cout << "no change" << endl;
    }else{
    cout << "demoted" << endl;
    }



}
