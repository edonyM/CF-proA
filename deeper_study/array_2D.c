#include <stdio.h>
#include <stdlib.h>

int main()
{
    char (*a)[10];//已知第二维 the second dimension given
    int *p;//查看指针大小 the size of the pointer
    char* b[3];//已知第一维 the first dimension given
    char** c;//两维都未知 both dimension not given

    p = (int *)malloc(sizeof *p);
    printf("%d\n",sizeof p);
    free(p);

    a = (char(*)[10])malloc(3*sizeof *a);
    printf("%d\n",sizeof a);
    printf("%d\n",sizeof *a);
    free(a);

    int i;
    for(i=0;i<3;i++)
    {
        b[i] = (char*)malloc(10*sizeof *b);
    }
    printf("%d\n",sizeof b);
    printf("%d\n",sizeof *b);
    for(i=0;i<3;i++)
        free(b[i]);

    c = (char**)malloc(sizeof (char*)*3);
    for(i=0;i<3;i++)
        c[i] = (char*)malloc(10*sizeof *c);
    printf("%d\n",sizeof c);
    printf("%d\n",sizeof *c);
    for(i=0;i<3;i++)
        free(c[i]);
    free(c);


}
