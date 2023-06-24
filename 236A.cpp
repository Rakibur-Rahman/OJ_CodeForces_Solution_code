#include<bits/stdc++.h>
using namespace std;

int main(){
       string s;
       cin>>s;
            int len=s.size();
                   int l=0;
            
       for(int i=0;i<len-1; i++){
          
                for(int j=i+1; j<len; j++) {
                if(s[i]==s[j]) {
                   
                      
                      s[j]='0';
                    
                
             }
             
              }
                 
              
               
              }
              
                
              
                for(int i=0; i<len; i++){
                
                    if(s[i]!='0'){
                    
                        l++;
                    
                    }
                
                }
              
               if(l%2==1){
              
              
                     cout<<"IGNORE HIM!"<<endl;
              
              }
              else{
              
                   cout<<"CHAT WITH HER!"<<endl;
              
              
              }
   return 0;

    }
