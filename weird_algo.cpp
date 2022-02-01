#include <bits/stdc++.h>
using namespace std;

// void algo(int n)
// {
    
//     if (n==1)
//     {
        
//         return;
//     }
//     if ((n%2)==0)
//     {
//         n=(n/2);
//         cout<<n<<" ";
//     }else{
//         n=(n*3)+1;
//         cout<<n<<" ";
//     }
//     algo(n);

    

    
// }

int main()
{
	long long int n;
	cin >> n;
	cout << n << " ";
	while (n > 1)
	{
		if (n & 1)
			n = (3 * n) + 1;
		else
			n >>= 1;
		cout << n << " ";
	}
	return 0;
}