#include<stdio.h>

void exchange(float *x,float *y) {
	float temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

int main() {
	float a,c,d;
	int b;

	printf("Exchange rate:\n");
	printf("1.US dollar\n");
	printf("2.Euro\n");
	printf("3.Japanese yen\n");
	printf("4.South Korean won\n");
	printf("Enter amount:");
	scanf("%f", &a);
	printf("Choose your currency(please enter number ex. 1 2 3):");
	scanf("%d", &b);
	printf("Result is ");
	
	if(b==1){
		c = 31.27;
		d = a * c;
		exchange(&a, &d);
		printf("%.2f ", a);
	}
	if (b == 2) {
		c = 37.05;
		d = a * c;
		exchange(&a, &d);
		printf("%.2f ", a);
	}
	if (b == 3) {
		c = 0.29;
		d = a * c;
		exchange(&a, &d);
		printf("%.2f ", a);
	}
	if (b == 4) {
		c = 0.026;
		d = a * c;
		exchange(&a, &d);
		printf("%.2f ", a);
	}
	printf("Baht");
}

