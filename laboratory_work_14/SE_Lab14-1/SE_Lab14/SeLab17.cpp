#include "stdafx.h"

int main(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "rus");

#ifdef TEST_GETERROR_GETERRORIN
	cout << "---- ���� Error::geterror ----" << endl << endl;
	try
	{
		throw ERROR_THROW(100);
	}
	catch (Error::ERROR e)
	{
		cout << "������ " << e.id << ":" << e.message << endl << endl;
	};
	cout << "---- ���� Error:geterrorin ----" << endl << endl;
	try {
		throw ERROR_THROW_IN(111, 7, 7);
	}
	catch (Error::ERROR e) {
		cout << "������ " << e.id << ": " << e.message << ", ������ " << e.inext.line << ", ������� " << e.inext.col << endl << endl;
	};
#endif
#ifdef TEST_GETPARM
	cout << "--- ���� Parm::getparm ----" << endl << endl;
	try {
		Parm::PARM parm = Parm::getparm(argc, argv);
		wcout << "-in:" << parm.in << ", -out:" << parm.out << ", -log:" << parm.log << endl << endl;
	}
	catch (Error::ERROR e) {
		cout << "������ " << e.id << ": " << e.message << endl << endl;
	}
#endif
#ifdef TEST_GETIN
	cout << "---- ���� In::getin ----" << endl << endl;
	try {
		Parm::PARM parm = Parm::getparm(argc, argv);
		In::IN in = In::getin(parm.in);
		cout << in.text << endl;
		cout << "����� ��������: " << in.size << endl;
		cout << "����� �����: " << in.ignor << endl;
	}
	catch (Error::ERROR e)
	{
		cout << "������ " << e.id << ": " << e.message << endl << endl;
	};
#endif
#ifdef TEST_GETIN_2
	cout << "---- ���� In::getin #2 ----" << endl << endl;
	try {
		Parm::PARM parm = Parm::getparm(argc, argv);
		In::IN in = In::getin(parm.in);
		cout << in.text << endl;
		cout << "����� ��������: " << in.size << endl;
		cout << "����� �����: " << in.ignor << endl;
		cout << "���������: " << in.ignor << endl;
	}
	catch (Error::ERROR e)
	{
		cout << "������ " << e.id << ": " << e.message << endl << endl;
		cout << "������ " << e.inext.line << " ������� " << e.inext.col << endl << endl;
	};
#endif
#ifdef TEST_LOG
	cout << "---- ���� ������� Log ----" << endl << endl;
	Log::LOG log = Log::INITLOG;
	try {
		Parm::PARM parm = Parm::getparm(argc, argv);
		log = Log::getlog(parm.log);
		Log::WriteLine(log, (char*)"����:", (char*)" ��� ������ \n", "");
		Log::WriteLine(log, (wchar_t*)L"����:", (wchar_t*)L" ��� ������ \n", "");
		Log::WriteLog(log);
		Log::WriteParm(log, parm);
		In::IN in = In::getin(parm.in);
		Log::WriteIn(log, in);
		Log::Close(log);
	}
	catch (Error::ERROR e)
	{
		Log::WriteError(log, e);
	};
#endif
	system("pause");
	return 0;
}