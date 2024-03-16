#include <iostream>
#include <fstream>
using namespace std;

int writeFile()
{
    ofstream ofs;

    ofs.open("employee.txt");
    if (!ofs)
    {
        cout << "File Open Error\n";
        exit(0);
    }

    int N;
    cin >> N;
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
int readFile()
{
    ifstream ifs;

    ifs.open("employee.txt");
    if (!ifs)
    {
        cout << "File Open Error\n";
        exit(0);
    }

    int N, total = 0;
	ifs >> N; 
	for (int i = 0; i < N; ++i)
	{
		string name, job;
		int id;
        double salery;
		ifs >> id >> name >> job >> salery;
		cout << id << " " << name << " " << job << " " << salery << endl;
        total += salery;
	}
    cout << "Total: " << total << " Average: " << total / N << endl;

    return N;
}