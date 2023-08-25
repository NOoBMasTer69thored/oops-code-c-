#include<iostream>
using namespace std;
void reverse(string &s, int i, int j){   
    while(i<j){
        swap(s[i],s[j]);
        i++;j--;
    }
}
string reverseWords(string s) {
    int st=0,end=0,n=s.size();
    
    for(int i=0;i<n;i++){
        if(s[i]==' '){                 
            end=i-1;                 
            reverse(s,st,end); 
            st=i+1;
        }
    }
    reverse(s,st,n-1);                
    return s;                         
}
int main()
{
    string s;
    cout<<"Enter the string: ";
    getline(cin,s);
    cout<<"The reversed string is: "<<reverseWords(s)<<endl;
     cout << "*********************************************" << endl;
    cout << "Program Prepared & Executed by:AASHISH SUBEDI    CSE3(K), Class Roll no: 1" << endl;
    cout << "*********************************************" << endl;
    return 0;
}