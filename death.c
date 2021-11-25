#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void death()
{
	int a;
	system("cls");
	printf("YOU DIED \n \n \n\n\n\n");
	getch();
	printf("1. Go to main menu \n 2.Show chapters \n 3.Exit");
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
			goto *11;		
	}
	
}
