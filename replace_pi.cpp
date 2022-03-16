#include<iostream>
#include<string>
#include<vector>

using  namespace std;
string replace_pi(string &p);
{
    if(p.length()<=0)
    {
        return ;
    }
    string sm=replace_pi(p+1);
    if(p[0]=='p' && sm[0]=='i')

}
int main()
{
    string info;
    //vector<string> info1;
    cin>>info;
    cout<<sizeof(char)<<endl;
    //cout<<info.size();

    cout<<replace_pi(info); 
    return 0;
}