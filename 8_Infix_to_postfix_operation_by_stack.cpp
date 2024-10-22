#include<bits/stdc++.h>
#define nl endl
#define blk " "
using namespace std;
int main()
{
  freopen("input.txt","r",stdin);
  string s;
  getline(cin,s);
  cout<<s<<nl;
  string ans="";
  stack<char>st;
  map<char,int>mp;
  mp['^']=3;
  mp['*']=2;
  mp['/']=2;
  mp['+']=1;
  mp['-']=1;

  for(auto it:s){
    if(it=='(' || it==')' || it=='^' || it=='*' || it=='/' || it=='+' || it=='-'){
        if(it==')')
        {
        while(!st.empty())
        {
            if(st.top()=='('){
                st.pop();
                break;
               }
            if(st.top()!='(')ans+=st.top();
            st.pop();
        }
        }
        else{
            if(st.empty() || it=='(')st.push(it);
            else if(mp[it]<mp[st.top()]){
                    if(it!='(')ans+=st.top();
                    st.pop();
                    st.push(it);
            }
            else if(mp[it]>mp[st.top()])st.push(it);
            else if(mp[it]==mp[st.top()]){
                if(it!='(')ans+=it;
                if(st.top()!='(')ans+=st.top();
                st.pop();
            }
        }
        cout<<ans<<nl;
    }
    else ans+=it;
  }
  while(!st.empty()){
    ans+=st.top();
    st.pop();
  }

  cout<<ans<<nl;
}
