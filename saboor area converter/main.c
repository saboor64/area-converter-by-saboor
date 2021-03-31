#include <stdio.h>
#include <stdlib.h>

int main ()
{
float convertfrom;
float convertto;
float value;

       printf("*******currency converter*******: \n");

       printf("\n\n enter any value : ");
       scanf("%f",&value);

       printf("\n\n take number from this you want to convert from-----\n\n select an option");
       printf("\n\n 1= Square foot");
       printf("\n\n 2= Meter");
       printf("\n\n 3= Inches");
       printf("\n \n \n choose : ");
       scanf("%f",&convertfrom);


       printf("\n\n take number from this you want to convert to-----\n\n select an option");
       printf("\n\n 1= Square foot");
       printf("\n\n 2= Meter");
       printf("\n\n 3= Inches");

        printf("\n \n \n choose : ");
       scanf("%f",&convertto);


       if(convertfrom==1 && convertto ==1){
       printf("\n\n { %.1f Square foot = %.1f Square foot}\n",value,value);

       }
       if(convertfrom==1 && convertto==2) {
       float result=value/10.764/2;
       printf("\n\n%.1f square foot = %.1f meter\n\n",value,result);
       }

        if(convertfrom==1 && convertto ==3) {
        float result=value*144/2;
        printf("\n\n%.1f Square foot= %.1f Inch\n\n",value,result);
        }

        if(convertfrom==2 && convertto ==1) {
        float result=value*2*10.764;
        printf("\n\n { %.1f Meter = &1.f Square foot\n",value,result);
        }

        if(convertfrom==2 && convertto ==2) {
        printf("\n\n %.1f Meter = %.1f Meter\n\n",value,value);
        }

        if(convertfrom==2 && convertto ==3) {
        float result=value*39.37;
        printf("\n\n { %.1f Meter = %.1f Inch\n",value,result);
        }

        if(convertfrom==3  && convertto ==1) {
        float result=value*2/144;
        printf("\n\n { %.1f Inch = &.1f Square foot\n",value,result);
        }

        if(convertfrom==3  && convertto ==2) {
        float result=value/39.37;
        printf("\n\n %.1f Inch = &.1f Meter\n",value,result);
        }

        if(convertfrom==3  && convertto ==3) {
        printf("\n\n %.1f Inch = %.1f Inch\n",value,value);
        }


        printf("\n\n Thank You");

        }
