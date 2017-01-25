#include <iostream>
using namespace std;
int a[100];
void quickSort(int l, int r)
{
    int x = a[l + (r - l) / 2];
    //������ ������������ (l+r)/2,
    //�� �� �������� ������������ �� ������� ������
    int i = l;
    int j = r;
    //��� � while ������ ������� � ��������� particle
    while(i <= j)
    {
        while(a[i] < x) i++;
        while(a[j] > x) j--;
        if(i <= j)
        {
            swap(a[i], a[j]);
            i++;
            j--;
        }
    }
    if (i<r)
                quickSort(i, r);

    if (l<j)
        quickSort(l, j);
}

int main()
{
    int n;//���������� ��������� � �������
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    quickSort(0, n-1);
    int sum=0;
    for (int i=0; i<n;i++)
          sum+=a[i];
    double x;
    if (n%2!=0)
    x=a[n/2];
    else
    x=(a[n/2-1]+a[n/2])/(2*1.0);
    cout<< x - sum/(n*1.0);


    return 0;
}
//4)	�������� ��������� ��������� ������� ����� �������� ������� � ������� �������������� ���� ��������� �������.
