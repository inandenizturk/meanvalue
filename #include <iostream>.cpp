#include <iostream>
using namespace std;

int main()
{
    int n, i;
    float num[100], sum=0.0, average;

    cout << "Enter the numbers of data: ";
    cin >> n;

    while (n > 80 || n <= 0)
    {
        cout << "Error! number should in range of (1 to 80)." << endl;
        cout.precision(3);// 3 float gelebilecek noktadan sonra
        cout << "Enter the number again: ";
        cin >> n;
    }

    for(i = 0; i < n; ++i)
    {
        cout << i + 1 << ". Enter number: ";
        cin >> num[i];
        sum += num[i];
    }

    average = sum / n;
    cout << "Average = " << average;

    return 0;
    //terminal içine cd komutu versiyonu ile kopyalıdığımızda direk enter number bölümü geliyor .oradan işleme devam edebiliyoruz
    //terminale cd "/var/folders/nt/9lygbrks48z5yz5yv6zkps7h0000gn/T/" && g++ tempCodeRunnerFile.cpp -o tempCodeRunnerFile && "/var/folders/nt/9lygbrks48z5yz5yv6zkps7h0000gn/T/"tempCodeRunnerFile
}