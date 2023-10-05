#include <stdio.h>

int main()
{
    int length,breadth,operation,side;
    float radius;
    
    printf("1 FOR AREA OF CIRCLE\n2 FOR AREA OF RECTANGLE\n3 FOR AREA OF SQUARE\n4 FOR PERIMETER OF CIRCLE\n5 FOR PERIMETER OF RECTANGLE\n6 FOR PERIMETER OF SQUARE\n");
    scanf("%d",&operation);
    {
    if(operation==1){
    printf("Enter the radius of the Circle :- ");
    scanf("%f",&radius);
    printf("AREA OF CIRCLE IS:- %f",3.14*radius*radius);
    }
    else if(operation==2){
    printf("Enter the length of the rectangle :- ");
    scanf("%d",&length);
    printf("Enter the breadth of the rectangle :-");
    scanf("%d",&breadth);
    printf("AREA OF RECTANGLE IS:- %d",length*breadth);
    }
    
    else if(operation==3) {
    printf("Enter the value of side :- ");
    scanf("%d",&side);
    printf("AREA OF SQUARE IS:- %d",side*side);
    }

    else if(operation==4) {
        printf("Enter the radius of the Circle :- ");
        scanf("%f",&radius);
        printf("PERIMTETER OF RECTANGLE IS:- %d",2*3.14*radius);
    }
    
    else if (operation==5){
        printf("Enter the length of the rectangle :- ");
        scanf("%d",&length);
        printf("Enter the breadth of the rectangle :- ");
        scanf("%d",&breadth);
        printf("PERIMETER OF RECTANGLE IS:- %d",2*(length+breadth));
    }

    else if (operation==6) {
        printf("Enter the side of Square :- ");
        scanf("%d",&side);
        printf("PERIMTER OF SQUARE IS:- %d",4*(side));
    }
    else 
    printf("INVALID ARGUMENT");
    }
    return 0;
}