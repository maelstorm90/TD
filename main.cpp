#include <iostream>
#include <fstream>

using namespace std;

const int MaxSize = 32;
const int MaxMapName = 20;

int N;
char A[MaxSize][MaxSize];
char mapName[MaxMapName];

void initMatrix(char Name[]) {
	ifstream fin(Name);
	fin >> N;
	for (int i = 1; i <= N; ++i) {
		for (int j = 1; j <= N; ++j)
			fin >> A[i][j];
	}
}

int main() {
	cout << "Enter the name of the sample map: "; cin >> mapName;
	initMatrix(mapName);
}








