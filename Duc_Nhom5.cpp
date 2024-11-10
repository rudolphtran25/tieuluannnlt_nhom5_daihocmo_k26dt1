#include <iostream>

using namespace std;

int khacnhau(int a[], int n)
{
    int khac = 0;
    bool dem[100] = {false};
    for (int i = 0; i < n ; i++)
    {
        if (dem[a[i]] == false)
        {
            dem[a[i]] = true;
            khac++;
        }
    }
    return khac;
}

void trunglap(int a[], int n)
{
    int dem[100] = {0};
    for (int i = 0 ; i < n ; i++)
    {
        dem[a[i]]++;
    }
    for (int i = 0 ; i < n ; i++)
    {
        if (dem[i] > 1)
            cout << "Gia tri " << i << " xuat hien " << dem[i] << " lan." << endl;
    }
}

int main()
{
    int n;
    cout << "Nhap so luong phan tu trong mang: ";
    cin >> n;

    int a[n];
    cout << "Nhap cac phan tu trong mang:" << endl;
    for (int i = 0 ; i < n ; i++)
    {
        cin >> a[i];
    }
    cout << "So luong gia tri khac nhau la: " << khacnhau(a , n) << endl;
    cout << "So luong phan tu cua gia tri trung nhau: " << endl;
    trunglap(a , n);
    return 0;
}
