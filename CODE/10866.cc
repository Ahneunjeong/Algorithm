#include <string>
#include <deque>
#include <iostream>
using namespace std;
int main(){
	int n;
	cin >>n;

	deque<int> d;

	while(n--){
		string cmd;
		cin >> cmd;
		if(cmd=="push_front"){
			int a;
			cin>> a;
			d.push_front(a);
		}else if(cmd=="push_back"){
			int b;
			cin>> b;
			d.push_back(b);
		}else if(cmd=="empty"){
			cout<< d.empty() <<'\n';
		}else if(cmd=="size"){
			cout<<d.size() <<'\n';
		}else if(cmd=="front"){
			cout<< (d.empty()? -1:d.front()) <<'\n';
		}else if(cmd=="back"){
			cout<< (d.empty()? -1:d.back()) <<'\n';
		}else if(cmd=="pop_front"){
			cout<< (d.empty()? -1:d.front())<<'\n';
			if(!d.empty()){
				d.pop_front();
			}
		}else if(cmd=="pop_back"){
			cout<< (d.empty()? -1:d.back())<<'\n';
			if(!d.empty()){
				d.pop_back();
			}
		}
	}
			return 0;
}