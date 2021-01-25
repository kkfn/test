#include<iostream>
#include<Windows.h>

using namespace std;

int main(void){
	int sum=0;
	int i=1;
	do{
		sum=sum+i;
		i++;
	}while(i<101);
	/*
	for(i>0;i<101;i++){
		sum+=i;
	}

	while(i<101){
		sum=sum+i;
		i++;
	}
	*/
	cout<<sum<<endl;
	system("pause");
	return 0;
}