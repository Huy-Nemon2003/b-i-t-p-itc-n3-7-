#include <iostream>

using namespace std;
void tang_dan (int a[], int n)
{
	for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {											
                
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    cout<<"\n";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
	}
}
void giam_dan (int a[],int n)
{
	for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] < a[j]) {											
                
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    cout<<"\ncac phan tu sau khi sap xep giam dan:\n";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
	}
}
void ham_chan (int a[], int n)
{
	int b[1000];
	int m = 0;
	for(int i = 0 ; i < n; i++)
	{
		if (a[i] % 2 == 0)
		{
			b[m] = a[i];
			m++;
		}
	}
	cout<<"cac phan tu chan trong mang:\n";
	for (int i = 0; i < m; i++) {
        cout << b[i] << " ";
	}
	cout<<"\ncac phan tu chan sau khi sap xep:\n";
	tang_dan(b,m);
}
void ham_le (int a[], int n)
{
	int b[1000];
	int m = 0;
	for(int i = 0 ; i < n; i++)
	{
		if (a[i] % 2 != 0)
		{
			b[m] = a[i];
			m++;
		}
	}
	cout<<"cac phan tu le trong mang:\n";
	for (int i = 0; i < m; i++) {
        cout << b[i] << " ";
	}
	giam_dan(b,m);
}
void xoa_phan_tu (int a[], int n)
{
	int vi_tri_xoa;
	cout << "\nvi tri xoa phan tu la: ";
	cin >>  vi_tri_xoa;
	if(vi_tri_xoa < 1)
		cout<<"\nvi tri "<< vi_tri_xoa <<" khong co trong mang";
	else if(vi_tri_xoa > n)
		cout<<"\nvi tri "<< vi_tri_xoa <<" khong co trong mang";
	else {
		int i = vi_tri_xoa;
		do {
			a[i++] = a[i];
		} while(i <= n);
		n--;
		cout << ("Mang sau khi xoa:\n");
		for(int i = 0; i < n; i++) {
			cout<<a[i]<<"\t";
		}
	}
}
int main()
{
	int n;
	cout<<"nhap so phan tu n cua mang: ";cin>>n;
	int a[n],c[n];
	for(int i = 0; i< n; i++)
	{
		cout<<"a["<<i<<"]= ";cin>>a[i];
		c[i]=a[i];
	}
	
	cout<<"\n\n1-cac phan tu sau khi sap xep tang dan:\n";
	tang_dan(a,n);
	cout<<"\n\n2-sap xep cho cac phan tu chan:\n\n";
	ham_chan(a,n);
	cout<<"\n\n3-sap xep cho cac phan tu le:\n\n";
	ham_le(a,n);
	cout<<"\n\n4_ xoa mot so ra khoi mang:\n\n";
	xoa_phan_tu(c,n);
	return 0;
}

