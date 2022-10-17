#include<stdio.h>
#include<math.h>
main()
{
	float x1,x2,y1,y2;
	printf("enter the first cordinate: "); 
	scanf("%f %f", &x1,&y1);
	printf("enter the second coordinate: ");
	scanf("%f %f", &x2,&y2);
	float dist= pow((x1-x2),2)+pow((y1-y2),2);
	float dist_ans= sqrt(dist);
	printf("the distance is %f \n", dist_ans);
	float slope= (y2-y1)/(x2-x1);
	printf("the slope is %f \n", slope);
}