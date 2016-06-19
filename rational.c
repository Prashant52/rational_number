#include<stdio.h>
typedef struct
{
	int numerator;
	int denominator;


}rational;
rational makerational(int,int);
rational add_rational(rational,rational);
rational mult_rational(rational,rational);
rational equal_rational(rational,rational);

int main()
{
	rational r1=makerational(1,2);
		rational r2=makerational(2,4);
		rational sum =add_rational(r1,r2);
		printf(  "the sum is : %d/%d \n",sum.numerator,sum.denominator);
		rational product =mult_rational(r1,r2);
		printf("the product is : %d/%d \n",product.numerator,product.denominator);
		equal_rational(r1,r2);
	
		
		
	
}
rational makerational(int a,int b)
{
	rational r_number;
	r_number.numerator=a;
	r_number.denominator=b;
	return r_number;
}


rational add_rational(rational r1,rational r2)
{
	
	rational add;
	add.numerator=(r1.numerator*r2.denominator)+(r2.numerator*r1.denominator);
	add.denominator=r1.denominator*r2.denominator;
	return add;
}
rational mult_rational(rational r1,rational r2)
{
	
	rational product;
	product.numerator=(r1.numerator*r2.numerator);
	product.denominator=(r1.denominator*r2.denominator);
	return product;
}
rational equal_rational(rational r1,rational r2)
{
		if (r1.numerator*r2.denominator==r2.numerator*r1.denominator)
	 {
	 	  	printf("they are EQUAL ");	
	  }
	  else
	  {
	  		printf("they are NOT EQUAL ");
	  }
}

