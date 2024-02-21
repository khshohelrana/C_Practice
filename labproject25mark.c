#include<stdio.h>
int main()
{
    system("cls");
    int n;
    printf("\n\n\t\t\t\t\t\t\t\t\t\tGEOMETRY");
     printf("\n\n\n\t\t\t\t\t\t(1)Triangle.");
      printf("\n\n\t\t\t\t\t\t(2)Quadrilateral.");
       printf("\n\n\t\t\t\t\t\t(3)Circle.");
       printf("\n\n\t\t\t\t\t\tEnter:");
       scanf("%d",&n);
       if(n==1)
       {
          g_function_t();
       }
       if(n==2)
       {
          g_function_q();
       }
       if(n==3)
       {
           g_function_c();
       }
}
g_function_t()
{
    system("cls");
    int n;
    printf("\n\nwhat is traiangle?");
    printf("\n\nA triangle is a polygon with three edges and three vertices. It is one of the basic shapes in geometry. A triangle with vertices A, B, and C is denoted triangle ABC.");
    printf("\n\n\nWhat are the types of triangle?");
    printf("\n\nTriangle types are defined by angle and length properties.There are three  types of triangle. They are: Equilateral,Isosceles and Right-angled triangle.The sum \nof angles in any triangle is 180 deg.");
    printf("\n\n\nDefinition of triangle type:");
    printf("\n\nEquilateral:\nAn equilateral triangle has three equal sides and angles. It will always have angles of 60 deg in each corner.");
    printf("\n\nIsosceles:\nAn isosceles triangle can be drawn in many different ways. It can be drawn to have two equal sides and two equal angles or with two acute angles and one\nobtuse angle.");
    printf("\n\nRight-angled triangle:\nA right-angled triangle has one 90 deg angle");
    printf("\n\n\nN.B: It is possible for a triangle to be a right-angled triangle and an isosceles triangle at the same time. In this case the angles would be 90 deg, 45 deg and 45 deg.");
    printf("\n");
    printf("\n\n\t\t\t\tIF YOU WANT TO GO TO GEOMETRY'S MENU PRESS '1' OR IF YOU WANT TO GO TO MAIN MENU PRESS '0'  OTHERWISE PRESS ANYTHING ELSE");
     printf("\n\n\t\t\t\tENTER:");
     scanf("%d",&n);
     if(n==1)
    {
        main();
    }
    if(n==0)
    {

    }
}
g_function_q()
{
  system("cls");
    int n;
    printf("\n\nwhat is quadrilateral?");
    printf("\n\nA quadrilateral is a polygon in Euclidean plane geometry with four edges and four vertices. Other names for quadrilateral include quadrangle and tetragon.\nA quadrilateral, in general, has sides of different lengths and angles of different measures.");
    printf("\n\n\nWhat are the types of quadrilateral?");

  printf("\n\nThere are five basic types of quadrilaterals. They are: Trapezium, Parallelogram, Rectangle, Rhombus, Square.");
  printf("\n\nDefinition of quadrilateral type:");

   printf("\n\nTrapezium:\nA trapezium is a 2d shape and a type of quadrilateral, which has only two parallel sides and the other two sides are non-parallel.");
   printf("\n\nParallelogram:\nA parallelogram is a quadrilateral that has its opposite sides parallel and equal to each other. It has its interior opposite angles equal also the angles on the same\nside of transversal sum up to 180 degrees or supplementary to each other.");
   printf("\n\nRectangle:\nA Rectangle is a four sided-polygon, having all the internal angles equal to 90 degrees. The two sides at each corner or vertex, meet at right angles.");
   printf("\n\nRhombus:\nA quadrilateral that has a flat shape with four equally straight sides its called rhombus.");
   printf("\n\nSquare:\nA square is a regular quadrilateral, which means that it has four equal sides and four equal angles. It can also be defined as a rectangle in which two adjacent sides\nhave equal length.");
   printf("\n");
  printf("\n\n\t\t\t\tIF YOU WANT TO GO TO GEOMETRY'S MENU PRESS '1' OR IF YOU WANT TO GO TO MAIN MENU PRESS '0'  OTHERWISE PRESS ANYTHING ELSE");
     printf("\n\n\t\t\t\tENTER:");
     scanf("%d",&n);
     if(n==1)
    {
        main();
    }
    if(n==0)
    {

    }




}
g_function_c()
{
     system("cls");
    int n;
    printf("\n\nwhat is circle?");
    printf("\n\nCircle is a shape consisting of all points in a plane that are at a given distance from a given point, the centre.");
    printf("\n\n\nImportant Circle Parts:");
    printf("\nRadius:\nThe distance between any point of the circle and the centre is called the radius:");
    printf("\n\nChord:\nA line segment whose endpoints are on a circle.");
    printf("\n\nDiameter:\nA chord that passes through the center of the circle. The length of a diameter is two times the length of a radius.");
    printf("\n\nSecant:\nA line that intersects a circle in two points.");
    printf("\n\nTangent:\nA line that intersects a circle in exactly one point.");
    printf("\n\nPoint of Tangency:\nThe point where a tangent line touches the circle.");
    printf("\n\nTangent Circles:\nTwo or more circles that intersect at one point.");
    printf("\n\nConcentric Circles:\nTwo or more circles that have the same center, but different radii.");
    printf("\n\nCongruent Circles:\nTwo or more circles with the same radius, but different centers.");
    printf("\n");
    printf("\n\n\t\t\t\tIF YOU WANT TO GO TO GEOMETRY'S MENU PRESS '1' OR IF YOU WANT TO GO TO MAIN MENU PRESS '0'  OTHERWISE PRESS ANYTHING ELSE");
     printf("\n\n\t\t\t\tENTER:");
     scanf("%d",&n);
     if(n==1)
    {
        main();
    }
    if(n==0)
    {

    }

}










































































