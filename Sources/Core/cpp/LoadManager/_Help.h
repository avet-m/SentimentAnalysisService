/** \mainpage
<b>1. ����� ��������</b>\n
������ LoadManager ������������ ��� ���������� ��������� ������ ��������. \n
������ ���������� �� ����� ���������������� C++ � �������������� ���������������� \n
������� �� ����� ���������� Microsoft Visual Studio .Net, ���������� STL, ATL. \n

<b>2. �������������� ����������</b>\n
������ ������ ������ ��������� ������:
\li	��������� ��������� �� �������� ��������� ��������� ������ ��������� ������
\li	������������� ������� ��� ������ � ���������� ��������� (������������, ����������������� � �.�.).
\li	����������� ����������� �������.
�������������� ����������� ���.

<b>3. �������� ���������� ���������</b>\n
������ ������ ������������� ��������� ����������:
\li	SS::Interface::Core::ResourceManagers::ILoadManager 
\li -> GetInterface ���������� �������� ��������� (�� ����)
\li -> Create ���������� �������� ��������� 
\li -> QueryInterface ����������� ������� ��������� ���������� ���������� �� �������� ������
\li -> Release ������� �����, ������� ������������� ������ ���������
\n
\n
<b>����������:</b> �� � ���� ������ ������ � ����������, ����������� � ������� GetInterface, 
�������� Release, ��� ��� Release ���������� �������������.

\n
\li	SS::Interface::Core::CommonServices::IWorkRegister 
\li -> GetParameter ���������� �������� �� �����
\li -> SetWorkDir �������� ������� ����������
\li -> QueryInterface ����������� ������� ��������� ���������� ���������� �� �������� ������
\li -> Release ������� �����, ������� ������������� ������ ���������

<b>4. ������������ ����������� ��������</b>\n
������������ ����������� ����������� ����, �� ������� ����� ���� ����������� �� Windows.

<b>5. ����� � ��������</b>\n
\li �������� ������ ���������� ����������� ��� ������ �������. 
\li ����� �����:
\li CreateInstance - ����� ����� ��� ������������ �������� �����������.
\li DllMain - ����������� ����� �����.

<b>6. ������� ������</b>\n
\li ������������� ����������(������).
\li	������������� ������.
\li	������������� ����������.
\li ��� ���������
\li ������� ����

<b>7. �������� ������</b>\n
\li ��������� �� ��������� ���������
\li �������� ���������

*/