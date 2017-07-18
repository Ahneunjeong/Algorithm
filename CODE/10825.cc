#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct Student{
	string name;
	int korean;
	int english;
	int math;
};
bool cmp(const Student &u, const Student &v){
	if(u.korean != v.korean)
		return u.korean > v.korean;
	else if(u.korean == v.korean){
				 if(u.english != v.english){
					 		return u.english < v.english;
			
				 }else if(u.english == v.english){
					 if(u.math != v.math){
						 return u.math > v.math;
					 }else return u.name < v.name;
				 }
	}
	
}
int main(){
	int n;
	cin >> n;
	vector<Student> a(n);
	for(int i=0; i<n; i++){
		cin>> a[i].name >> a[i].korean >> a[i].english >> a[i].math;
	}
	stable_sort(a.begin(), a.end(), cmp);
	for(int i=0; i<n; i++){
		cout <<  a[i].name  << '\n';
	}
}