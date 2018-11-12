// ����, ���, ���� "������ ����������������-2", �++, ���
//
// sample_matrix.cpp - Copyright (c) ������� �.�. 07.05.2001
//   ������������ ��� Microsoft Visual Studio 2008 �������� �.�. (20.04.2015)
//
// ������������ ����������������� �������

#include <iostream>
#include <cstdlib>
#include "utmatrix.h"
using namespace std;
//---------------------------------------------------------------------------

void main()
{
	try
	{
		TMatrix<int> a(5), b(5), c(5), d(5);
		int i, j, size, num;

		setlocale(LC_ALL, "Russian");
		cout << "������������ �������� ��������� ������������� ����������� ������" << endl;
		cout << "������� ������ ������ A � B:" << endl;
		cin >> size;
		TMatrix<int> A(size), B(size), Temp(size);
		cout << "������� 0, ���� ������ ������ ������� �������, ��� 1 ��� ��������������� ����������." << endl;
		cin >> num;
		if (num == 0)
		{
			cout << "������� ������� �:" << endl;
			cin >> A;
			cout << "������� ������� B" << endl;
			cin >> B;
		}
		else
		{
			for (i = 0; i < size; i++)
				for (j = i; j < size; j++ )
				{
					A[i][j] = rand() % 11;
					B[i][j] = rand() % 11;
				}
			cout << "������� �:" << endl;
			cout << A << endl;
			cout << "������� �:" << endl;
			cout << B << endl;
		}
		cout << "A = B ?" << endl;
		if (A == B)
			cout << "��." << endl;
		else
			cout << "���." << endl;
		cout << "A + B = ?" << endl;
		Temp = (A + B);
		cout << Temp << endl;
		cout << "A - B = ?" << endl;
		Temp = A - B;
		cout << Temp << endl;
	}
	catch(const string *err)
	{
		cout << err << endl;
	}
}
//---------------------------------------------------------------------------