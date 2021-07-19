
// n = 6
// 2 9 7 1 10 23
// k = 33


// 2 => no
// 9 => no
// 7 => no
// 1 => no
// 10 => yes 23 = 33 = k

int a = -1;
int b = -1;
input_array(arr, n);
int k;
cin >> k;
for(int i = 0; i < n; i++){
	for(int j = i + 1; j < n; j++){
		if(arr[i] + arr[j] == k){
			a = min(arr[i], arr[j]);
			b = max(arr[i], arr[j]);
		}
	}
}
cout << a << " " << b;



