#include<iostream>
using namespace std;
int main()
{
    int arr[10], n, i, minimum;
    cin >> n;
    for (i = 0; i < n; i++)
        cin >> arr[i];
    for (i = 0; i < n; i++)
    {
    minimum = arr[0];
        if (minimum > arr[i])
            minimum = arr[i];
    }
    cout << minimum << endl;
}
