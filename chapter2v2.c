#include<stdio.h>
#include<conio.h>
void chapter2v2()
{
	int a,b,c,d,e,f,g,h;
	system("cls");
	printf("THE JUNGLE");
	getch();
	system("cls");
	printf("You search some supplies and pack the food stuffs");
	printf("\n You look into the jungle ahead \n it seems like it will be a long way back\n 'let's get to highground and see what option we have'suggest's Max");
	getch();
	printf("\n there is a huge jungle ahead\n there's a lake on the east \n and a river down west\n where shall we go??");
	getch();
	printf("\n1.jungle \n 2.Lake \n 3.River");
	scanf("%d",&a);
	system("cls");
	if(a==1)
	{
		printf("\n you start walk down the small pathway you found\n you see a scary looking creature\n It seems like it is chasing you");
		getch();
		printf("\n Do you wanna fight it? or Do you run away? ");
		getch();
		printf("\n1.Go fight monster \n 2.Run away from monster");
		scanf("%d",&b);
		system("cls");
		if(b==1)
		{
			printf("\n you stand in front of the monster with a knife in your hand\n the monster ready to attack you\n he throws his fist");
			getch();
			printf("\n you dodge the punch stab his hand with your knife\n You hit him again and again\n the monster is screaming in pain");
			getch();
			printf("\n he gives up and ask for mercy\n he says'he'll follow you'");
			getch();
			printf("\n 1.befriend him\n 2.kill him");
			a:
			scanf("%d",&c);
			system("cls");
			if(c==1)
			{
				printf("\n you lower your sword and start moving forward \n the monster quietly follows you around");
				getch();
				printf("\n you see some smoke far ahead and start following the trails");
				getch();
				chapter3v2();
			}
			else if(c==2)
			{
				printf("\n slash!! you slash his throat \n you've defeated monster \n you walk a little forward and see huge smoke rising up");
				getch();
				printf("\n let's go there you say to yourself \n and start your journey torwards the smoke");
				getch();
				chapter3v3();
			}
			else
			{
				printf("Enter 1 or 2");
				goto a;
			}	
		}
		else if(b==2)
		{
			printf("\n hey, it's a monster \n Your heart is racing faster than a car \n it looks dangerous");
			getch();
			printf("\n the monster comes torwards you \n you try to outrun him but he's too fast \n slam he punchs you ,your head is ringing so loud there's blood all over you");
			getch();
			printf("you see blood everywhere \n Max is dead and you...");
			getch();
			death();		
		}	
		else
		{
			printf(" Enter 1 or 2");
			goto *21;
		}
		
		}
	else if(a==2)
	{
		printf("\n You start walking torward the lake. \n you are fascinated by the fauna \n there are bright flowers everywhere ");
		getch();
		printf("\n The water body is showing up you're getting exited to see the lake \n The lake is huge, you can't even see the other end");
		getch();
		printf("\n you say to yourself'what should we do?'\n 'there's a boat but it seems broken' \n we can always walk across the lake");
		getch();
		printf("\n 1.Repair the boat \n 2.walk around");
		scanf("%d",&d);
		system("cls");
		if(d==1)
		{
			printf("\n you start searching for wood and supplies and start fixing the boat\n after making sure the boat is safe you hop in");
			getch();
			printf("\n you start rowing your boat Everything seems fine \n 'there's a hole in the boat'you see with fear' \n you think for some time");
			getch();
			printf("\n the repaired boat took you to the other side");
			getch();
			printf("\n you see a huge smoke rising up \n it's a good idea to go there you say to yourself");
			getch();
			chapter3v3();
		}
		else if(d==2)
		{
			printf("\n you start your journey around the lake \n the lake is kind as much as it iks rich");
			getch();
			printf("\n the lake provides you with food\n 'ahh..'you hear someone shout in pain \n there's a monster that's in pain  you see");
			getch();
			printf("\n 'it's really hurting'you say \n hey should we feed him these food we collected?");
			getch();
			printf("\n 1.feed him \n 2.Don't");
			scanf("%d",&e);
			if(e==1)
			{
				printf("\n'hey,here's some food for you'you say \n you slowly pick of the throne in his leg\n he seems to be in relieved of the pain");
				getch();
				printf("\n 'he says thanks' \n You smile and say you want to come with me,don't you?");
				getch();
				printf("\n you and Monster walk side to side \n Progressively to an very dangerous place......... ");
				getch();
				getch();
				getch();
				chapter3v2();
			}
			else if(e==2)
			{
				printf("\n the monster comes torwards you \n you try to outrun him but he's too fast \n slam he punchs you ,your head is ringing so loud there's blood all over you");
				getch();
				printf("you see blood everywhere \n  you are ...");
				getch();
				death();		
			}	
		}
	}	
	else if(a==3)
	{
		printf("\n you get down the cave \n start walking towards the river\n the pathway seems very peculiar ");
		getch();
		printf("\n 'there are many plants the creeping vines attracts to the water source'");
		getch();
		printf("\n the river doesn't seem too far away \n after a little bit of walking you reach at the river bank");
		getch();
		printf("\n do you wanna swim in the river or do you make a boat?");
		getch();
		printf("\n 1.Swim \n 2.make a boat");
		scanf("%d",&f);
		system("cls");
		if(f==1)
		{
			printf("\n without any thought you jump into the river \n little do you know the river is too fast ");
			getch();
			printf("\n the river current pushes you around \n you slam into rocks one after another \n");
			getch();
			getch();
			death();
		}
		else if(f==2)
		{
			printf("\n you start searching for wood and supplies and start fixing the boat\n after making sure the boat is safe you hop in");
			getch();
			printf("\n you start rowing your boat Everything seems fine \n a very fast current is hitting you\n ");
			getch();
			printf("\n should we go with the flow or should we oppose the flow?' ");
			getch();
			printf("\n 1.Go with the flow \n 2.Go against the flow");
			scanf("%d",&g);
			system("cls");
			if(g==1)
			{
				printf("\n you allign yourf boat with the flow\n the river speeds you controling the boat you say");
				getch();
				printf("\n you control the boat grabing the paddle hard \n");
				getch();
				printf("\nthere's a village i see it'you say\n you take the boat to the side");
				getch();
				printf("\n it's near,i can feel it ,you think");
				getch();				
				chapter3v3();
			}
			else if(g==2)
			{
				printf("\n So you've decided to go against the flow\n the boat dangles around \n the current is too fast  ");
				getch();
				printf("\n the boat that you made is starting to break down");
				getch();
				printf("\n 'ahh'you scream as you fall down the boat \nyou are also engulphed by the river'");
				getch();
				printf("\n it's dark ");
				getch();
				death();
			}
	   }
	}
}


	
