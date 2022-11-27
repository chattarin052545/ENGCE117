#include <stdio.h>

void main()
{
    int Num1[10] , Num2[10] , Num3[10];
    int i, n=9, j=1, pro=0, mark=1;
       //input maximum array 
       printf("Input the number of elements to be stored in the array :");
       scanf("%d",&n);
       printf("---------------------------------------------------------\n");	
       printf("Input %d elements in the array :\n",n);
       for(i=0;i<n;i++)
        {
        //input Number for array
	      printf("element[%d] : ",i);
	      scanf("%d", & Num1[i]);
        Num2[i] =Num1[i];
	    }
      //process
      printf("---------------------------------------------------------\n");
		for (i=0;i<n; i++){
	  for (j = i + 1; j < n; ++j) {
      if (Num2[i] > Num2[j]) {
        pro = Num2[i];
        Num2[i] = Num2[j];
        Num2[j] = pro;
      }
    }
  }
  j = 1;
  for (i = 0; i < n; i++) {
    Num3[i] = j;
    for (j = 0; j < n; j++) {

      if (Num2[i] == Num2[j]) {
        Num3[i] = mark++;
      }
    }
    mark = 1;
    if(Num2[i] != Num2[i-1])
    {
      printf("\n%d -> %d ", Num2[i], Num3[i]);
    }//output all loop for array
  }
}//End program