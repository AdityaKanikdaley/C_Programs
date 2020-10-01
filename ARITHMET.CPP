  #include<stdio.h>
  #include<conio.h>
  void main()
  {
  int a,b,c,d,e,f;
  clrscr();
  printf("enter two number:\n");
  scanf("%d%d",&a,&b);
  c=a+b;
  d=a-b;
  e=a*b;
  f=a/b;
  printf("%d+%d=%d\n",a,b,c);
  printf("%d-%d=%d\n",a,b,d);
  printf("%d*%d=%d\n",a,b,e);
  printf("%d/%d=%d\n",a,b,f);
  getch();
  }