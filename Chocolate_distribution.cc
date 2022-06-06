class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    long long i=0,j=m-1,ans=INT_MAX;
    sort(a.begin(),a.end());
    while(i<n&&j<n)
    {
        ans=min(ans,abs(a[i]-a[j]));
        i+=1;
        j+=1;
    }
    return ans;
 }   
};

// { Driver Code Starts.
int main() {
	long long t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		vector<long long> a;
		long long x;
		for(long long i=0;i<n;i++)
		{
			cin>>x;
			a.push_back(x);
		}
		
		long long m;
		cin>>m;
		Solution ob;
		cout<<ob.findMinDiff(a,n,m)<<endl;
	}
	return 0;
}
