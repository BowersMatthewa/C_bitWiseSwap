#include <stdio.h>



int swap(int *ap, int *bp, int a, int b);



int main()
{
    printf("Hello, World!\n");
    

	int a = 123;
    
	int b = 321;

    

	printf("a: %d b: %d\n", a, b);
    
	printf("Swapping\n");
    
    
	
	swap(&a, &b, a, b);
    
    

	printf("a: %d b: %d\n", a, b);
    

	return 0;
}



int swap(int *ap, int *bp, int a, int b){
    
	*ap = a ^ (a ^ b);
    
	*bp = b ^ (a ^ b);
    
    return 0;

}