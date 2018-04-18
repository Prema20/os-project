#include<stdio.h>
int absoluteValue(int value){
	if(value<0){
		value = -1 * value;
	}
	return value;
}
int main(){
	int distance = 0;
	printf("Enter cylinder number where the drive is currently serving:\n");
	int cur;
	scanf("%d",&cur);
	printf("Enter number of pending requests:\n");
	int n;
	scanf("%d",&n);
	int queue[n+1];
	queue[0]=cur;
	printf("Enter cylinder numbers:\n");
	for(int i=1;i<sizeof(queue)/4;i++){
		scanf("%d",&queue[i]);
	}
	for(int i= 0;i<(sizeof(queue)/4)-1; i++){
		distance += absoluteValue(queue[i]-queue[i+1]);
	}
	printf("\nThe first come first served (FCFS) schedule is :\n");
	for(int i =0;i<sizeof(queue)/4;i++){
		printf("%d ",queue[i]);
	}
	printf("\nThe total seek distance(in cylinders) is: %d\n",distance);
	return 0;
}

