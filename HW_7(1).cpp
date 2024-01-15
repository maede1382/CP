#include <iostream>

using namespace std ;

 main() {

int m , n , i , k ;

cout << " please enter a number " << "\n" ;
cin >> m ;

cout << " please enter power " << "\n" ;
cin >> n ;

k=1 ;
for ( i=1 ; i<=n ; i++ ) {
	k*=m ;
}

cout << " the answer is :" << "\n" << k ;

}