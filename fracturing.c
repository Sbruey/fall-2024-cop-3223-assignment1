#include <stdio.h>
#include <math.h> 

int main(int argc, char **argv)
{
      double calculateDistance();
      double perimeter();
      double area();
      double height();
      double width();

      int x1 = 0;
      int x2 = 0;
      int y1 = 0;
      int y2 = 0; 

      printf("Enter your points: ");

      printf("\nx1: ");
      scanf("%d", &x1);

      printf("x2: ");
      scanf("%d", &x2);

      printf("y1: ");
      scanf("%d", &y1);

      printf("y2: ");
      scanf("%d", &y2);

      return 0;

      double calculateDistance();
    {
      double distance = sqrt(((x2-x1)*(x2-x1)) + ((y2-y1)*(y2-y1)));

      printf("The distance between the two points is %lf", distance);

      printf("/nPoint #1 entered:x1 = %d, y1 = %d", x1, y1); 
      printf("Point #2 entered:x2 = %d, y2 = %d", x2, y2); 

      return 3; 
    }
}


      
