#pragma once
#include <iostream>
#include <fstream>
#include <cmath>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <string>
#include <ctime>
#include <algorithm>
#include <Windows.h>
#include <conio.h>
#include <process.h>
#include <thread>
/*ʹ�ñ�ͼ�ο�ĳ��򣬺�׺��ӦΪ.cpp / .cc ��
*main����������Ӧ����Init������ʼ����End����������
* Դ���뿪Դ��ת�ػ�ʹ��Ӧ�������ߣ�QZY����������ҵʹ�á�
* �汾0.2��������������ɣ�UI���ִ���ɡ�
*/
using namespace std;
#define  IsKeyPressed(nVirtKey)     ((GetKeyState(nVirtKey) & (1<<(sizeof(SHORT)*8-1))) != 0)
void Init(short width,short height);//��ʼ��
void Pos(short x, short y);//���λ��
void Color(short ForeColor, short BackGroundColor);//������ɫ
void Cursor(bool k, int size);//�������
void Title(char* t);//����̨����
void End();//��������
void Bk(short ForeColor, short BackGroundColor);//����
void Cls();//����

void Init(int width, int height) {
    char command[40];
    sprintf_s(command, "mode con cols=%d lines=%d", width, height);
    system(command);
    return;
}
void Pos(short x, short y) {

    COORD c = { x , y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
    return;
}
void Color(short ForeColor, short BackGroundColor)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), ForeColor + BackGroundColor * 16);
}
void Cursor(bool k, int size) {
    CONSOLE_CURSOR_INFO CursorInfo;
    CursorInfo.bVisible = k;
    CursorInfo.dwSize = size;
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &CursorInfo);
    return;
}
void Title(char* t) {
    SetConsoleTitleA(t);
    return;
}
void Cls() {
    system("cls");
}
void End() {
    Color(0x0f, 0x00);
    Cls();
    int pid;
    pid = _getpid();
    char command[30];
    sprintf_s(command, "taskkill /f /pid %d", pid);
    system(command);
    Color(0, 0);
}
void Bk(short BackGroundColor) {
    Color(0 , BackGroundColor);
    for (int i = 0; i <= 80 * 30; i++) cout << " ";
}
