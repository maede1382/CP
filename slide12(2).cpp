 #include <iostream>

using namespace std ;

int power ( int n , int m ) 
	{
	
	int p=1 ;
	for ( int i=1 ; i<=n ; i++ ) {
		p*=m ;
	}
	
	return p ;
	
}

main () {
	
	int x , y ;
	cout << " enter x : " << "\n" ;
	cin >> x ;
	cout << " enter y : " << "\n" ;
	cin >> y ;
	
	cout << " answer = " << power(y,x) ;
}