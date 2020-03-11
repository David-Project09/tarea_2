#include <iostream>
using namespace std;

int main()
{
    char EsqIzqSup = (char)201;

    char LineHor = (char)205;

    char EsqDerSup1 = (char)187;
    char LineVert1 = (char)186;
    char EsqIzqInf2 = (char)200;
    char EsqDerInf3 = (char)188;

    cout << EsqIzqSup;
    for (int i = 0; i < 32; i++)
    {
        if (i == 16)
        {
            cout << " ASCII  ";
        }

        cout << LineHor;
    }
    cout << EsqDerSup1;
	for (int i=0; i < 128; i++)
	{
	
		cout << endl << LineVert1 << "	" << i << ":" << (char)i << "		" << LineVert1 << "	" << i + 128  << ":" << (char)(i + 128) << "		" << LineVert1;
		
	}
cout << endl << EsqIzqInf2;
	for (int i = 0; i < 32; i++)
	{
		if (i == 16)
		{
			cout << "ASCII  ";
		}

		cout << LineHor;
	}
	cout << EsqDerInf3;
	system("PAUSE");
	return 0;
}