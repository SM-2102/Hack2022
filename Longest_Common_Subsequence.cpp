int help(string s,string t,int n,int m,int **dp){
    if(n==0||m==0)
        return 0;
    
    if(dp[n][m]!=-1)
        return dp[n][m];
    
     if(s[n-1]==t[m-1])
           dp[n][m]=1+help(s,t,n-1,m-1,dp);
     else
           dp[n][m]=max(help(s,t,n,m-1,dp),help(s,t,n-1,m,dp));
    
    return dp[n][m];
}

int lcs(string s, string t)
{
    int n=s.size();
    int m=t.size();
    
   int **dp = new int* [m+1];
    for(int i=0;i<m+1;i++)
        dp[i]= new int[n+1];     
    
    for(int i=0;i<n+1;i++){
        for(int j=0;j<m+1;j++){
            dp[i][j]=-1;
        }
    }
    
    return help(s,t,n,m,dp);    
}
