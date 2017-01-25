#include <iostream>

using namespace std;
void count_divider (int n)
{
    int countD=0;
    for (int i=1; i<=n; i++)
        if(n%i==0)
        countD++;
    if (countD==4)
        cout<<n<<" ";
}
int main()
{
    int n;
    cin >> n;
    int*numbers=new int [n];
    for (int r=0; r<n;r++)
        cin>> numbers [r];
     for (int r=0; r<n;r++)
        count_divider (numbers [r]);
     delete []numbers;


}
//1)	Напишите программу, выписывающую все элементы массива имеющие ровно четыре делителя.
