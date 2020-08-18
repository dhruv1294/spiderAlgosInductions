#include<bits/stdc++.h>

using namespace std;

int ans = 0;

int degree(string s){
    int a = s.size();
    if(a==1){
        return 0;
    }else{
        int c = 0;
        string b = "";
        for(int i=0;i<a/2;i++){
            if(s[i]!=s[a/2+i]){
                c = 1;
                break;
            }else{
                b+=s[i];
            }
        }

        if(c==0){
           ans++;
           degree(b);
        }else{
            return 0;
        }
    }
}

int main(){


    int n;
    cin >> n;

    string s;
    cin >> s;

    degree(s);
    cout << ans << endl;
}
