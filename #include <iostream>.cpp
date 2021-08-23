#include <iostream>
using namespace std;

int main()
{
    int n, i;
    float num[80], sum=0.0, average;

    cout << "Enter the numbers of data: "<<endl;
    cin >> n;

    while (n > 80 || n <= 0)
    {
        cout << "Error! number should in range of (1 to 80)." << endl;
        cout.precision(3);
        cout << "Enter the number again: "<<endl;
        cin >> n;
    }

    for(i = 0; i < n; ++i)
    {
        cout << i + 1 << ". Enter number: "<<endl;
        cin >> num[i];
        sum += num[i];
    }

    average = sum / n;
    cout << "Average = " << average<<endl;

    return 0;
    
}
