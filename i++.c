#include <stdio.h>
int main()
{int m,i=3;
m=(++i)+(i++)+(++i);
printf("%d\t%d\n",m,i); 
i=3;
m=(++i)+(++i)+(i++);
printf("%d\t%d\n",m,i); 
i=3;
m=(i++)+(++i)+(i++);
printf("%d\t%d\n",m,i); 
i=3;
m=(++i)+(++i);
printf("%d\t%d\n",m,i); 
system("pause");
return 0;
}