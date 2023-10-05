#include <stdio.h>

int main()
{
    int length,breadth,side,a;
    float radius;
    printf("Enter the Number :- (1-3)");
    printf("\n1 FOR AREA AND PERIMETER OF RECTANGLE\n2 FOR AREA AND PERIMETER OF CIRCLE\n3 FOR AREA AND PERIMETER OF SQUARE\n");
    scanf("%d",&a);
    switch(a){
        
        case 1:
        printf("Enter the Length :- ");
        scanf("%d",&length);
        printf("Enter the Breadth :- ");
        scanf("%d",&breadth);
        printf("\nAREA  :- %d",length*breadth);
        printf("\nPERIMETER :- %d",2*(length+breadth));
        break;
        
        case 2:
        printf("Enter the radius of the Circle :- ");
        scanf("%f",&radius);
        printf("\nAREA:- %f",3.14*radius*radius);
        printf("\nPERIMETER :-%f",2*3.14*radius);
        break;
        
        case 3:
        printf("Enter the side of square :- ");
        scanf("%d",side);
        printf("\nAREA:- %d",side*side);
        printf("\nPERIMETER:- %d",4*side);
}
return 0;
}