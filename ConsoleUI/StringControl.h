#pragma once
#include "ConsoleGraphicsBase.h"
typedef int ControlCode;
/*
* �����룺
* 1�����ַ���1��������ַ���2��
* 2�����ַ���1ָ����λ������ȡ���ַ���2��
* 3�����ַ���1ָ����λ�ò����ַ���2��
* 4�����ַ���1��Ѱ���ַ���2����������λ�á�
* 5�����ַ���1��ɾ���ض�λ�õ����ݡ�
* 6�����ַ���1��ÿ���ַ����д�Сдת����
*/
string Add(string s1, string s2);
string Cut(string s1, int start, int end);
string Insert(string s1, string s2, int pos);
int Find(string s1, string s2);

string Add(string s1,string s2) {
	return s1 + s2;
}
string Cut(string s1, int start, int end) {
	s1 = s1.substr(start, end);
	return s1;
}
string Insert(string s1, string s2, int pos) {
	s1.insert(pos, s2);
	return s1;
}
int Find(string s1, string s2) {
	if (s1.find(s2) != s1.npos) return (int)s1.find(s2);
	else return -1;
}
string Delete(string s1, int start, int end) {
	s1.erase(start, end);
	return s1;
}
string Letter(string s1, bool ctrl) {
	if (ctrl == 1) {
		for (int i = 0; i <= s1.size(); i++) {
			if (isupper(s1[i]) == 1) s1[i] = tolower(s1[i]);
		}
	}
	else if (ctrl == 0) {
		for (int i = 0; i <= s1.size(); i++) {
			if (islower(s1[i]) == 1) s1[i] = toupper(s1[i]);
		}
	}
}