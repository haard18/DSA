#include <bits/stdc++.h>
using namespace std;
void rotate(int arr[], int n)
{
    int temp = arr[0];
    for (int i = 1; i < n; i++)
    {
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = temp;
};
void rotateByD(int arr[], int n, int d)
{
    d=d%n;
    int temp[d];
    for(int i=0;i<d;i++){
        temp[i]=arr[i];
    }
    for(int i=d;i<n;i++){
        arr[i-d]=arr[i];
    }
    //place the temp-back
    for(int i=n-d;i<n;i++){
        arr[i]=temp[i-n+d];
    }
}
int main()
{
    int n;
    cin >> n;
    int d;
    cin >> d;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    rotateByD(arr, n,d);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}