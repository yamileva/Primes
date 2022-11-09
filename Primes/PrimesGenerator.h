#pragma once
/*
* ���� ����� ���������� ������� ����� �� ���������� �������������
* ���������. ������������ �������� "������ ����������".
* �������� �������� �����. ��� ������ ����� �����, ������������ � 2.
* ��������� �� ���� ��� �����, ������� 2. ������ ��������� �������������
* ����� � ��������� ��� ������� ��� �����. ��������� �� ��� ���, ����
* �� ������ �� �����, ����������� ���������� ������ ������������� ��������.
* 
* @author Robert C.Martin (Java version)
*/

#include <cmath>
#include <vector>

class PrimesGenerator
{
  // @param maxValue - ������ ���������
public:
  static std::vector<int> generatePrimes(int maxValue);
};
