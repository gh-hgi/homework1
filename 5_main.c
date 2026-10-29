//唐光辉
//202610125118
#include <stdio.h>
int main ()
{    float a,b,c;
    char op;
scanf("%f %c %f",&a,&op,&b);
if (op=='/'&&b==0){
    printf("错误：除数不能为零\n");}
else if (op=='+'){
    c=a+b;
    printf("%f+%f=%f\n",a,b,c);}
else if (op=='-'){
    c=a-b;
    printf("%f-%f=%f\n",a,b,c);}
else if(op=='*'){
    c=a*b;
    printf("%f*%f=%f\n",a,b,c);}
else if(op=='/'){
    c=a/b;
    printf("%f/%f=%f\n",a,b,c);}
else{
    printf("错误：不支持运算符");
}
}
