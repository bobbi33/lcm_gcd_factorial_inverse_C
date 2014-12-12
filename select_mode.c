
#include "stdio.h"

int greatest_Common_Divisor(int a,int b){
	int gcd;
	int x, y ,t;

	x = a;
	y = b;

	while(y != 0){
		t = y;
		y = x % y;
		x = t;
	}

	gcd = x;

	return gcd;
};

int least_common_multiple(int a, int b){
	int lcm,gcd;

	gcd = greatest_Common_Divisor(a,b);
	lcm = (a * b)/gcd;

	return lcm;
};

int factorial(int a){
	int i, x = 1;
	for (i = 1; i <= a; i++){
		 x = x * i;
	}
	return x;
};

int inverse(int b){
   int reverse = 0;

   while (b != 0)
   {
      reverse = reverse * 10;
      reverse = reverse + b%10;
      b = b/10;
   }

   return reverse;
};

int main()
{
  int a,b,sel;
  int dout;
  int l = 1;

  int x,y;

  while(l == 1){

	//  a = IORD_ALTERA_AVALON_PIO_DATA(PIO_0_BASE);
	//  b = IORD_ALTERA_AVALON_PIO_DATA(PIO_1_BASE);
	//  sel = IORD_ALTERA_AVALON_PIO_DATA(PIO_2_BASE);

	 printf("Enter two integers\n");
	 scanf("%d%d", &a, &b);
	 printf("Enter sel\n");
	 scanf("%d", &sel);

	 if(sel == 0){
		 dout = least_common_multiple(a,b);
		 printf("gcd is %d\n",dout);
	 }
	 else if(sel == 1){
		 dout = greatest_Common_Divisor(a,b);
		 printf("lcm is %d\n",dout);
	 }
	 else if(sel == 2){
		 dout = factorial(a);
		 printf("fac is %d\n",dout);
	 }
	 else if(sel ==3){
		 dout = inverse(b);
		 printf("Reverse is %d\n", dout);
	 }

	//  IOWR_ALTERA_AVALON_PIO_DATA(PIO_3_BASE,dout);

	 printf("continue?");
	 scanf("%d",&l);
  }
  return 0;
}

