/*https://www.acmicpc.net/problem/2851*/
#include <iostream>

using namespace std;

int main(void)
{
	int arr[10], result = 0, m = 1000, sum = 0;
	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];
		sum += arr[i]; 
		if (abs(100-sum) <= m) //�����Ͽ� ���� ���� 100���� ���̰� ���� ���� ���ϴ� ���� 
		{
			m = abs(100 - sum); 
			result = sum;
		}
	}
	
	cout << result << "\n";

	return 0;
}