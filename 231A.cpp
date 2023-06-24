#include<bits/stdc++.h>
using namespace std;

int main(){
        int n;
        cin>>n;
             int a,b,c,cnt=0;
                
        for(int i=0; i<n; i++){
        
             cin>>a>>b>>c;
                      int sum=a+b+c;
             if(sum==2 || sum>2){
                   cnt++;
             
             }
                                 
        
        
        }
        
        cout<<cnt<<endl;
   return 0;


}
