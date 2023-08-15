//checking whether the point lies inside the circle outside the circle or on the circle
#include<stdio.h>
#include<math.h>
int main()
{
	int x,y,dis,rad,d;
	printf("enter the radius and (x,y) co-ordinates of the circle:\n");
	scanf("%d %d %d",&rad,&x,&y);
	dis=x*x+y*y;
	d=rad*rad;
	if (dis==d)
	printf("the point lies on the circle");
	else
		{
		if(dis<d)
		printf("the point lies inside the circle");
		else if(dis>d)
		printf("the point lies outside the circle");
	}
	

}
