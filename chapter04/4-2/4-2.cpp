/*
Ans��setw(n)������λ�������ֶε����������ֶο��С�����õ�ֵn�����ÿո��루Ĭ���Ҷ��룬�������������leftָʾ���ɣ���������ֶο�ȴ������õ�nֵ�������setw(n)���á�
*/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int f;
	for(int i=1;i<=100;++i)
	{
		cout<<i<<setw(7)<<i*i<<endl;
	}

	return 0;
}