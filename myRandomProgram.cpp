#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    /*calling seed random generator*/
    srand(time(NULL));
    
    //generating random numbers between 0 to 11
    int daysUntilExpiration = rand()%12;
    
    //show me the random number generated
    cout<<"Only "<<daysUntilExpiration<<"  day(s) remaining"<<endl;
    //messages based on conditions
    if( daysUntilExpiration<=0){
    	cout<<"your subscription has expired"<<endl;
    cout<<"please renew it"<<endl;}
    else if( daysUntilExpiration<=1){
		cout<<"your subscription expires within a day."<<endl;
		cout<<" Renew now and save 20%!"<<endl;
	}
	else if ( daysUntilExpiration<=5){
		cout<<"your subscription expires in "<<daysUntilExpiration<<" days time"<<endl;
    cout<<" Renew now and save 10%"<<endl;
	}
	else if ( daysUntilExpiration<=10){
		cout<<"your subscription will expire soon"<<endl;
		cout<<"Renew now"<<endl;
	}
	else{
		cout<<"You have an active subscription"<<endl;
	}
    return 0;	
}

