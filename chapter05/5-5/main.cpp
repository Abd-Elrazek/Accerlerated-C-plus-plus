/*
Ans����������Ҫ��ͼ��ʵ������һ�����ƶԳ�ͼ����˵����ͼ������Ϊ��

����ÿ���ַ�����Ϊ��������ż��ʱ������ͼ�����м�ԳƵģ�

�����򣬼�����д�С��ÿ���������Ϊ����ʱ�������ǲ��Ͼ������ģ����������߻����һ������ַ���

*******this is an exercises*******
************answer. to************
***********help people************
to better master the C++ language.
*********have good time!**********
*/
//main.cpp
#include <iostream>
#include <fstream>
#include "new.h"
using namespace std;

int main()
{
    //��ȡ�ļ�
    ifstream infile;
    infile.open("/home/lyj/Desktop/5-5/old.txt",ios::in);
    if(!infile.good())
    {
        cout<<"open error!"<<endl;
        return -1;
    }

    vector<string> old_vec,new_vec;
    string line;

    while(getline(infile,line))
    {
        old_vec.push_back(line);
    }
   	infile.close()

    //����center��������ͼ��
    new_vec=center(old_vec);

    //д�ļ�
    ofstream outfile;
    outfile.open("/home/lyj/Desktop/5-5/new.txt",ios::out);
    if(!outfile.good())
        return -1;
    for(vector<string>::const_iterator it=new_vec.begin();it!=new_vec.end();++it)
    {
        outfile<<*it<<'\n';
    }
    outfile.close();
}
