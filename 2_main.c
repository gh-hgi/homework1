//唐光辉
//202610125118
 #include <stdio.h>
int main(){
float a = 0;
printf("请输入一个实数：");
scanf("%f",&a);
if (a<0){
    printf("负数\n");
}
else if (a>0){
    printf("正数\n");
 }
else {
    printf("零\n");
}   
}