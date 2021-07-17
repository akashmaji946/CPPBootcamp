

//  1 2 3
//  4 5 6
//  1 3 5

//  6
//  15
//  9

#include <iostream>
using namespace std;

int main(){
	int m, n;
cin >> m >> n;

int arr[m][n];
int sum[m];

for(int i = 0; i < m; i++){
	for(int j = 0; j < n; j++){
		cin >> arr[i][j];
	}
}

for(int i = 0; i < m; i++){
	sum[i] = 0;
}

for(int i = 0; i < m; i++){
	for(int j = 0; j < n; j++){
		sum[i] = sum[i] + arr[i][j];
	}
}

for(int i = 0; i < m; i++){
	cout << sum[i] << " ";
}
return 0;
}


