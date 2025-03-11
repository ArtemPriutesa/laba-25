#include <iostream>
using namespace std;
// Функція для вставлення елементів
void vstavka(float* &a, int &n) {
    // Підрахунок кількості додаткових елементів
    int extraCount = 0;
    float sum = 0;
    
    for (int i = 0; i < n; ++i) {
        sum += a[i];
        //перетворення типу
        if (static_cast<int>(a[i]) % 5 == 0) {
            ++extraCount;
        }
    }
    
    // Створення нового масиву із врахуванням додаткових елементів
    float* newA = new float[n + extraCount];
    
    int j = 0;
    sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += a[i];
        newA[j++] = a[i];
        
        if (static_cast<int>(a[i]) % 5 == 0) {
            newA[j++] = sum;
        }
    }
    
    // Заміна старого масиву на новий
    delete[] a;
    a = newA;
    n += extraCount;
}

int main() {
	
    int n;
    cout<<"n: ";
    cin>>n;
    float* a = new float[n];
    cout<<endl;
    for(int i=0;i<n;i++){
    	cin>>a[i];
	}
    
    vstavka(a, n);
    
    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    
    delete[] a;
    return 0;
}
