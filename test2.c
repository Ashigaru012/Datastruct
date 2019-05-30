#include<stdio.h>

struct my{
  int id;
  char name[20];
  double m;
  double kg;
  double BMI;
};

void bmi(struct my *a);

int main(void){
  struct my mybmi;
  int i;
  FILE *fp;
  fp = fopen("test.dat","w");
  for(i=1;i<5;i++){
    printf("%d人目の学生番号は（６桁）?:",i);
    scanf("%d",&mybmi.id);
    printf("氏名は？：");
    scanf("%s",mybmi.name);
    printf("身長(m)？:");
    scanf("%lf",&mybmi.m);
    printf("体重（kg)は？:");
    scanf("%lf",&mybmi.kg);
    bmi(&mybmi);
  }
  
  for(i=0;i<4;i++){
    fprintf(fp,"%d %s %f %f %f\n",mybmi.id,mybmi.name,mybmi.m,mybmi.kg,mybmi.BMI);
  }
  
  fclose(fp);
  
  return 0;
  }

  void bmi(struct my *a)
  {
    a->BMI=a->kg/(a->m*a->m);
    return ;
  }
