#include<stdio.h>
#include<conio.h>
void showchapters()
{
    int pick_level;
    system("cls");
    printf("\n\n\n");
    printf("Select a Chapter \n");
    printf("1.Chapter 1 'the cave' \n");
    printf("2.Chapter 2 'the jungle' variant 1\n");
    printf("3.Chapter 2 'the jungle' variant 2 \n");
    printf("4.Chapter 3 'death village' variant 1\n");
    printf("5.Chapter 3 'death village' variant 2 \n");
    printf("6.Chapter 3 'death village' variant 3 \n");
    printf("7.Chapter 3 'death village' variant 4 \n");
    printf("8.Ending variant 1 \n");
    printf("9.Ending variant 2\n");
    printf("10.Ending variant 3\n");
    printf("11.Ending variant 4\n");
    printf("12.Ending variant 5\n");
    printf("13.Ending variant 6\n");
	printf("\n\n\n\n\n\n\n\n");
    printf("select LEVEL \n press 0 to go to main menu");
    scanf("%d",&pick_level);
    //picks level
    switch(pick_level)
    {
    case 1:
        chapter1();
        break;
    case 2:
    	chapter2v1();
        break;
    case 3:
		chapter2v2();
        break;
    case 4:
    	chapter3v1();
        break;
    case 5:
		chapter3v2();
        break;
    case 6:
		chapter3v3();
        break;
    case 7:
		chapter3v4();
        break;
    case 8:
		ending1();
        break;
    case 9:
		ending2();
        break;
    case 10:
		ending3();
        break;
    case 11:
		ending4();
        break;
    case 12:
		ending5();
        break;
    case 13:
		ending6();
        break;
    case 0:
        main();
        break;
    }
}

