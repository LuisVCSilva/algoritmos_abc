#include<stdio.h>

float potencia (double x,double y) {
if((y==1) || (y==0))
{
    if(y==1)
    {
    return x;
    }
    else
    {
    return 1;
    }
}
else
{
    if((y>0) && (y<1))
    {
    //Falta pra numero quebrado
    }
    else
    {
        if(y>1)
        {
        return x*potencia(x,y-1);
        }
        else
        {
            if(y<0)
            {
            return (1/(potencia(x,-y)));
            }
        }
    }
}
}

int main()
{
float t;
t = potencia(4,-2);
printf("%f",t);
return 0;
}
