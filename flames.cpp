#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    // Write C++ code here
    string str1,str2,ans;
    cout<<"Enter your Name : ";
    cin>>str1;
    cout<<"Enter your Crush Name : ";
    cin>>str2;
    //cout<<str1<<" "<<str2;
    ::transform(str1.begin(),str1.end(),str1.begin(),::tolower);
    ::transform(str2.begin(),str2.end(),str2.begin(),::tolower);
    //cout<<str1;
    
    
    for(int i=0;i<str1.length();i++)
    {
        for(int j=0;j<str2.length();j++)
        {
            if(str1[i]==str2[j])
            {
                str1.erase(i,1);
                i--;
                str2.erase(j,1);
                break;
            }
        }
    }
    //cout<<str1<<" "<<str2;
   
       int count=str1.length()+str2.length();
    
    cout<<count<<endl;
    if(count==0)
    cout<<"Invalid Name";
    else
    {
        int temp=count;
        ans="FLAMES";
        for(int i=0;i<5;i++)
        {
            temp=count;
            if(temp>ans.length())
            {
                   temp=temp%ans.length();
            }
            if(temp==0)
            temp=ans.length();
            
            ans.erase(temp-1,1);
            
            //cout<<ans<<endl;
            
            string a=ans.substr(0,temp-1);
            string b=ans.substr(temp-1,ans.length()-a.length());
            ans=b+a;
            
            //cout<<ans<<endl;
        }
        //cout<<ans;
        if(ans=="F")
            cout<<"Friendship";
        else if(ans=="L")
            cout<<"Love";
        else if(ans=="A")
            cout<<"Affection";
        else if(ans=="M")
            cout<<"Marriage";
        else if(ans=="E")
            cout<<"Enemy";
        else
            cout<<"Siblings";
        
    }
    return 0;
}


