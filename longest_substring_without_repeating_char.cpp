#include<bits/stdc++.h>
using namespace std;

    int substring(string s){
        int ft=0,pt=0,st=1,m=0;
        if(s.size()==0){
            return 0;
        }
        if(s.size()==1){
            return 1;
        }
        while(st<=s.size()-1&&ft<=st){
                pt = ft;
                while(pt<st){
                    if(s[pt]==s[st]){
                        ft = pt+1;
                    }
                    pt++;
                }
                m = max(m,st-ft+1);
                st++;
        }
        return m;
    }

    int main(){
        string s;
        cin>>s;
        cout<<substring(s)<<endl;
        return 0;
    }