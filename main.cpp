#include <iostream>
using namespace std;

const int MaxSize = 32;
int N;
char A[MaxSize][MaxSize];

void initMatrix(char Name[]) {
	ifstream fin(Name);
	fin >> N;
	for (int i = 1; i <= N; ++i) {
		for (int j = 1; j <= N; ++j)
			fin >> A[i][j];
	}
}

int main() {
	
}









