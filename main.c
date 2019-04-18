#include <stdio.h>

int add(int, int);
int sub(int, int);
int div(int, int);
int multi(int, int);

int main(int argc, char * argv[]) {
	int a, b, c;
	char Operator;

	printf("Please enteer a expression");
	scanf("%d %c %d", &s, &Operator, &b);

	switch (Operator) {
		case '+':
			c = add(a, b);
		case '-':
			c = sub(a, b);
		case '*':
			c=multi(a,b);

	}
}