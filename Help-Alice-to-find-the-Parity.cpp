//Help Alice to find the Parity - basic bitwise logic
#include <iostream>
using namespace std;
int main() {
	int L,R;
	cin>>L>>R;    
	//cout<<L<<R;
	int X;
	for(int i=L; i<=R; i++){
       X^=i;
	}
	if(X%2==0){
		cout<<"even";
	}else
	cout<<"odd";
	return 0;
}
