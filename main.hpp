#include <iostream>
#include <fstream>
using namespace std;

int writeFile(string fileName)
{
    ofstream ofs;

    ofs.open(fileName + ".txt");
    if (!ofs)
    {
        cout << "File Open Error\n";
        exit(0);
    }

    int N;
    //cin >> N;
    ofs << N << endl;
	for (int i = 0; i < N; ++i)
	{
		int id;
		string name, departmentName;
        double salery;
        cin >> id >> name >> departmentName >> salery;
        ofs << id << " " << name << " "  << departmentName << " "  << salery << endl;
	}

    ofs.close();

    return N;
}
int readFile(string fileName)
{
    ifstream ifs;

    ifs.open(fileName + ".txt");
    if (!ifs)
    {
        cout << "File Open Error\n";
        exit(0);
    }

    int N;
	//ifs >> N; 


	for (N = 0; ifs.eof(); ++N)
	{
		string name, job;
		int id;
        double salery;
		ifs >> id >> name >> job >> salery;
		cout << id << " " << name << " " << job << " " << salery << endl;
	}

    return N;
}