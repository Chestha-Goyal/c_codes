#include<iostream>
#include<vector>
int main()
{
	using namespace std;
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		vector<char> ch(s.begin(),s.end());
		vector<char> ans;
		for(int i=0;i!= ch.size();++i)
		{
			int j=0, count=0;
			while(j!=ans.size())
			{
				if(ans[j] == ch[i])
				{
					count = 1;
					break;
				}
				j++; 
			}
			if(count == 0)
			ans.push_back(ch[i]);
		}
		cout<<ans.size()<<" ";
	}
}
