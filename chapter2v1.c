#include<stdio.h>
#include<conio.h>
void chapter2v1()
{
	int a,b,c,d,e,f,g,h;
	system("cls");
	printf("THE JUNGLE");
	getch();
	system("cls");
	printf("You search some supplies and pack the food stuffs");
	printf("\n You look into the jungle ahead \n it seems like it will be a long way back\n 'let's get to highground and see what option we have'suggest's Max");
	getch();
	printf("\n Max:hey there is a huge jungle ahead\n You:there's a lake on the east \n Max:and a river down west\n where shall we go??");
	getch();
	printf("\n1.jungle \n 2.Lake \n 3.River");
	scanf("%d",&a);
	system("cls");
	if(a==1)
	{
		printf("\n you and Max start walk down the small pathway you found\n Max nudges you and as he shows the scary looking creature\n It seems like it is in pain");
		getch();
		printf("\n Do you wanna go there? or Do you keep walikg away? ");
		getch();
		printf("\n1.Go towards monster \n 2.Go away from monster");
		scanf("%d",&b);
		system("cls");
		if(b==1)
		{
			printf("\n Hey! it seems like it's friendly \n'let's go there'says Max \n the monster shouts in pain'Ahhh..'");
			getch();
			printf("\n 'it's really hurting'you say \n hey should we feed him these food we collected?");
			getch();
			printf("\n 1.feed him \n 2.Don't");
			scanf("%d",&c);
			system("cls");
			if(c==1)
			{
				printf("\n'hey,here's some food for you'says Max \n you slowly pick of the thron in his leg\n he seems to be in relieved of the pain");
				getch();
				printf("\n 'he says thanks'says Max \n 'i know monster language a little bit'\n You smile and say he want to come with us,doesn't he?");
				getch();
				printf("\n you ,Max and Monster walk side to side \n Progressively to an very dangerous place......... ");
				getch();
				getch();
				getch();
				chapter3v1();
			}
			else if(c==2)
			{
				printf("\n hey, it's a monster get back\n By this time Max was already near monster \n the monster grabs him and throws hims he's dead");
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
				goto *29;
			}
	}	}
	else if(a==2)
	{
		printf("\n You and Max start walking torward the lake. \n you are fascinated by the fauna \n there are bright flowers everywhere ");
		getch();
		printf("\n The water body is showing up you're getting exited to see the lake \n The lake is huge, you can't even see the other end");
		getch();
		printf("\n max says'what should we do?'\n 'there's a boat bu it seems broken'you say \n we can always swim across he says");
		getch();
		printf("\n 1.Repair the boat \n 2.swim");
		scanf("%d",&e);
		system("cls");
		if(e==1)
		{
			printf("\n you start searching for wood and supplies and start fixing the boat\n after making sure the boat is safe you hop in");
			getch();
			printf("\n you start rowing your boat Everything seems fine \n 'there's a hole in the boat'shout's Max with fear' \n you think for some time");
			getch();
			printf(" \n \n \n 1.you bucket out the water coming in max rows \n 2.go faster toward the shore");
			scanf("%d",&d);
			system("cls");
			if(d==1)
			{
				printf("\n you're pouring out as much water as you can\n both of you hassle torward the shore ");
				getch();
				printf("'there's a village over that mountain see'you shout pointing at the smoke trail \n then you start moving torward the village");
				getch();
				printf("\n' i want to see my little girl, it seems so near'you smile");
				getch();
				chapter3v4();
			}
			else if(d==2)
			{
				printf("\n you both paddle faster \n 'more faster'he shouts\n the water is filling in even faster ");
				getch();
				printf("\n The boat is sinking, the boat is filling with water \n you sink down \n both of you are shouting for help");
				getch();
				printf("\n your body is filling with white noise \n then it was all black");
				getch();
				death();
			}
			else
			{
				printf(" Enter 1 or 2");
				goto *74;
			}
		}
		else if(e==2)
		{
			printf("\n 'let's swim' you say getting into the water \nyou and Max start swimming \n half an hour into swimming you realize it was a bad idea ");
			getch();
			printf("\n your body is freezing cold \n it's hypothermia but you keep swimming");
			getch();
			printf("\n you reach to other side but at that point you're really sick\n Max is trying to heat you up but...");
			getch();
			printf("\n It's getting dark ..");
			getch();
			death();
		}
		else
		{
		printf("Enter 1 or 2");
		goto *66;
	 	}	
		}
	if(a==3)
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
			printf("\n max asks you'should we go with the flow or should we oppose the flow?' ");
			getch();
			printf("\n 1.Go with the flow \n 2.Go against the flow");
			scanf("%d",&g);
			system("cls");
			if(g==1)
			{
				printf("\n you allign your boat with the flow\n the river speeds you control the boat you say");
				getch();
				printf("\nyou:control the boat \n Max:yes!! \n");
				getch();
				printf("\nthere's a village i see it'you say\n you and max take the boat to the side");
				getch();
				printf("\n it's near,i can feel it ,you think");
				getch();	
				chapter3v4();			
			}
			else if(g==2)
			{
				printf("\n So you've decided to go against the flow\n the boat dangles around \n the current is too fast  ");
				getch();
				printf("\n the boat that you and max made is starting to break down");
				getch();
				printf("\n 'ahh'max is screaming as he falls down the boat\n you're crying as you are also engulphed by the river'");
				getch();
				printf("\n it's dark ");
				getch();
				death();
			}
			else
			{
				printf("Enter 1 or 2");
				goto *148;
			}
	}
		else
		{
			printf("Enter 1 or 2");
			goto *129;	
		}		
		}
	}
	

