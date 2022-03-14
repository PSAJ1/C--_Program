#include<iostream>
#include <string.h>
using namespace std;
bool helper(string n1,int start,int end)
{
    if(end-start==0 || end-start== 1)
    {
        return true;
    }
    else if(n1[start]==n1[end])
    {
        return helper(n1,start+1,end-1);
    }
    else{
        return false;
    }
}
 bool check_palin(string n)
 {
     return (helper(n,0,n.length()-1));
 }
int main(){
    string name;
    cin>>name;

    cout<<check_palin(name);
    return 0;
}