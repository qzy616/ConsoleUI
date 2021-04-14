#include "ConsoleGraphics.h"
using namespace std;
string code[200] = { "B9A2V4K3" ,"Q8J4T1D0"
,"M2F2G6L5"
,"U8C0Q6C0"
,"R7V5S5W0"
,"V0T4R1K3"
,"D6W3X2Q7"
,"D1W5M6M7"
,"X3E4Q2P6"
,"N1P5O4V0"
,"P6U5G6S2"
,"E5J1G5Q5"
,"G1T3B1M1"
,"S3E8I2O3"
,"E3C2X3V8"
,"Y1U6C3W6"
,"L6L6F8F4"
,"G1A7Q7Q1"
,"H5H6H2D6"
,"U8J2V3W7"
,"G7N8A2M8"
,"K5Y8X3U0"
,"C5Q2Y4V0"
,"X6S4G0D1"
,"S2A8C8D7"
,"X1H0K2N1"
,"J2K0A2T2"
,"X0Y1T2O5"
,"U1S6X3O8"
,"X0I3F5X8"
,"O8J4W6N7"
,"N5P2I8P1"
,"G0C6W3D2"
,"M8A2T0T3"
,"G3W3V2H0"
,"R8A2A8D4"
,"L0B6F7C1"
,"H7N7R6H8"
,"T3V8B0S0"
,"A7J7Q8U6"
,"S0O3E4M1"
,"Y4Q7S2W4"
,"L4N1F3O1"
,"Q7L5N1K1"
,"M8H2N0V1"
,"V1G4V8E1"
,"K2X8T5R6"
,"D8E8U3L6"
,"Y5S5M5I2"
,"C7C4O3J8"
,"W8I8M1S5"
,"X5N4R8C2"
,"N4C4C6S7"
,"X2L6D0F8"
,"A8R7W2O7"
,"M8N5U1K8"
,"L2V5K4P5"
,"U6T1B4I4"
,"V2D3B5S6"
,"T4A6K0K5"
,"U2B5S6O6"
,"H4P4C2A4"
,"E5X8C4X8"
,"M4U8O7C7"
,"F4L0L5D1"
,"P2N1P7M5"
,"A1I1P2C3"
,"I4D7H2C5"
,"N1B8K0S6"
,"F6L3K1W1"
,"X4G5B6B1"
,"M6T3V8R5"
,"R3K2X0E2"
,"J4V2D6J7"
,"E7H5H2H8"
,"L7R6A5X2"
,"E4Q6J5V5"
,"B2F4A1E3"
,"S8M2G4B1"
,"M0G3N0F6"
,"R5L7Y8C2"
,"V1P7A2S7"
,"R1M5T8P1"
,"K1W6P7D0"
,"B1T8K2R0"
,"O4D4A7R3"
,"Y0L1R3E1"
,"N5B2P7N7"
,"Y3R0U4C7"
,"A3X4M6E8"
,"V1G5K4O6"
,"O0T6Q8S7"
,"A5A0D1X6"
,"J4V8N5U2"
,"V3T7T8O5"
,"P0U2S6B0"
,"H1C4U0B3"
,"X8A5P3D6"
,"W0S1J3Y1"
,"N2I2V3E8"
,"V6Y0F6X4"
,"L2K6K0D6"
,"Y7X2H7T6"
,"S2L1F5Y1"
,"J2O5A3R2"
,"X7B8X3E0"
,"B4A6P7L8"
,"O0G1L4H5"
,"P6F3A4M1"
,"P3M7S3Q6"
,"I8I0D2D0"
,"X0R1J7A2"
,"S1A8L0D4"
,"S8C6O0H0"
,"Y6C2G1D0"
,"I2V6U7E8"
,"K5X0W7M2"
,"L6I7J4P6"
,"M6I3V2R6"
,"F3F6M2H1"
,"K1J6F7B7"
,"P5K5X5C6"
,"G6N0Q4X6"
,"D2D0V4Y0"
,"I7D3S8B5"
,"A6J4L2Q0"
,"R7E7V8B3"
,"Q6Q8G2P7"
,"V7V7J3C2"
,"Y1U1X0G1"
,"S4H7G4L8"
,"O7J3P8V1"
,"E1I5Q5G0"
,"O2W4U8T0"
,"N8S3J8L1"
,"M2I7V5M1"
,"W1C0X2R2"
,"D0C0H0P3"
,"M0L1S7D0"
,"Q2Y5I4U5"
,"K0M8A0L2"
,"X7O0N3N6"
,"A8V7P8J6"
,"F5H0L5Y0"
,"F0A5A2M1"
,"M0S4O3Q5"
,"K3M5M4O7"
,"I4G2C4C4"
,"B3V3Y6Y0"
,"S4Q3T3F7"
,"Q4P8O4S0"
,"J6U6O3W4"
,"I3S4K0Y4"
,"K8H2U4Y5"
,"C4K6W1W5"
,"C6F0T3S7"
,"G4W3D8M0"
,"I5I6J1E2"
,"T4U4Q7R7"
,"M2G5W8I5"
,"G0I2X0S7"
,"U7H6P6Y6"
,"C3S1C6S4"
,"V7D5B4W8"
,"D2I1I3N0"
,"S1B3D5A6"
,"R5T6P8N2"
,"J2W6B2C8"
,"U0O4P3M4"
,"E8T5R8H6"
,"B1U2B8N5"
,"I1R6W0J0"
,"S2R7N0H7"
,"O4I6N5H1"
,"O4P8L0I8"
,"F2D8I8Q7"
,"K7M4H2C2"
,"T5I0W8K8"
,"O5S1P3O8"
,"M3X6Y4Q2"
,"E0W5F6G0"
,"P5Y7I3R1"
,"C0K3P6K7"
,"P4Q0K4D6"
,"V7X6U5B1"
,"P3D8S2J2"
,"Y0F8R2C8"
,"U0V5W2T6"
,"G2N6Q6C5"
,"E0M1K5E7"
,"L0X5M4P7"
,"G3Q0Y4I0"
,"V4V7D8E2"
,"C6H5G7D7"
,"D1J4S0W2"
,"E8S6Q6W7"
,"B6T3C3E0"
,"Y5T7V3Q5"
,"Y1P6L1M5"
,"M8I6F5P2"
};

void mainmenu2() {
	Cls();
	Bk(9);
	Color(15, 8);
	Box(25, 12, 55, 17);
	Color(15,5);
	Box(23, 11, 53, 16);
	Color(15, 8);
	Box(0, 29, 79, 29);
	Init(80, 30);
	Cursor(0, 1);
	Title("激活码验证");
	Pos(0, 29);
	cout << "-二〇二一年四月 BBTPG研制 CG图形库压缩包密码获取程序-根据软盘上的激活码进行操作-";
	
	
}
void mainmenu1() {
	Cls();
	mainmenu2();
	Color(15, 5);
	Pos(23, 16);
	cout << "[ENTER]确定 [ESC]退出";
	Pos(33, 11);
	cout << "激活码验证";
}
string in;
bool hhh() {
	for (int i = 0; i <= 199; i++) {
		if (code[i] == in) return 1;
	}
	return 0;
}
int main() {
	Title("加载中...");
	Sleep(500);
	
k:mainmenu1();
wh:
	char cc = _getch();

	switch (cc) {
	case 27:exit(0);
	case 13:goto ot;
	default:goto wh;
	}
ot:
	Cls();
	Sleep(200);
	mainmenu2();
	Color(15, 5);
	Pos(23, 16);
	cout << "[ENTER]确定";
	Pos(33, 11);
	cout << "输入激活码";
	Color(15, 0);
	Box(25, 14, 51, 14);
	Cursor(1, 100);
	Pos(25, 14);
	getline(cin, in);
	Cursor(0, 25);
	Sleep(200);
	if (hhh()) {
		mainmenu2();
		Color(15, 5);
		Pos(34, 11);
		cout << "验证成功";
		Pos(23, 13);
		cout << "解压密码:";
		Pos(25, 14);
		cout << "        qzy909397";
	}
	else {
		Sleep(200);
		mainmenu2();
		Color(15, 5);
		Pos(34, 13);
		Color(15, 5);
		cout << "验证失败!";
		Pos(23, 16);
		cout << "[ENTER]重试 [ESC]退出";
		cc = _getch(); 
		if (cc == 27) exit(0);
		else if(cc==13) goto ot;
	}
	_getch();
	End();
	return 0;
}
