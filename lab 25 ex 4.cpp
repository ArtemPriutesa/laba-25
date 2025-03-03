#include <iostream>
using namespace std;

int main(){
	int *p,n;
	cin>>n;
	int a[n],i,r;
	p=a;
	for(i=0;i<n;i++){
		cin>>*p;
		p++;
	}
	p=a;
	for(i=0;i<n;i++){
		if(*p<0){
			r++;
		}
		p++;
	}
	
	
	
	
	cout<<endl<<r;
	
	
	
	return 0;
}
