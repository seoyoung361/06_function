#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int sumtwo(int a, int b)
{
    //	int output;
   //	output= a+b;
	return a+b; //output;
	
}

int square(int n)
{
	return (n*n);
}

int get_max(int a, int b)
{
	if (a>b)
	   return a;
	   
	return b;
	   
}
	    
int main(int argc, char *argv[]) {	 
	
    int x,y,c,d,f;
    int output;
    
    x=2;
    y=5;
    c=3;
    d=4;
    f=5;
    
	output = sumtwo(x,y);
	printf("sumtwo:%i\n",output);
	output = square(c);
	printf("square:%i\n",output);
	output = get_max(d,f);
	printf("get_max:%i\n",output);


	

	


      
	return 0;
}
