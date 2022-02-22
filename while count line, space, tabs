#include <stdio.h>
int main()
{
    int c=getchar(),nl=0,sp=0,tab=0;
    while((c=getchar())!=EOF)
        if (c=='\n')
            ++nl;
        else if (c=='\t')
            ++tab;
        else if (c==' ')
            ++sp;
    printf("%d New Lines\n%d Spaces\n%d Tabs\n",nl,sp,tab);
}
