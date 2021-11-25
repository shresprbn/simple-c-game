#include<stdio.h>
#include<conio.h>
void chapter3v3()
{
	int a,b,c,d,e,f,g,h;
	system("cls");
	printf("DEATH VILLAGE");
	getch();
	system("cls");
	printf("You have walked for some time now\n The village proximity is visible now\n the village has blue fire torch all around");
	getch();
	printf("\n you are exited...\n what will you do now");
	getch();
	printf("\n 1.ask for help \n 2.go inside");
	scanf("%d",&a);
	if(a=1)
	{
		printf("\n you are weak and frail worn out by the hike\n you look around for some people");
		getch();
		printf("\n you see a man coming near you \n you are nearly fainting");
		getch();
		printf("\n you ask for map but he doesn't seem to understand \n your stomach is growling too");
		printf("\n 1.signal for map\n 2.signal for food");
		b:
		scanf("%d",&b);
		if(b==1)
		{
			printf("\n the guy takes you to his leader\n the leader gives you some food \nhe asks you'where you are from' ");
			getch();
			printf("\n i want to go to euphoria you say\n he offer's you some men to help you reach there\n some help wouldn't be a bad idea");
			getch();
			ending5();	
		}
		if(b==2)
		{
			printf("\n the villager nourishes you\n you stay in his house for two days");
			getch();
			printf("\n then you take your leave \n he hands you some food and a new set of tools");
			getch();
			printf("\n byee you signal good bye");
			getch();
			ending3();
		}
	}
	if(b==2)
	{
		printf("\nyou start running in shouting loud \n the villager's seem confused and they bring out their weapons \n surprise and reality hit's you in the face");
		getch();
		printf("\n Do you equip yourself or do you put your hands up?");
		getch();
		printf("\n 1.equip weapon \n surrender");
		scanf("%d",&c);
		if(c==1)
		{
			printf("\n you pull out your weapon and stand guard\n there are over a dozen of villagers trying to kill you \nyou are trying to fight back");
			getch();
			printf("\n you are weakened by the journey \n and the villager are too powerful \n you couldn't last a minute");
			getch();
			death();
		}
		if(c==2)
		{
			printf("\n You put your hands up \n the villager seems to have calmed down \n you try to speak");
			getch();
			printf("\n just as your word leave your mouth one of the guys stabs you in the arm \n you shout in pain \n they then take you to medicate you");
			getch();
			printf("after the band aiding you are taken to the village chief");
			getch();
			printf("\n he asks'where are you headed' \n you say 'i am lost we want to go to euphoria'");
			getch();
			printf("\n he hands you a map saying this will help\n he offer's you some help for the way too ");
			getch();
			printf("\n you find it very generous for the village chief to offer help \n with the protection and help you start the journey back home");
			getch();
			ending5();	
		}
	}
}
