#include <iostream>

using namespace std ;

int gcd (int x , int y ) {
	
	while ( x!=y ) { 
	
	x=x%y ;
	y=x ;
	}
	
	return x ;
	
}

main() {
	
	int x , y ;
	cout << " enter x : " << "\n" ;
	cin >> x ;
	cout << " enter y : " << "\n" ;
	cin >> y ;
	
	cout << " gcd of x and y is : " << gcd(x,y) ; 

}