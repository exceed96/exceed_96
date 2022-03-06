/*https://www.acmicpc.net/problem/12931*/
// �׸��� ����
// ������ ������ ���� �迭�� �ִ� �� �ϳ��� 1 ����, �迭�� �ִ� ��� ���� �� �� �̷��� 2���� ������ �ִ�.
// ���⼭ �����ؾ��� ���� ���ҵ��� �� 0�� �迭���� �Է����� �־��� �迭�� ���°ͺ���
// �Է����� �־��� �迭���� ���Ҹ� �� 0 ���� ����°��� ���� ���̴�.
// ���� ���Ұ� 2�� ����� �ƴҽ� 1�� ���ְ� count�� 1������Ű�� ���� �� 2�� ����Ͻÿ��� ��ü������ 2�� �����ְ� count�� 1�� �����ش�.

#include <iostream>
#include <vector>

using namespace std;

bool zero(vector <int>& arr)
{
	for (int i = 0; i < arr.size(); i++)
	{
		if (arr[i])
		{
			return 0;
		}
	}
	return 1;
}

bool two(vector <int>& arr)
{
	for (int i = 0; i < arr.size(); i++)
	{
		if (arr[i] % 2)
		{
			return 0;
		}
	}
	return 1;
}

int main(void)
{
	int N, count = 0;
	cin >> N;
	vector <int> arr(N);

	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}

	while(1)
	{
		for (int i = 0; i < N; i++)
		{
			if (arr[i] % 2)
			{
				arr[i] -= 1;
				count++;
			}
		}

		if (zero(arr))
		{
			break;
		}

		if (two(arr))
		{
			for (int i = 0; i < N; i++)
			{
				arr[i] /= 2;
			}
			count++;
		}
	}

	cout << count << "\n";
	return 0;
}


// �� �ٸ� Ǯ�̷δ� ���� �ϳ��ϳ��� ���� 0���� ����� ����� ã�������� 2�� �������� ���� ū Ƚ���� 1�� �P������ ī��Ʈ���ٰ� �����ָ� �ȴ�.
#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	int n, count = 0, result = 0;
	cin >> n;
	vector <int> arr(n);

	for (int i = 0; i < n; i++)
	{
		int count2 = 0;
		cin >> arr[i];
		while (arr[i])
		{
			if (arr[i] % 2)
			{
				arr[i] -= 1;
				count++;
			}
			else
			{
				arr[i] /= 2;
				count2++;
			}
		}
		result = max(result, count2);
	}
	cout << count + result << "\n";


	return 0;
}