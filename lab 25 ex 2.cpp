#include <iostream>
using namespace std;

void nepererv_seg(float* a, int n) {
    for (int i = 0; i < n - 2; ++i) {
        if (*(a + i) > *(a + i + 1) && *(a + i + 1) > *(a + i + 2)) {
            cout << "dilanka: "<< i << ", " << i + 1 << ", " << i + 2 << endl;
        }
    }
}

int main() {
    int n;
    cout << "n: ";
    cin >> n;
    float* a = new float[n];
    
    cout << "a: " << endl;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    nepererv_seg(a, n);
    
    delete[] a;
    return 0;
}
