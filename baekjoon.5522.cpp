/*https://www.acmicpc.net/problem/5522*/
#include <iostream>

using namespace std;

int main(void)
{
	int arr[5], sum = 0;
	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];
		sum += arr[i];
	}
	cout << sum << "\n";
	return 0;
}