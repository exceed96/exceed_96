#include <iostream>
#include <algorithm>

using namespace std;

int arr[50];

int main(void)
{
	int L, n, A = 0, B = 0, count = 0;
	cin >> L;
	for (int i = 0; i < L; i++)
	{
		cin >> arr[i];
	}
	cin >> n;

	sort(arr, arr + L); //���� ������������ �־����°��� �ƴϹǷ� ������ ���ؼ� ������������ ����

	for (int i = 0; i < L; i++) // n�� ���� ������ ã���ش�. ���� �迭�� ũ�Ⱑ 1�̰� n�� �迭�� ���Ұ����� ������
	{                           // ������ ������ �� ���ڸ� 0���� �Ѵ�.
		if (n < arr[i])
		{
			if (i == 0)
			{
				A = 0;
				B = arr[i];
			}
			else
			{
				A = arr[i - 1];
				B = arr[i];
			}
			break;
		}
	}

	for (int j = A+1; j <= n; j++) // n�� ���ǰ� �������� ������ �����ϸ� count�� 1�� ����
	{
		for (int k = n; k < B; k++)
		{
			count++;
		}
	}

	if (count == 0) // count�� 0�Ͻÿ��� 0�� ����ϰ� �ϰ� �ƴҽÿ��� count�� ���������� 1�� ���ش�. 
	{
		cout << "0" << "\n";
	}
	else
	{
		cout << count - 1 << "\n";
	}
	return 0;
}