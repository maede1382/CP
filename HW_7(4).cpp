#include <iostream>

using namespace std ;

 main() {

int n , m , i , k ;

cout << " please enter your numbers : " << "\n" ;
cin >> n ;
cout << "and" << "\n" ;
cin >> m ;

if ( n>0 ; m>0 ) {
	while ( n!=m ) {
		if ( n>m ) {
			n-=m ;
		}
		else {
			m-=n ;
		}
	}
}
cout << "the answer is : " << "\n" << n ;
}