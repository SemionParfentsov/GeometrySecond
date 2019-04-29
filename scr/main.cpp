#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file;
    char buffer [50];
    file = fopen ("/home/students/2018/ip814s19/Рабочий стол/HelloWorld/GeometrySecond/scr/circle.txt","w+t");
    int x,y;
    double R;
    printf ("circle(");
    scanf ("%d %d",&x,&y);
    printf (",");
    scanf ("%lf",&R);
    fprintf (file,"circle(%d %d, %1.1lf)",x,y,R);
    fclose (file);
    file = fopen ("/home/students/2018/ip814s19/Рабочий стол/HelloWorld/GeometrySecond/scr/circle.txt","r");
    fgets (buffer,50,file);
    printf ("%s",buffer);
    fclose (file);
    return 0;
}
