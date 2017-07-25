#include <queue>
#include <iostream>
#include <string>
using namespace std;
int main(){
	int n;
	cin >> n;

	queue<int> q;

	while(n--){
		string cmd;
		cin >> cmd;
		if(cmd=="push"){
			int a;
			cin >> a;
			q.push(a);
		}else if(cmd=="empty"){
			cout<< q.empty() << '\n';
		}else if(cmd=="size"){
			cout<< q.size() <<'\n';
		}else if(cmd=="front"){
			cout<< (q.empty()? -1:q.front()) <<'\n';
		}else if(cmd=="back"){
			cout<< (q.empty()? -1:q.back()) <<'\n';
		}else if(cmd=="pop"){
			cout<< (q.empty()? -1:q.front()) <<'\n';
			if(!q.empty()){
				q.pop();
			}
		}
	}
	
	return 0;
}