#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void happy()
{
	int a;
	system("cls");
	printf("you've successfully completed the story \n but this is not the end there are 6 alternate ending ");
	getch();
	printf("\n and a huge network to get there");
	getch();
	system("cls");
	printf("1. Go to main menu \n 2.Show chapters \n 3.Exit");
	a:
	scanf("%d",&a);
    switch(a)
    {
    	case 1:
    		main();
    		break;
		case 2:
			showchapters();
			break;
		case 3:
			exit (0);
			break;
		default:
			printf("Enter 1,2 or 3");
			goto a;		
	}
}
