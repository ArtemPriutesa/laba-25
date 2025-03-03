#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "n: ";
    cin >> n;
    int a[n];
    int* p;

    p=a;
    for (int i=0;i<n;i++) {
        cin>>*(p+i);
    }

    int t = 0;
    cout<<endl;
    for (int i=1;i<n;i++) {
        if(*(p+i)>*(p+i-1)) {
            cout << (i + 1) << " ";
            t++;
        }
    }
    cout << ": " << t << endl;

    return 0;
}
