#include<iostream>
#include<string.h>
using namespace std;
int mov_inch(){
	cout<<"Moving Inch";
}
int main(){
	string a[4]={"Straight","Left","Right","Uturn"};
	int i,path;
	cout<<"Start"<<endl;
	cout<<"Path reading";
	cin>>path;
	
	if(path==0011){
		cout<<a[2];
	}else if(path=1100){
		cout<<a[1];
	}
	else{
		if(path=1111){
			mov_inch;
			cout<<"Going "<<a[0];
		}
			else if(path==0000){
				
				
				cout<<a[3];
				cout<<"Moving left";
			}
		}
	return 0;
	}
	
	
	
	
	
