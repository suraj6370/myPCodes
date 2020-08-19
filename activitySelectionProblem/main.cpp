#include <bits/stdc++.h>
using namespace std;

bool sortbysec(const pair<int,int> &a, const pair<int ,int> &b)
{
    return(a.second
    b.second);
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     
class ActivitySelect
{
    int N;
    vector<pair<int,int> > activity;
    int minValue();
    public :
    ActivitySelect(int n);
};
ActivitySelect::ActivitySelect(int n)
{
    N=n;
    for(int i=0;i<N;i++)
    {
        int p,q;
        cin>>p>>q;
        activity.push_back(make_pair(p,q));
    }
    int l=minValue();
    cout<<"maximum number of job is"<<l<<endl;
}
int ActivitySelect::minValue()
{
    sort(activity.begin(),activity.end(),sortbysec);
    
    int l=1;
    int p=activity[0].second;
    for(int i=1;i<N;i++)
    {
        if(activity[i].first > p)
        {
            l++;
            p=activity[i].second;
        }
    }
  return(l);       
}
int main(void)
{
    int n;
    cin>>n;
    class ActivitySelect a(n);
	return 0;
}
