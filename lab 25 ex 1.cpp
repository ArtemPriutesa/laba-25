#include <iostream>
using namespace std;

int main(){
	int n;
	float *p;
	cin>>n;
	float a[n];
	p=a;
	for(int i=0;i<n;i++){
		cin>>*p;
		p++;
	}
	p=a;
	float min=a[0];
	float* minPtr=nullptr;
	for (int i=3;i<n;i+=2) {
        if (*(p+i)<min) { 
            min=*(p+i);
            minPtr=p+i; 
        }
    }
	cout<<min<<endl<<*minPtr;	
	return 0;
}
	
