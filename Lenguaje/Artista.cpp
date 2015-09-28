#include <iostream>
#include <stack>
using namespace std;

int M, Mi, Xi, N, Ni, Yi, C, Ci, K, G;

stack<int> Cartulina[202][202];

void imprimir_tablero(){
	for(int i=1; i<=N; i++){
		for(int j=1; j<=M; j++){
			if(Cartulina[i][j].empty())
				cout << "-1 ";
			else
				cout << Cartulina[i][j].top() << " ";
		}
		cout << "\n";
	}
}

int main(){
	cin >> M >> N >> G >> C >> K;

	//Iniciamos el tablero
	for(int i=1; i<=N; i++)
		for(int j=1; j<=M; j++)
			for(int k=1; k<=G; k++)
				Cartulina[i][j].push(C);

	//imprimir_tablero();
	//printf("\n");

	while(K--){
		cin >> Ci >> Mi >> Ni >> Xi >> Yi;
		//cout << Ci << " " << Mi << " " << Ni <<  " " << Xi << " " << Yi << "\n";
		
		//cout << Xi << " -> " << Yi << "\n";

		if(Ci == -1){
			//Removemos	
			for(int i=1; i<=Ni; i++)
				for(int j=1; j<=Mi; j++)
					if(!Cartulina[i + Yi - 1][j + Xi -1].empty())
						Cartulina[i + Yi - 1][j + Xi -1].pop();
		} else {
			//Colocamos nuevo color
			for(int i=1; i<=Ni; i++)
				for(int j=1; j<=Mi; j++)
					Cartulina[i + Yi - 1][j + Xi -1].push(Ci);
		}
		//imprimir_tablero();
		//printf("\n");
	}

	imprimir_tablero();

	return 0;
}