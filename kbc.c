#include<stdio.h>
#include <assert.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include <dos.h>
int set1()
{char x;
int result = 1000;
    printf("set1\n");
    system("COLOR F0");
    printf("\t\t\t\t\t\t\t\t\t\t\t:-:-:-:-:-Welcome to the hotseat-:-:-:-:-:\n\n");
    //question 1
printf("Ques.1).What is the basic thing required in an interview?\n");
    printf("A).Confidence\t\t\tB).Personality\nC).Dressing Sense\t\t\tD).Attitude\n\n\n");
    x=getch();
    if(x=='a'||x=='d')
    {
        result=result*10;
        printf("\n\nHurrah!! Your answer is correct.\t\t\t\t\t\tYou Won %d\n\n",result);
    }

    else
    {system("cls");
        system("COLOR 4E");
        printf("\t\tYour answer is wrong");
        return 0;
    }
    printf("\n\t\t\t\t\tPress Enter To Go To Next Question");
    if(getch())
    system("cls");
    //question 2
    printf("Ques.2).What is the skill that everyone must have?\n");
    printf("A).Cooking\t\t\tB).Management\nC).Speaking\t\t\tD).Communication\n");
    x=getch();
    if(x=='b'||x=='d')
    {
        result=result*10;
        printf("Hurrah!! Your answer is correct.\t\t\t\t\t\tYou Won %d",result);
    }

    else
    {system("cls");
        system("COLOR 4E");
        printf("\t\tYour answer is wrong");
        return 10000;
    }
    printf("\t\t\t\t\tPress Enter To Go To Next Question");
    if(getch())
    system("cls");
    // question 3
    printf("Ques.3).How to be at the top position in the market?\n");
    printf("A).By cheating others\t\t\tB).Having marketing skills\nC).Know ups and downs\t\t\tD).Identifyig trends\n");
    x=getch();
    if(x=='b'||x=='d')
    {
        result=result*10;
        printf("Hurrah!! Your answer is correct.\t\t\t\t\t\tYou Won %d",result);
    }

    else
    {system("cls");
        system("COLOR 4E");
        printf("\t\tYour answer is wrong");
        return 110000;
    }
    printf("\t\t\t\t\tPress Enter To Go To Next Question");
    if(getch())
    system("cls");
    //question 4
    printf("Ques.4).To remove Bugs, one must have knowlegde of?\n");
    printf("A).computer\t\t\tB).troubleshooting\nC).Internet\t\t\tD).Coding\n");
    x=getch();
    if(x=='b'||x=='d')
    {
        result=result*10;
        printf("Hurrah!! Your answer is correct.\t\t\t\t\t\tYou Won %d",result);
    }

    else
    {system("cls");
        system("COLOR 4E");
        printf("\t\tYour answer is wrong");
        return 1110000;
    }
    printf("\t\t\t\t\tPress Enter To Go To Next Question");
    if(getch())
    system("cls");
    //question 5
    printf("Ques.5).What is the first step to solve a problem?\n");
    printf("A).ask others\t\t\tB).hit and trial\nC).apply logic\t\t\tD).break it into smaller parts\n");
    x=getch();
    if(x=='c'||x=='d')
    {
        result=result*10;
        printf("Hurrah!! Your answer is correct.\t\t\t\t\t\tYou Won %d",result);
    }

    else
    {system("cls");
        system("COLOR 4E");
        printf("\t\tYour answer is wrong");
        return 11110000;
    }
    printf("\t\t\t\t\tPress Enter To Go To Next Question");
    if(getch())
    system("cls");
    //question 6
    printf("Ques.6).What is the basic skills required in leadership?\n");
    printf("A).bossy attitude\t\t\tB).lead with attitude\nC).Work together\t\t\tD).Guide postively\n");
    x=getch();
    if(x=='c'||x=='d')
    {
        result=result*10;
        printf("Hurrah!! Your answer is correct.\t\t\t\t\t\tYou Won %d",result);
    }

    else
    {system("cls");
        system("COLOR 4E");
        printf("\t\tYour answer is wrong");
        return 111110000;
    }
    printf("\t\t\t\t\tPress Enter To Go To Next Question");
    if(getch())
    system("cls");
    //question 7
    system("COLOR F0");
    printf("Ques.7).what is the skill that CSE Graduate must have?\n");
    printf("A).Personality\t\t\tB).cooking maggie at 12 o clock\nC).Patience\t\t\tD).Mathematics\n");
    x=getch();
    if(x=='b'||x=='c')
    {
        result=result+result*10;
    system("cls");}
    else
    {system("cls");
    system("COLOR 4E");
    printf("\t\tYour answer is wrong");
        return 111111000;
    }
    return result;

};
int set2()
{char x;
int result = 100;
    printf("set2\n");
    system("COLOR F0");
    printf("\t\t\t\t\t\t\t\t\t\t\t:-:-:-:-:-Welcome to the hotseat-:-:-:-:-:\n\n");
    //question 1
printf("Ques.1).How can we communicate with others?\n");
    printf("A).by saying excuse me!\t\t\tB).by poking\nC).by saying Oee\t\t\tD).by saying hello\n");
    x=getch();
    if(x=='a'||x=='d')
    {
        result=result*10;
        printf("Hurrah!! Your answer is correct.\t\t\t\t\t\tYou Won %d",result);
    }

    else
    {system("cls");
        system("COLOR 4E");
        printf("\t\tYour answer is wrong");
        return 0;
    }
    printf("\t\t\t\t\tPress Enter To Go To Next Question");
    if(getch())
    system("cls");
    //question 2
    printf("Ques.2).What is the best medicine for anyone?\n");
    printf("A).Paracetamol\t\t\tB).Citragin\nC).Laugh\t\t\tD).Love\n");
    x=getch();
    if(x=='d'||x=='c')
    {
        result=result*10;
        printf("Hurrah!! Your answer is correct.\t\t\t\t\t\tYou Won %d",result);
    }

    else
    {system("cls");
        system("COLOR 4E");
        printf("\t\tYour answer is wrong");
        return 1000;
    }
    printf("\t\t\t\t\tPress Enter To Go To Next Question");
    if(getch())
    system("cls");
    // question 3
    printf("Ques.3).In IT sector, most preficiency is required in ?\n");
    printf("A).Hardware\t\t\tB).communication\nC).Programming\t\t\tD).Sitting\n");
    x=getch();
    if(x=='a'||x=='d')
    {
        result=result*10;
        printf("Hurrah!! Your answer is correct.\t\t\t\t\t\tYou Won %d",result);
    }

    else
    {system("cls");
        system("COLOR 4E");
        printf("\t\tYour answer is wrong");
        return 11000;
    }
    printf("\t\t\t\t\tPress Enter To Go To Next Question");
    if(getch())
    system("cls");
    //question 4
    printf("Ques.4).what is the first step in starting a start-up?\n");
    printf("A).Scalability\t\t\tB).Money\nC).finding investors\t\t\tD).Gathering information\n");
    x=getch();
    if(x=='a'||x=='d')
    {
        result=result*10;
        printf("Hurrah!! Your answer is correct.\t\t\t\t\t\tYou Won %d",result);
    }

    else
    {system("cls");
        system("COLOR 4E");
        printf("\t\tYour answer is wrong");
        return 111000;
    }
    printf("\t\t\t\t\tPress Enter To Go To Next Question");
    if(getch())
    system("cls");
    //question 5
    printf("Ques.5).Skills programmer must have while solving a problem?\n");
    printf("A).multi-tasker\t\t\tB).sneak peak\nC).patience\t\t\tD).Bird-eye view\n");
    x=getch();
    if(x=='c'||x=='d')
    {
        result=result*10;
        printf("Hurrah!! Your answer is correct.\t\t\t\t\t\tYou Won %d",result);
    }

    else
    {system("cls");
        system("COLOR 4E");
        printf("\t\tYour answer is wrong");
        return 1111000;
    }
    printf("\t\t\t\t\tPress Enter To Go To Next Question");
    if(getch())
    system("cls");
    //question 6
    printf("Ques.6).what matters in coding?\n");
    printf("A).Logic\t\t\tB).Syntax\nC).confidence\t\t\tD).compiler\n");
    x=getch();
    if(x=='a'||x=='d')
    {
        result=result*10;
        printf("Hurrah!! Your answer is correct.\t\t\t\t\t\tYou Won %d",result);
    }

    else
    {system("cls");
        system("COLOR 4E");
        printf("\t\tYour answer is wrong");
        return 11111000;
    }
    printf("\t\t\t\t\tPress Enter To Go To Next Question");
    if(getch())
    system("cls");
    //question 7
    system("COLOR F0");
    printf("Ques.7).Quality of a good programmer?\n");
    printf("A).attitude\t\t\tB).crtical thinking\nC).good looking\t\t\tD).solving complex problems\n");
    x=getch();
    if(x=='b'||x=='d')
    {
        result=result+result*10;
    system("cls");}
    else
    {system("cls");
    system("COLOR 4E");
    printf("\t\tCongratulations, you have given all the answers correctly");
        return 111111000;
    }
    return result;

};
int set3()
{char x;
int result = 100;
    printf("set3\n");
    system("COLOR F0");
    printf("\t\t\t\t\t\t\t\t\t\t\t:-:-:-:-:-Welcome to the hotseat-:-:-:-:-:\n\n");
    //question 1
printf("Ques.1).Give it and take it?\n");
    printf("A).money\t\t\tB).knowlegde\nC).love\t\t\tD).respect\n");
    x=getch();
    if(x=='a'||x=='d')
    {
        result=result*10;
        printf("Hurrah!! Your answer is correct.\t\t\t\t\t\tYou Won %d",result);
    }

    else
    {system("cls");
        system("COLOR 4E");
        printf("\t\tYour answer is wrong");
        return 0;
    }
    printf("\t\t\t\t\tPress Enter To Go To Next Question");
    if(getch())
    system("cls");
    //question 2
    printf("Ques.2).What is the Pareto Principle?\n");
    printf("A).Do right Effort.\t\t\tB).Less Effort which give more result\nC).Do Less effort.\t\t\tD).None of these.\n");
    x=getch();
    if(x=='a'||x=='b')
    {
        result=result*10;
        printf("Hurrah!! Your answer is correct.\t\t\t\t\t\tYou Won %d",result);
    }

    else
    {system("cls");
        system("COLOR 4E");
        printf("\t\tYour answer is wrong");
        return 1000;
    }
    printf("\t\t\t\t\tPress Enter To Go To Next Question");
    if(getch())
    system("cls");
    // question 3
    printf("Ques.3).How force field analysis useful in coding?\n");
    printf("A).breaking problems into smaller parts will be easy.\t\t\tB).make programs rapidly.\nC).coding will be easy.\t\t\tD).make coding efficient.\n");
    x=getch();
    if(x=='a'||x=='c')
    {
        result=result*10;
        printf("Hurrah!! Your answer is correct.\t\t\t\t\t\tYou Won %d",result);
    }

    else
    {system("cls");
        system("COLOR 4E");
        printf("\t\tYour answer is wrong");
        return 11000;
    }
    printf("\t\t\t\t\tPress Enter To Go To Next Question");
    if(getch())
    system("cls");
    //question 4
    printf("Ques.3).How should we make Our decisions?\n");
    printf("A).By hit and trial.\t\t\tB).Get proper information before making decision.\nC).By asking others.\t\t\tD).By thinking twice.\n");
    x=getch();
    if(x=='b'||x=='d')
    {
        result=result*10;
        printf("Hurrah!! Your answer is correct.\t\t\t\t\t\tYou Won %d",result);
    }

    else
    {system("cls");
        system("COLOR 4E");
        printf("\t\tYour answer is wrong");
        return 111000;
    }
    printf("\t\t\t\t\tPress Enter To Go To Next Question");
    if(getch())
    system("cls");
    //question 5
    printf("Ques.5).Should we follow the trend?\n");
    printf("A).depends upon you.\t\t\tB).Depends upon the topic.\nC).No.\t\t\tD).Ofcourse.\n");
    x=getch();
    if(x=='b'||x=='d')
    {
        result=result*10;
        printf("Hurrah!! Your answer is correct.\t\t\t\t\t\tYou Won %d",result);
    }

    else
    {system("cls");
        system("COLOR 4E");
        printf("\t\tYour answer is wrong");
        return 1111000;
    }
    printf("\t\t\t\t\tPress Enter To Go To Next Question");
    if(getch())
    system("cls");
    //question 6
    printf("Ques.6).How many or which programming languages a person should know/learn to be better in coding?\n");
    printf("A).Language from which you get highest paid jobs.\t\t\tB).Language in which the person is interested.\nC).Latest programming language\t\t\tD).All languages.\n");
    x=getch();
    if(x=='c'||x=='b')
    {
        result=result*10;
        printf("Hurrah!! Your answer is correct.\t\t\t\t\t\tYou Won %d",result);
    }

    else
    {system("cls");
        system("COLOR 4E");
        printf("\t\tYour answer is wrong");
        return 11111000;
    }
    printf("\t\t\t\t\tPress Enter To Go To Next Question");
    if(getch())
    system("cls");
    //question 7
    system("COLOR F0");
    printf("Ques.7).What a thief thinks when he go for a robbery?\n");
    printf("A).Only think to grab money.\t\t\tB).Do not think.\nC).six thinking Hat skills.\t\t\tD).process mapping.\n");
    x=getch();
    if(x=='d'||x=='c')
    {
        result=result+result*10;
    system("cls");}
    else
    {system("cls");
    system("COLOR 4E");
    printf("\t\tYour answer is wrong");
        return 111111000;
    }
    return result;

};
int set4()
{char x;
int result = 10000;
    printf("set4\n");
    system("COLOR F0");
    printf("\t\t\t\t\t\t\t\t\t\t\t:-:-:-:-:-Welcome to the hotseat-:-:-:-:-:\n\n");
    //question 1
printf("Ques.1).what should we do after breaking the problem into smaller parts?\n");
    printf("A).solve the easiest among the smaller.\t\t\tB).Do nothing.\nC).combine it as it is and then solve.\t\t\tD).solve the smaller parts then.\n");
    x=getch();
    if(x=='a'||x=='d')
    {
        result=result*10;
        printf("Hurrah!! Your answer is correct.\t\t\t\t\t\tYou Won %d",result);
    }

    else
    {system("cls");
        system("COLOR 4E");
        printf("\t\tYour answer is wrong");
        return 0;
    }
    printf("\t\t\t\t\tPress Enter To Go To Next Question");
    if(getch())
    system("cls");
    //question 2
    printf("Ques.2).what is the most important thing when we collect the data?\n");
    printf("A).collect useless data.\t\t\tB).Mess up the information.\nC).Deductive reasoning.\t\t\tD).Data analysis.\n");
    x=getch();
    if(x=='c'||x=='d')
    {
        result=result*10;
        printf("Hurrah!! Your answer is correct.\t\t\t\t\t\tYou Won %d",result);
    }

    else
    {system("cls");
        system("COLOR 4E");
        printf("\t\tYour answer is wrong");
        return 100000;
    }
    printf("\t\t\t\t\tPress Enter To Go To Next Question");
    if(getch())
    system("cls");
    // question 3
    printf("Ques.3).what is the most important thing that a artist can have?\n");
    printf("A).out of the box thinking\t\t\tB).mind\nC).money\t\t\tD).Creativity.\n");
    x=getch();
    if(x=='a'||x=='d')
    {
        result=result*10;
        printf("Hurrah!! Your answer is correct.\t\t\t\t\t\tYou Won %d",result);
    }

    else
    {system("cls");
        system("COLOR 4E");
        printf("\t\tYour answer is wrong");
        return 1100000;
    }
    printf("\t\t\t\t\tPress Enter To Go To Next Question");
    if(getch())
    system("cls");
    //question 4
    printf("Ques.4).what is the first perspective on which a person can be judged?\n");
    printf("A).nature\t\t\tB).personality\nC).confidence\t\t\tD).money\n");
    x=getch();
    if(x=='a'||x=='c')
    {
        result=result*10;
        printf("Hurrah!! Your answer is correct.\t\t\t\t\t\tYou Won %d",result);
    }

    else
    {system("cls");
        system("COLOR 4E");
        printf("\t\tYour answer is wrong");
        return 11100000;
    }
    printf("\t\t\t\t\tPress Enter To Go To Next Question");
    if(getch())
    system("cls");
    //question 5
    printf("Ques.5).Skill everyone must have?\n");
    printf("A).Sleeping\t\t\tB).Communication\nC).Cooking\t\t\tD).Management\n");
    x=getch();
    if(x=='b'||x=='d')
    {
        result=result*10;
        printf("Hurrah!! Your answer is correct.\t\t\t\t\t\tYou Won %d",result);
    }

    else
    {system("cls");
        system("COLOR 4E");
        printf("\t\tYour answer is wrong");
        return 111100000;
    }
    printf("\t\t\t\t\tPress Enter To Go To Next Question");
    if(getch())
    system("cls");
    //question 6
    printf("Ques.6).How to be at the top in the market?\n");
    printf("A).By baffling others.\t\t\tB).by show-off.\nC).Identifyig trend.\t\t\tD).Investing smartly.\n");
    x=getch();
    if(x=='c'||x=='d')
    {
        result=result*10;
        printf("Hurrah!! Your answer is correct.\t\t\t\t\t\tYou Won %d",result);
    }

    else
    {system("cls");
        system("COLOR 4E");
        printf("\t\tYour answer is wrong");
        return 1111100000;
    }
    printf("\t\t\t\t\tPress Enter To Go To Next Question");
    if(getch())
    system("cls");
    //question 7
    system("COLOR F0");
    printf("Ques.7).What is the Quality of a good IT professional?\n");
    printf("A).Having knowledge at a great extent.\t\t\tB).Look rich\nC).having attitude\t\t\tD).solving complex problems easily.\n");
    x=getch();
    if(x=='a'||x=='d')
    {
        result=result+result*10;
    system("cls");}
    else
    {system("cls");
    system("COLOR 4E");
    printf("\t\tCongratulations, You have given all the answers correctly");
        return 11111100000;
    }
    return result;

};
int set5()
{char x;
int result = 100;
    printf("set5\n");
    system("COLOR F0");
    printf("\t\t\t\t\t\t\t\t\t\t\t:-:-:-:-:-Welcome to the hotseat-:-:-:-:-:\n\n");
    //question 1
printf("Ques.1).What must be done to get the effective results in programming?\n");
    printf("A).Practice\t\t\tB).Code must be efficient.\nC).Exercise\t\t\tD).Presenting projects perfectly.\n");
    x=getch();
    if(x=='a'||x=='d')
    {
        result=result*10;
        printf("Hurrah!! Your answer is correct.\t\t\t\t\t\tYou Won %d",result);
    }

    else
    {system("cls");
        system("COLOR 4E");
        printf("\t\tYour answer is wrong");
        return 0;
    }
    printf("\t\t\t\t\tPress Enter To Go To Next Question");
    if(getch())
    system("cls");
    //question 2
    printf("Ques.2).What is the first step in the opening a startup?\n");
    printf("A).Collect money.\t\t\tB).Gathering all together.\nC).Make perfect team for that.\t\t\tD).Collect data about startup.\n");
    x=getch();
    if(x=='a'||x=='d')
    {
        result=result*10;
        printf("Hurrah!! Your answer is correct.\t\t\t\t\t\tYou Won %d",result);
    }

    else
    {system("cls");
        system("COLOR 4E");
        printf("\t\tYour answer is wrong");
        return 1000;
    }
    printf("\t\t\t\t\tPress Enter To Go To Next Question");
    if(getch())
    system("cls");
    // question 3
    printf("Ques.3).what is the one skill to get the job?\n");
    printf("A).eating skills\t\t\tB).Creativity skills\nC).thinking ability\t\t\tD).Communication skills\n");
    x=getch();
    if(x=='b'||x=='d')
    {
        result=result*10;
        printf("Hurrah!! Your answer is correct.\t\t\t\t\t\tYou Won %d",result);
    }

    else
    {system("cls");
        system("COLOR 4E");
        printf("\t\tYour answer is wrong");
        return 11000;
    }
    printf("\t\t\t\t\tPress Enter To Go To Next Question");
    if(getch())
    system("cls");
    //question 4
    printf("Ques.4).What civil engineers do?\n");
    printf("A).Sleeping\t\t\tB).7-S Framwork\nC).Cementing the walls.\t\t\tD).Process mapping.\n");
    x=getch();
    if(x=='b'||x=='d')
    {
        result=result*10;
        printf("Hurrah!! Your answer is correct.\t\t\t\t\t\tYou Won %d",result);
    }

    else
    {system("cls");
        system("COLOR 4E");
        printf("\t\tYour answer is wrong");
        return 111000;
    }
    printf("\t\t\t\t\tPress Enter To Go To Next Question");
    if(getch())
    system("cls");
    //question 5
    printf("Ques.5).What types of game should we play?\n");
    printf("A).PUBG\t\t\tB).Racing games\nC).Brain games\t\t\tD).Horrific games\n");
    x=getch();
    if(x=='a'||x=='c')
    {
        result=result*10;
        printf("Hurrah!! Your answer is correct.\t\t\t\t\t\tYou Won %d",result);
    }

    else
    {system("cls");
        system("COLOR 4E");
        printf("\t\tYour answer is wrong");
        return 1111000;
    }
    printf("\t\t\t\t\tPress Enter To Go To Next Question");
    if(getch())
    system("cls");
    //question 6
    printf("Ques.6).What a student should do in the class if he can't understand the topic?\n");
    printf("A).leave the class.\t\t\tB).learn how things work.\nC).Sit quietly\t\t\tD).Asking questions.\n");
    x=getch();
    if(x=='b'||x=='d')
    {
        result=result*10;
        printf("Hurrah!! Your answer is correct.\t\t\t\t\t\tYou Won %d",result);
    }

    else
    {system("cls");
        system("COLOR 4E");
        printf("\t\tYour answer is wrong");
        return 11111000;
    }
    printf("\t\t\t\t\tPress Enter To Go To Next Question");
    if(getch())
    system("cls");
    //question 7
    system("COLOR F0");
    printf("Ques.7).How can you improve your reading skills?\n");
    printf("A).By reading books\t\t\tB).By listening\nC).By playing word games.\t\t\tD).By eating.\n");
    x=getch();
    if(x=='a'||x=='c')
    {
        result=result+result*10;
    system("cls");}
    else
    {system("cls");
    system("COLOR 4E");
    printf("\t\tCongratulations,You have given all the answers correctly");
        return 111111000;
    }
    return result;

};

int main()
{
    printf("\t\t!\t!\t!\tWelcome to Kaun Banega Crorepati\t!\t!\t!\t\n\n\n\n");
    printf("\t\t\t...General Guidelines....\n");
    printf("\t\t\t-->There are total 7 questions.\n");
    printf("\t\t\t-->Each question has two right answers.\n");
    printf("\t\t\t-->You have to select one of the right answers.\n");
    printf("\t\t\t-->Good luck and Enjoy the game\n\n\n");

    time_t t = time(NULL);
    struct tm *tm = localtime(&t);
    char s[64];
    assert(strftime(s, sizeof(s), "%c", tm));
    printf("\t\t\t\t\t\t\t\t\t\t\tDATE & TIME:%s\n", s);
    printf("\t\t\t-->Press enter if you have read the guidelines....\n");
if(getch())
{int result;
    printf("\n\n\n\t\t\t-->Enter any lucky alphabet to start the game<--\n");

    int n=getch();
    system("cls");
    if(n > 5)
    {
        n = n%5;
        if(n == 0)
            n = 5;
    }
    if(n==1)
    {
        result = set1();
        printf("\nYou won %d rupees",result);
    }
    else
     if(n==2)
    {result = set2();
    printf("\nYou won %d rupees",result);
    }
    else if(n==3)
    {
        result = set3();
        printf("\nYou won %d rupees",result);
    }
    else if(n==4)
    {
        result = set4();
        printf("\nYou won %d rupees",result);
    }
    else
    {result =  set5();
     printf("\nYou won %d rupees",result);
     }
}
}
