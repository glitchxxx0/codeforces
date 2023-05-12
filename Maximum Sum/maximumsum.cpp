// C++ program to rearrange a string to
// make palindrome.
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
long long int  solve(vector<int> v, int k,int index,int n,long long int sum,vector<vector<int>> &dp){
	if(index+1>=n){
		return v[index];
	}
	if(k==0){
		return 0;
	}
	if(dp[k][n]!=-1){
		return dp[k][n];
	}
	long long int a=v[index]+v[index+1]+solve(v,k-1,index+2,n,sum,dp);
	long long int b=v[n-1]+solve(v,k-1,index,n-1,sum,dp);
	return dp[k][n]=min(a,b);
}
int main(){
	#ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif  
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
		int n,k;
		cin>>n>>k;
		vector<int> v;
		long long int sum=0;
		for(int j=0;j<n;j++){
			int x;
			cin>>x;
			v.push_back(x);
			sum+=x;
		}
		sort(v.begin(),v.end());
		vector<vector<int>> dp(k+1,vector<int>(n+1,-1));
		cout<<sum-solve(v,k,0,n,0,dp)<<endl;

	}
}