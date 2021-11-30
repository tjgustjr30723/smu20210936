#include <stdio.h>
//잘 모르겟습니다..
int main(void)
{
    char str[20];
    int ch;

    while (1)
    {
        ch = getchar();
        if (ch == '!')
        {
            break;
        }
        ch = convCase(ch);
        putchar(ch);
    }
  
    return 0;
}

#include <stdio.h>
int convCase(int ch)
{
    const int diff = 'a' - 'A';
    if (ch >= 'A' && ch <= 'Z')
        return ch + diff;
    else if (ch >= 'a' && ch <= 'z')
        return ch - diff;
    else
        return -1;
}
