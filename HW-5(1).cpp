#include <iostream>

using namespace std ;

 main() {
 	
 	int wage ;
 	
 	cout << " please enter your wage : " << "\n" ;
 	
 	cin >> wage ;
 	
 	if ( wage < 6000000 ) {
 		wage = wage - ( 0 * wage/100 ) ;
 		cout << " your wage is : " << wage ;
 		
	 }
	 
	 else if ( 8000000 > wage && wage >= 6000000 ) {
	 	wage = wage - ( 5 * wage/100 ) ;
	 	cout << " your wage is : " << wage ;
	 }
	 
	 else if ( 10000000 > wage && wage >= 8000000 ) {
	 	wage = wage - ( 10 * wage/100 ) ;
	 	cout << " your wage is : " << wage ;
	 }
	 
	 else if ( 14000000 > wage && wage >= 10000000 ) {
	 	wage = wage - ( 15 * wage/100 ) ;
	 	cout << " your wage is : " << wage ;
	 }
	 
	 else if ( 18000000 > wage && wage >= 14000000 ){
	 	wage = wage - ( 20 * wage/100 ) ;
	 	cout << " your wage is : " << wage ;
	 }
	 
	 else if ( 25000000 > wage && wage >= 18000000 ) {
	 wage = wage - ( 25 * wage/100 ) ;
	 cout << " your wage is : " << wage ;
     }
     
     else if ( wage > 25000000 ) {
     	wage = wage - ( 35 * wage/100 ) ;
     	cout << " your wage is : " << wage ;
     	
	 }

}