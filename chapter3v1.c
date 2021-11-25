#include<stdio.h>
#include<conio.h>
void chapter3v1()
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
	printf("\n 1.run torward the village\n 2.sit quiet \n 3.discuss with max");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			printf("\n the existance of a village exited you so much \n you ran straight ahead torward the village");
			getch();
			printf("\n you hear something fall down \n you turn to see the monster fall on the ground\n and max was surrounded with his hands up");
			getch();
			printf("\n you put your hands up too \n both of you are directed torward a cage \n you are captured");
			getch();
			printf("\n the villager went to a big house when the one who looked like leader called them\n max says'this is our chance ,let's run'");
			getch();
			printf("\n 1.run\n 2.stay in cage");
			scanf("%d",&b);
			if(b==1)
			{
				printf("\n let's run'you say breaking the cage door \n hassling Max grabs a map from one of the huts \n you and max are hiding and moving causiously ");
				getch();
				printf("\nreaching near the village end you take monster's horn and start running away\n both of you are tired and you stop to rest below one of the tree");
				getch();
				ending1();
			}
			if(b==2);
			{
				printf("\n you clench your hand and start shouting \n max is trying to calm you down \n the villager came out");
				getch();
				printf("\n the villager seem furious \n maybe it's because you brought the monster to their village\n the villagers now took you and max blindfolded to a cliff");
				getch();
				printf("\n you are blindfolded and it feels like you're falling down");
				getch();
				death();
			}
		break;
		case 2:
			printf("\n you are confused with the blue flames \n you look torwards Max\n he shows you that monster is trembling with fear");
			getch();
			printf("\n do you want to go there or ask max?");
			getch();
			printf("\n1.go there\n2.ask max");
			scanf("%d",&c);
			if(c==1)
			{
				
			printf("\n the existance of a village exited you so much \n you ran straight ahead torward the village");
			getch();
			printf("\n you hear something fall down \n you turn to see the monster fall on the ground\n and max was surrounded with his hands up");
			getch();
			printf("\n you put your hands up too \n both of you are directed torward a cage \n you are captured");
			getch();
			printf("\n the villager went to a big house when the one who looked like leader called them\n max says'this is our chance ,let's run'");
			getch();
			printf("\n 1.run\n 2.stay in cage");
			scanf("%d",&d);
				if(d==1)
				{
					printf("\n let's run'you say breaking the cage door \n hassling Max grabs a map from one of the huts \n you and max are hiding and moving causiously ");
					getch();
					printf("\nreaching near the village end you take monster's horn and start running away\n both of you are tired and you stop to rest below one of the tree");
					getch();
					ending1();
				}
				if(d==2);
				{
					printf("\n you clench your hand and start shouting \n max is trying to calm you down \n the villager came out");
					getch();
					printf("\n the villager seem furious \n maybe it's because you brought the monster to their village\n the villagers now took you and max blindfolded to a cliff");
					getch();
					printf("\n you are blindfolded and it feels like you're falling down");
					getch();
					death();
				}
			}
			if(c==2)
			{
				printf("\n you ask max what you should do\n he says that the monster will hide here and both of you go to the village\nyou agree with him");
				getch();
				printf("\n you and max start walking to the village \n the villager start attacking you");
				getch();
				printf("\n do you fight back or you run");
				getch();
				printf("\n 1.fight back\n2.run");
				scanf("%d",&e);
				if(e==1)
				{
					printf("\nyou bring out the knife and Max arms himself too\n the villager are strong and powerful\n one of the villager cut max");
					getch();
					printf("the monster is running in to help you \n but one of the villager hits a dart \n the light is fading away for you\n");
					getch();
					death();
					}	
				if(e==2)
				{
					printf("\n There are too many people attacking us you say \n max and you start running away \n you pass the monster while you're running away");
					getch();
					printf("\nthe monster is trying to fight the villager back \n max says'he's buying us some time ,just run' ");
					getch();
					printf("\n you and max are on your way out \n the monster sacrificed himself to aid you");
					ending1();
				}
			}	
			
		break;
		case 3:
		 	printf("\n you ask monster and max what to do \n monster says that this village is very dangerous");
			getch();
			printf("what do you do?");
			getch();
			printf("\n1.go \n2.wait and see \n3.ask max");
			scanf("%d",&f);
			if(f==1)
			{
			printf("\n the existance of a village exited you so much \n you ran straight ahead torward the village");
			getch();
			printf("\n you hear something fall down \n you turn to see the monster fall on the ground\n and max was surrounded with his hands up");
			getch();
			printf("\n you put your hands up too \n both of you are directed torward a cage \n you are captured");
			getch();
			printf("\n the villager went to a big house when the one who looked like leader called them\n max says'this is our chance ,let's run'");
			getch();
			printf("\n 1.run\n 2.stay in cage");
			scanf("%d",&b);
			if(b==1)
			{
				printf("\n let's run'you say breaking the cage door \n hassling Max grabs a map from one of the huts \n you and max are hiding and moving causiously ");
				getch();
				printf("\nreaching near the village end you take monster's horn and start running away\n both of you are tired and you stop to rest below one of the tree");
				getch();
				ending1();
			}
			if(b==2);
			{
				printf("\n you clench your hand and start shouting \n max is trying to calm you down \n the villager came out");
				getch();
				printf("\n the villager seem furious \n maybe it's because you brought the monster to their village\n the villagers now took you and max blindfolded to a cliff");
				getch();
				printf("\n you are blindfolded and it feels like you're falling down");
				getch();
				death();
			}
				}
			if(f==2)
			{
				printf("\n the monster hides in while you and max go in \n you try to talk to villagers\n they seemed a little suspisous but they welcome you and max");
				getch();
				printf("\n you are taken to the chief of the village\n he asks'where are you headed' \n you say 'we are lost we want to go to euphoria'");
				getch();
				printf("\n he hands you a map saying this will help\n he offer's you some help for the way too ");
				getch();
				printf("\n you reject the help and insist on going with max\n then you leave the village \n the monster joins you too after a little walk");
				getch();
				ending2();
				}	
			if(f==3)
			{
				
				printf("\n you ask max what you should do\n he says that the monster will hide here and both of you go to the village\nyou agree with him");
				getch();
				printf("\n you and max start walking to the village \n the villager start attacking you");
				getch();
				printf("\n do you fight back or you run");
				getch();
				printf("\n 1.fight back\n2.run");
				scanf("%d",&g);
				if(g==1)
				{
					printf("\nyou bring out the knife and Max arms himself too\n the villager are strong and powerful\n one of the villager cut max");
					getch();
					printf("the monster is running in to help you \n but one of the villager hits a dart \n the light is fading away for you\n");
					getch();
					death();
					}	
				if(g==2)
				{
					printf("\n There are too many people attacking us you say \n max and you start running away \n you pass the monster while you're running away");
					getch();
					printf("\nthe monster is trying to fight the villager back \n max says'he's buying us some time ,just run' ");
					getch();
					printf("\n you and max are on your way out \n the monster sacrificed himself to aid you\n he's not coming is he?you say");
					getch();
					ending1();
				}
				}	
		break;		 	
	}
}
