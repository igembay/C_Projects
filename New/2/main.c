#include <graphics.h>

#include <conio.h>

main()

{

initwindow(500, 500);// �������������� ����������� ����

// ������ �����

setfillstyle (1,4 );  //  �������������  ��� ������� 1 -������,  ���� �������  4 - �������

bar(100, 150, 200, 170);// ����������� �������������  ������ ����� ������

bar(120, 150, 170, 130);// ����������� ������������� ������� ����� ������

// ������ ������

setcolor(15); // �������������  ����  ������

circle(120, 170, 10); //  ����� ������ ���������� ���� ������

circle(170, 170, 10); // ������ ������ ����������  ���� ������

setfillstyle (1,8);  //  �������������  ��� ������� ������ - 1 ���� ����� - 8

floodfill(120,170,15); // ����������� ���� ������ ������ �� ������� �����  ������ 15

floodfill(170,170,15); // ����������� ���� ������ ������ �� ������� �����  ������ 15

getch(); // ���� ������� ������

closegraph();  // ����� �� ������������ ������

}