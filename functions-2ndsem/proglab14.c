#include<stdio.h>
#include<stdlib.h>
#include<math.h>
struct point{
	float x;
	float y;
		
};
float calculatedistance(struct point p1, struct point p2){
	float distance;
	distance = sqrt(pow(p2.x -p1.x,2)+pow(p2.y-p1.y,2));
	return distance;
	
}
int main(){
	struct point point1,point2;
	printf("enter the value of point x1");
	scanf("%f",&point1.x);
	printf("enter the value of point y1");
	scanf("%f",&point1.y);
	printf("enter the value of point x2");
	scanf("%f",&point2.x);
	printf("enter the value of point y2");
	scanf("%f",&point2.y);
	
	float distance = calculatedistance(point1 , point2);
	printf("Euclidean distance between the two points: %f\n", distance);
 return 0;
 }