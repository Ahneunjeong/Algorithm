#include <iostream>
#include <string>
using namespace std;
string vps(string str){
	int cnt=0;
	for(int i=0; i<str.size(); i++){
		if(str[i]=='('){
			cnt+=1;
		}else {
			cnt-=1;
		}
		if(cnt<0){
			return "NO";
		}
		}
		if(cnt==0){
			return "YES";
	}
	else{
		return "NO";
	}
}
int main(){
	int n;
	cin>> n;
	while(n--){
		string s;
		cin>>s;
		cout<<vps(s)<<'\n';
	}
}
