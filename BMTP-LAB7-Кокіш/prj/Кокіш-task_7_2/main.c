#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("chcp 65001 & cls");;
    int additions[15];
    int i;
    int m = 0;
    for(i=0;i<15;i++){
        printf("����� ����� %d : ",i+1);
        scanf("%d",&additions[i]);
        if(additions[i] <= 0) {
            printf("������� ����� ������� ���� �����������. ���� �����, ������ ���������� �����.\n");
            i--;}
        else {
            m += additions[i];
        }
    }
    for(i=0;i<15;i++){
        printf("%d ",additions[i]);
    }
    additions[4] = m/15;

    for(i=0;i<15;i++){
        printf("����� %d-%d |\n",i+1,additions[i]);
    }
    return 0;
}
