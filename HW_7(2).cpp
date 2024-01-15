#include <iostream>

using namespace std ;

 main() {

int m , n , k , p ;

cout << " please enter your numbers " << "\n" ;
cin >> m ;

cout << "\n" ;
cin >> n ;

k=0 ;

for ( p=m ; p>=n ; p-=n ) {
	if ( m>0 ; n>0 ) {
		k+=1 ;
	}
}
cout << " division is : " << k << "\n" << "and" << "\n" << " modulus is : " << p ;
}