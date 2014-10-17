//Student_info.h
#ifndef Student_info_H
#define Student_info_H

#include <iostream>
#include <string>
#include <vector>

struct Student_info
{
	std::string name;
	double total;//���ճɼ�
};
struct Grade//�ɼ��ṹ��
{
    double midterm,fin;
    std::vector<double> homework;
};
//for the names' sort(s1,s2,compare)
bool compare(const Student_info& x,const Student_info& y);
//read the students' info
std::istream& read(std::istream& is,std::string name,Grade& s);
//read the homework scores
std::istream& read_hw(std::istream& is,std::vector<double>& hw);

#endif