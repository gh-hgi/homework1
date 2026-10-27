//唐光辉
//202610125118
#include <stdio.h>
int main(){
float a,b,c;
printf("\n输入：");
scanf("%f %f %f",&a,&b,&c);
if (a+b>c&&a+c>b&&b+c>a){
    printf("能构成三角形\n");}
else {
    printf("不能构成三角形");
}  

}