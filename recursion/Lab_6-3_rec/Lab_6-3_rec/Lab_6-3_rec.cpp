#include <iostream>
#include <time.h>
#include <iomanip>
using namespace std;


template <typename D>
void Create(D *a, const int size, const D Low, const D High, int i)
{
    a[i] = Low + rand() % (High - Low + 1);
    if (i < size - 1)
        Create(a, size, Low, High, i + 1);
}

int Counter(int a[], const int n, int i)
{
    if (i < n)
    {
        if (a[i] % 2 != 0)
            return 1 + Counter(a, n, i + 1);
        else
            return Counter(a, n, i + 1);
    }
    else return 0;
}

template <typename T>
int Count(T a[], const int n, int i)
{
    if (i < n)
    {
        if (a[i] % 2 != 0)
            return 1 + Count(a, n, i + 1);
        else
            return Count(a, n, i + 1);
    }
    else return 0;
}


template <typename Q>
void Print(Q* a, const int size,int i) {
    if(i == 0){
        cout << fixed;
        cout << "================================================" << endl;
        cout << "| ";
}
    if (i < size){
        cout << ' ' << a[i]; 
        Print(a, size, i + 1);
        }
    else
        cout << "|" << endl;
}

int main()
{
    srand((unsigned)time(NULL));

    const int t = 15;
    int Low = 11;
    int High = 99;
    int a[t];
    Create<int>(a, t, Low, High, 0);
    Print<int>(a, t, 0);


    cout << "================================================" << endl;
    cout << "| " << "Quantity of odd numbers = " << setw(2) << Counter(a, t, 0) << setw(18) << " |" << endl;
    cout << "================================================" << endl;
    cout << "|" << "Quantity of odd numbers(template method) = " << setw(2) << Count(a, t, 0) << " |" << endl;
    cout << "================================================" << endl;
}

