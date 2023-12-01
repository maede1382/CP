#include <iostream>

using namespace std;

 main() {
 	
 	int x , y , z , b , p ; 
 	
 	float T ;
 	
 	cout << "please enter your number" << "\n" ;
 	
 	cin >> x >> y >> z ;
 	
 	b = (x - y) * (x + z) ;
 	
 	p = (x + y + z) ;
 	
 	p = p * p ;
 	
 	p = p + 1 ;
 	
 	T = (float) p/b ;
 	
 	cout << "the answer is : " << T ;
 	

}