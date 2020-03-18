#include <iostream>
#include <math.h>

using namespace std;

int prime (int n) {
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0)
		return 0;
	}
		return 1;
}

int main()
{
    long long int n;
	cin >> n;
	for (int i=0 ; i<n ; i++){
	    long long int x;
        cin >> x;
        long long int y = sqrt(x);
	    long long int m = y * y;
        if (x == 1)
			cout << "NO";
		else if ((m == x && prime(y)) || x == 4)
			cout << "YES";
		else
			cout << "NO";
		cout << endl;
	}
    return 0;
}
