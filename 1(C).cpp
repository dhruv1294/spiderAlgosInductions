#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[6] = {10,8,7,16,9,43};
    int ans[6];
    int query[4];
    cout << "Enter product of 1 and 2" << endl;
    cin >> query[0];
    cout << "Enter product of 1 and 3" << endl;
    cin >> query[1];
    cout << "Enter product of 4 and 5" << endl;
    cin >> query[2];
    cout << "Enter product of 4 and 6" << endl;
    cin >> query[3];
    for(int i=0;i<6;i++){
        if(query[0]%arr[i]==0 && query[1]%arr[i]==0){
            ans[0]=arr[i];
            ans[1]=query[0]/ans[0];
            ans[2]=query[1]/ans[0];
        }
        if(query[2]%arr[i]==0 && query[3]%arr[i]==0){
            ans[3]=arr[i];
            ans[4]=query[2]/ans[3];
            ans[5]=query[3]/ans[3];
        }

    }
    for(int i=0;i<6;i++){
        cout << ans[i] << " ";
    }

}
