/*
Ans����double d=f(0[n]���Կ������ñ��ʽ�Ľ��Ϊһ��doubleֵ����f()[n]����f()����arr����arr[n]��ʵ������һ�������n���ֵ����arr��һ����������Ҳ��ʾ������׵�ַ������f()��ʵ���Ա�ʾΪf()=arr����f()���ص���һ��ָ�����͡�
���£�
*/
#include <iostream>
using namespace std;

double *f()
{
	static double arr[7]={1,2,3,4,5,6,7};
	return arr;
}

int main()
{	
	for(int i=0;i!=7;++i)
	{
		double d=f()[i];
		cout<<"f()["<<i<<"]="<<d<<endl;
	}
	return 0;
}