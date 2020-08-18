#include<bits/stdc++.h>

using namespace std;

int main(){


   int n;
   cin >> n;

   string s;
   cin >> s;

   if(n>2){
        int c = 0;
       for(int i=1;i<n;i++){
            if(s[i]!='0'){
                c = 1;
                break;
            }
       }
        int d = 0;
       for(int i=1;i<n;i++){
            if(s[i]!='1'){
                d = 1;
                break;
            }
       }
       if(c==0 || d==0){
            cout << -1 << endl;
       }else{
           string b = s;
           int ind;
            for(int i=n-1;i>=0;i--){
                if(s[i]=='0'){
                    ind  = i;
                    break;
                }
            }

            for(int i=ind;i<n;i++){
                if(s[i]=='1'){
                    s[i] = '0';
                }else{
                    s[i] = '1';
                }
            }

            for(int i=n-1;i>=0;i--){
                if(b[i]=='1'){
                    ind  = i;
                    break;
                }
            }

            for(int i=ind;i<n;i++){
                if(b[i]=='1'){
                    b[i] = '0';
                }else{
                    b[i] = '1';
                }
            }
            cout << b <<" "<< s<< endl;

       }
   }else{
        cout << -1 <<  endl;
   }

}
