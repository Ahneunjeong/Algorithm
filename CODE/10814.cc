#include <algorithm>
#include <vector>
#include <string>
#include <iostream>
using namespace std;
struct Person{
	int age;
	string name;
};
bool cmp(const Person &n, const Person &u){
	return n.age<u.age;
}
int main(){
	int n;
	cin >> n;
	vector<Person> a(n);
	for(int i=0; i<n; i++){
		cin>> a[i].age >> a[i].name;
	}
	stable_sort(a.begin(), a.end(), cmp);
	for(int i=0; i<n; i++){
		cout<< a[i].age << ' ' << a[i].name << '\n';
	}
	return 0;
}