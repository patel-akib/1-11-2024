#include<stdio.h>
int main(){
	//nested if else 
	int x=5;
	int y=61;
	int z=7;
	if(x>y){
		if(x>z){
			printf("x");
		}
		else{
		printf("z");	
		}
	}
	else if(y>z){
		printf("y");
	}
	else{
		printf("z");
	}
	

	
}
