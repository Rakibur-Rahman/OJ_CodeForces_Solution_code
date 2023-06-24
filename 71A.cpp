#include<bits/stdc++.h>
#include<string>

using namespace std;

int main(){

int n,i;
cin>>n;
string s;
for(i=1; i<=n; i++ ){

   cin>>s;
   int len=s.size();
   if(len>10){

    cout<<s[0]<<len-2<<s[len-1]<<endl;


   }
   else{

    cout<<s<<endl;


   }


}
return 0;


}
