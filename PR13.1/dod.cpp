//////////////////////////////////////////////////////////////////////////////
// dod.cpp
// ���� ��������� �������
#include "dod.h"
#include "var.h" // ��������� ������ ���������� ������
using namespace nsVar;
void nsDod::dod() {
	double R = (2 * n * x * x - 4 * n * x + 2 * n - x * x + 2 * x - 1) / (2 * n * x * x + 4 * n * x + 2 * n + x * x + 2 * x + 1);
	a *= R; 
}