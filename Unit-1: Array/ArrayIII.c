//insert data in array using scanf function

#include<stdio.h>
#define SIZE 10

int main(){
	
	int data[SIZE];
	for(int i=0; i<SIZE; ++i){
	
		printf("Please Enter Element %d's Data: ",i); //user input data
		//%d is to modift the number //i is mean looping to increase +1 until to get the size
		
		scanf("%d",&data[i]); //& is using for to refer address
		}                  //if i=0; input = 5 //the enter first value will be 5 
	int total=0;
	for(int ii=0; ii<SIZE; ++ii){
	
		//Let's out total array values
		total = total + data[ii]; //0, 5 //1, 12
		//printf("The array value :%d\n",data[ii]);
		
	}
	printf("Total value of array :%d",total);
	return 0;
}
