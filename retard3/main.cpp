#include <iostream>

using namespace std;
bool simple (int n)
{
    int countD=0;
    for (int i=1; i<=n; i++)
        if(n%i==0)
        countD++;
    if (countD==2)
    return true;
    return false;
}
int main()
{
  int n;
    int sum=0;
    cin >> n;
    int*numbers=new int [n];
    for (int r=0; r<n;r++)
        cin>> numbers [r];
     for (int r=0; r<n;r++)
     if (simple (numbers [r])==true)
        sum+=numbers [r]*numbers [r]*numbers [r];
        cout<< sum;
     delete []numbers;

}
//3)	Напишите программу вычисляющую сумму кубов простых элементов массива.
