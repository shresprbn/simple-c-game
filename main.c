#include <stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	system("cls");
    int select1;  //here select1 is selecting new game or levels
    printf("MENU \n \n");
    printf("1.Start New Game\n");
    printf("2.Chapters \n");
    printf("3.Exit");           //this is menu display
    printf("\n \n \n");
    printf("select 1, 2 or 3 \t");
    scanf("%d",&select1);
    switch(select1)
    {
    case 1:
        chapter1();
        break;
    case 2:
        showchapters();
        break;
    case 3:
        exit (0);
        break;
    }
    getch();
}
