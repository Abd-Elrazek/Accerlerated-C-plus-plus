/*
Ans����4-2������֪��Ϊ�˾��и�����Ӧ�ԣ��������Ϊ��������ʹ���һ��999��Ϊ3����Ȼ��ڶ����������հ׼���������޸����£�
*/
#include <iostream>
#include <iomanip>
using namespace std;
int nSize(int n)
{
	int k=0;
	while(n>0)
	{
		n/=10;
		++k;
	}
	return k;
}
int main()
{
	int f,n=999;
	for(int i=1;i<=n;++i)
	{
		cout<<setw( nSize(n)+2 )<<setiosflags(ios::left)<<i<<i*i<<endl;
	}

	return 0;
}