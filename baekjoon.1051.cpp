/*https://www.acmicpc.net/problem/1051*/
#include <iostream>

using namespace std;

char arr[50][50];

int main(void)
{
	int N, M, width = 0, max = 0;
	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> arr[i][j];
		}
	}

	if (N == 1) // N�� 1�̸� ���簢���� �ִ� ũ��� 1
	{
		cout << "1" << "\n";
		return 0;
	}
	else
	{
		for (int i = 0; i < N-1; i++)  
		{
			for (int j = 0; j < M; j++)
			{
				for (int k = j; k < M; k++)
				{
					if (arr[i][j] == arr[i][k]) 
					{
						width = k - j + 1; // ���� ���� ���Ҹ� ã���� ū�ſ��� ������ ���ְ� +1 �� ���� ����
						if (arr[i][j] == arr[i + width - 1][j]) // ��ķ� �����Ҷ��� width�� -1�� ������Ѵ�. �̰Ŷ����� �ظ̴�.
						{ 
							// ���簢���̹Ƿ� ���α��� ���Ѱſ� -1 ���� �������� �����༭ ���� �������� �Ǻ��Ѵ�.
							if (arr[i + width - 1][j] == arr[i + width - 1][k])
							{
								// ������ width * width�� max�� ����
								if (max < width * width) //���簢���߿� �ִ밪�� ã���ش�.
								{
									max = width * width;
								}
							}
						}
					}
				}
			}
		}
	}
	
	cout << max << "\n";
	
	return 0;
}