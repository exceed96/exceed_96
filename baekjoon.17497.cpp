/*https://www.acmicpc.net/problem/17497*/
// �׸��� ����
// K���� 0���� ���� ������ ���ؼ� ��ɵ��� ���Ϳ� ����ְ� �������� ���� �� ����ϸ� �ȴ�.
// ó�� K�� Ȧ���� ��쿡�� *2�� ����� �Ѵ�. �� �׷� ��쿡�� ����Ƚ���� ũ�� �����Ѵ�.
// ���� �����ȿ����� K�� 2�� �������� �������� �������״� K�� 2,2�� ����� ���·� ������� 
// K�� 2�̸� 2�� ���ְ� ���ѷ������� Ż���Ѵ�.
// ���� ���� �ȿ����� K�� 2�� �������� �������� 1�� ��쿡�� Ȧ���̹Ƿ� �ٷ� ���� �ܰ迡�� 2�� �����ذ���
// ����ϰ� +2�� ���ش�.(�׷��� �ٽ� �������� ���� �۾����� ����Ƚ���� �����ϰ� �ȴ�., ������ ��쿡�� ���� Ŀ���Ƿ� ����Ƚ���� �����ؼ� ���ѵ� �޸𸮸� �Ѵ´�.)
// ex) K = 7 -> 14 -> 16 -> 8 -> 4 -> 2 -> 0 
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	cin.tie(0); ios_base::sync_with_stdio(0);

	vector <char> arr;
	long long K;
	cin >> K;

	if (K % 2 == 1)
	{
		arr.push_back('/');
		K *= 2;
	}
	
	while (K)
	{
		if (K % 2 == 0)
		{
			if (K == 2)
			{
				arr.push_back('+');
				K -= 2;
				continue;
			}
			else
			{
				arr.push_back('*');
				K /= 2;
			}
		}
		else
		{
			arr.pop_back();
			K *= 2;
			arr.push_back('-');
			K += 2;
		}
	}
	
	if (arr.size() > 99)
	{
		cout << -1 << "\n";
	}
	else
	{
		reverse(arr.begin(), arr.end());
		cout << arr.size() << "\n";
		for (int i = 0; i < arr.size(); i++)
		{
			cout << "[" << arr[i] << "]" << " ";
		}
	}
	return 0;
}