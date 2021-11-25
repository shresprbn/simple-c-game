#include<stdio.h>
#include<conio.h>
void chapter1()
{
    int d,a,b,c,e,f,g,h; /*these are for decision making*/
	printf("THE CAVE"); 
	getch();
    system("cls");
    printf("You wake up with the sound of waterdrops.\n Rubbing your eyes you try to analyze the situation.\n in this huge cave system you have to get out to survive.");
    getch();
    printf("\n you turn on the torch and start examining the structure,  \n further ahead you see three branches.\n YOU have three options choose carefully");
    getch();
    printf("\n the first one seems dark one but no matter the torchlight might help \n the second one exhibits this dim light drawing me closer\n the third one seems slippery,it seems like a adventurous and daring one");
    getch();
	printf("\n 1.Go toward the dark tunnel \n 2.Go toward dim light \n 3.Go toward slippery way");     //goto label
    scanf("%d",&d);
    system("cls");
    switch (d){
	
    	case 1:
    		system("cls");
			printf("\n you start walking down the dark tunnel, \n suddenly you hear growling noise around you \n There it is a huge guy with his yellow teeth and a huge eye poking through");
    		getch();
			printf("\n It's a cyclope \n WHAT do you do? \n Do you feel like running away? or Do you take a chance and fight it");
			getch();
			printf("\n 1.Run away \n2.FIGHT");
			scanf("%d",&a) ;
			system("cls");
			if(a==1)
		   	{
		   	printf("\n You are scared, RUN you say in your head \n your legs moves on its own and it's not noticed you \n now you've reached far enough you think");
		   	getch();
		    printf("\n You've run so much \n you're tired,you stop to rest for a while \n you sat doun on a rock to catch your breath \n the tourch is flickering light's out'");
		    getch();
		    printf("\n Do you keep walking or do you stop there");
		    getch();
		    printf("\n 1.Keep walking \n 2.Stay there");
			scanf("%d",&b);
		    system("cls");
			if(b==1)
		    { 
		    	printf("\n You search for the exit in a hurry \n you wanna see the sun fast the stone walls are scary \n there you find the exit");
		    	getch();
		    	printf("\n The light of the day is charming \n it seems like heaven out there");
				chapter2v2();		
			}
			else if(b==2)
			{
				printf("\n Its tiring. All that running has kicked in ,You cannot move an inch\n You shout for help");
				getch();
				printf("\n you hear someone shouting back \n he helps you up saying'hEy I'm max let's survive this together shall we'\n with max you came out of the cave");
			    getch();
			    printf("\n The light of the day is charming \n it seems like heaven out there");
			    getch();
			    chapter2v1();
			}
			else{
				printf("select 1 or 2");
				goto *34;}
		   }
			else if(a==2)
			{
				printf("You causiously go towards the monster. \n you take out the small knife with you and approach to attack it \n");
				getch();
				printf("the knife is inside the cyclop's hand \n he screams in pain and starts attacking you\n he catches you and throws you slam on the wall ");
				getch();
				printf("\n yes you're dead");
				death();
			} 
			else
		{
		 printf(" \n Enter 1 or 2");
		 scanf("%d",&a);
		 goto *23;
	    }
	    break;
		case 2:
		    system("cls");
			printf("\n slowly and causiously you move toward the light \n you shout 'hey....' \n someone shouts back help there's a monster here\n you run toward the sound");
			getch();
			printf("\n 'Help me' says the man \n you hesitate a little and say 'it's scary'' ");
			printf("\n 1.Help max \n 2.Hesitate ");
			scanf("%d",&c);
			system("cls");
			if(c==1) 
			{
				printf("\n You move fast to hunt it down. \n you pull out the knife and start attacking\n you two jointly are powerful enough to kill the monster");
				getch();
				printf("\n The monster is down and out. \n 'thanks mate'says max putting forward his hand \n it's best to work together,isn't it?");
				getch();
				printf("\n you move on with the introduction.\n His name is max and you two start walking together ");
				getch();
			   }   
			else if(c==2)
			{
				printf("\n It's scary you shout to him.\n that's why i need help he shouts back \n you are frozen with fear\n  ");
				getch();
				printf("slam he hit's the monster with his fire torch \n The monster runs away with fear \n 'scary right'says he");
				getch();
			    printf("\n you move on with the introduction.\n His name is max and you two start walking together ");
				getch();
			   }   
			else
			{
				printf("\n please choose 1 or 2");
				goto *73;
			}
			printf("\n 'Shall we find water first or shall we find food'asks max");	
			printf("\n 1.find water \n 2.Find food");
			scanf("%d",&e);			     
			system("cls");
			if(e==1)
			{
				printf("\n You look around for water in the cave \n max says'hey look there',you see small water stream flowing down\n let's follow that path you say");
				getch();
				printf("\n There it is a huge water mass waiting to be discovered. \n you are exited but beware of incoming dangers too..");
				getch();
				printf("\n 1.jump into the lake thingy \n 2.Examine the water");
				scanf("%d",&f);

				if(f==1)
				{
					printf("Excited to find water,you jump into the water shouting whoooo....\n you drink a whole lot of water. \n Your stomach starts hurting, maybe the fungi developed in the cave has infected the water");
					getch();
					printf("\n your eyes seems to fade very slowly \n you see max trying to drink water you try to tell him stop\n but your voice dies out and everything goes black ");
					death();
				}
				else if(f==2)
				{
					printf("\n carefully examining the terrain you move in toward the water body \n 'stop'shouts max \n the water is contaminated don't drink he warns you\n");
					getch();
					printf("\n then he takes out his bottle pours in some kind of yellow powder \n then he takes your bottle does the same and says'don't drink this water for 10 mins'");
					getch();
					printf("\n 'hey! here's a trail' you say \n 'let's follow it 'max suggests \n On the way out max asks'you have a family out there?'\n 'Yes, yes i do 'you answer remembring them");
					getch();
					printf("\n as you step out of the cave you say'wait a little longer,my love' \n and then you look up to the bright sun after a long time");
					chapter2v1();
				}
				else
				{
					printf("\n please choose 1 or 2");
					goto *108;
				}
		    }
			else if(e==2)	
			{
				printf("\n I'am hungry a lot let's search for food \n Max agrees with you \n you stroll around the cave \n you're attracted by the wird noise");
				getch();
				printf("\n It's a bat cave \n do you wanna charge in? or do you wanna bail out\n");
				getch();
				printf("\n 1.attack \n 2.bail out");
				scanf("%d",&g);
				system("cls");
				if(g==1)
				{
					printf("\n the sound is getting bigger and sounds a little evil \n do you still wanna go?");
					printf("\n1.yes \n2.no");
					scanf("%d",&h);
					if(h==1)
					{
						printf("\n the sound is getting larger and larger\n the bats all comes out at once and they knock you down");
						getch();
						printf("\nThe lights seems to fade away \n you see Max running from the bats and it get's all dark");
						death();
					}
					else if(h==2)
					{
						printf("\n you get down slowly and tell max about the sound\n he agrees to go on forward \n your stomach is growling and max shouts 'here is some mushroom, these one's are edible' ");
						getch();
						printf("\n 'hey! here's a trail' you say \n 'let's follow it 'max suggests \n On the way out max asks'you have a family out there?'\n 'Yes, yes i do 'you answer remembring them");
						getch();
						printf("\n as you step out of the cave you say'wait a little longer,my love' \n and then you look up to the bright sun after a long time");
						getch();
						chapter2v1();
					}
					else
					{
						printf("\n enter 1 or 2");
						goto *145;
					}
				}
			else if(g==2)
			{
					printf("\n 'hey! here's a trail' you say \n 'let's follow it 'max suggests \n On the way out max asks'you have a family out there?'\n 'Yes, yes i do 'you answer remembring them");
					getch();
					printf("\n as you step out of the cave you say'wait a little longer,my love' \n and then you look up to the bright sun after a long time");
					getch();
					chapter2v1();
					
				 } 	
				else
				{
				printf("\n Enter 1 or 2");
				goto *101;
			}
				break;
		case 3:
		{
			printf("\n the pathway is slippery \n you think you've made a bad choice \n You fall down a hole ");
			getch();
			printf("\n Yes,you're dead");
			death();
		}
}
}
}


