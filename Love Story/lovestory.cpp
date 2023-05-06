#include<iostream>
#include<string>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif  
    int t;
    cin>>t;  
    for(int i=1;i<=t;i++){
        string s;
        string r="codeforces";
        cin>>s;
        int k=0;
        for(int j=0;j<10;j++){
            
            if(s[j]!=r[j]){
                k++;
            }
        }
        cout<<k<<endl;
    }
    return 0;

}