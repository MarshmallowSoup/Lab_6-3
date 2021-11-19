#include <iostream>
#include <time.h>
#include <iomanip>
using namespace std;

template <typename D>
void Create(D *a, const int size, const D Low, const D High)
{
    for (int i = 0; i < size; i++)
        a[i] = D(Low + rand() % (High - Low + 1));
    
}

int Counter(int* p, const int k) {
    int n = 0;
    for (int i = 0; i < k; i++)
        if (p[i] % 2 != 0) {
            n++;
        }
    return n;
}

template <typename T>
    int Count(T *p,const int k) {
        int n = 0;
        for (int i = 0; i < k; i++)
            if (p[i] % 2 != 0) {
                n++;
            }
        return n;
    }

template <typename Q>    
void Print(Q *m, const int size) {
    cout << fixed;
    cout << "================================================" << endl;
    cout << "| " << m[0];
    for (int i = 1; i < size;) cout << ' ' << setw(2) << m[i++];
    cout << " |" << endl;
   
}

int main()
{
    srand((unsigned)time(NULL));

    const int t = 15;
    int Low = 11;
    int High = 99;
    int a[t];
    Create<int>(a, t, Low, High);  
    Print<int>(a,t);
    cout << "================================================" << endl;

    cout << "| " << "Quantity of odd numbers = " << setw(2) << Counter(a, t) << setw(18) << " |" << endl;

    cout << "================================================" << endl;

    cout << "|" << "Quantity of odd numbers(template method) = " << setw(2) << Count<int>(a, t) << " |" << endl;

    cout << "================================================" << endl;

}