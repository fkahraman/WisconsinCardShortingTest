#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <conio.h>

char *message = "Welcome to Wisconsin Card Sorting Test \n";

char *CardOneFigure[16];
unsigned int CardOneNumber;
char *CardTwoFigure[16];
unsigned int CardTwoNumber;
char *CardThreeFigure[16];
unsigned int CardThreeNumber;
char *CardFourFigure[16];
unsigned int CardFourNumber;
char *CardFiveFigure[16];
unsigned int CardFiveNumber;
char *CardSixFigure[16];
unsigned int CardSixNumber;
char *CardSevenFigure[16];
unsigned int CardSevenNumber;
char *CardEightFigure[16];
unsigned int CardEightNumber;
char *CardNineFigure[16];
unsigned int CardNineNumber;

unsigned int CardNo;

char First[64];
char Second[64];
char Third[64];
char Fourth[64];

void SelectFigure(int cardNo)
{
    int chooseFigure;

    Choose:

    system("CLS");
    printf("Select Figure!\n\n");
    printf("1- Square\n");
    printf("2- Star\n");
    printf("3- Triangle\n");
    printf("4- Circle\n\n");

    scanf("%d", &chooseFigure);

    if(cardNo == 1)
    {
        if(chooseFigure == 1)
            *CardOneFigure = "Square";

        else if(chooseFigure == 2)
            *CardOneFigure = "Star";

        else if(chooseFigure == 3)
            *CardOneFigure = "Triangle";

        else if(chooseFigure == 4)
            *CardOneFigure = "Circle";

        else
            goto Choose;
    }

    else if(cardNo == 2)
    {
        if(chooseFigure == 1)
            *CardTwoFigure = "Square";

        else if(chooseFigure == 2)
            *CardTwoFigure = "Star";

        else if(chooseFigure == 3)
            *CardTwoFigure = "Triangle";

        else if(chooseFigure == 4)
            *CardTwoFigure = "Circle";

        else
            goto Choose;
    }

    else if(cardNo == 3)
    {
        if(chooseFigure == 1)
            *CardThreeFigure = "Square";

        else if(chooseFigure == 2)
            *CardThreeFigure = "Star";

        else if(chooseFigure == 3)
            *CardThreeFigure = "Triangle";

        else if(chooseFigure == 4)
            *CardThreeFigure = "Circle";

        else
           goto Choose;
    }

    else if(cardNo == 4)
    {
        if(chooseFigure == 1)
            *CardFourFigure = "Square";

        else if(chooseFigure == 2)
            *CardFourFigure = "Star";

        else if(chooseFigure == 3)
            *CardFourFigure = "Triangle";

        else if(chooseFigure == 4)
            *CardFourFigure = "Circle";

        else
            goto Choose;
    }

    else if(cardNo == 5)
    {
        if(chooseFigure == 1)
            *CardFiveFigure = "Square";

        else if(chooseFigure == 2)
            *CardFiveFigure = "Star";

        else if(chooseFigure == 3)
            *CardFiveFigure = "Triangle";

        else if(chooseFigure == 4)
            *CardFiveFigure = "Circle";

        else
            goto Choose;
    }

    else if(cardNo == 6)
    {
        if(chooseFigure == 1)
            *CardSixFigure = "Square";

        else if(chooseFigure == 2)
            *CardSixFigure = "Star";

        else if(chooseFigure == 3)
            *CardSixFigure = "Triangle";

        else if(chooseFigure == 4)
            *CardSixFigure = "Circle";

        else
           goto Choose;
    }

    else if(cardNo == 7)
    {
        if(chooseFigure == 1)
            *CardSevenFigure = "Square";

        else if(chooseFigure == 2)
            *CardSevenFigure = "Star";

        else if(chooseFigure == 3)
            *CardSevenFigure = "Triangle";

        else if(chooseFigure == 4)
            *CardSevenFigure = "Circle";

        else
            goto Choose;
    }

    else if(cardNo == 8)
    {
        if(chooseFigure == 1)
            *CardEightFigure = "Square";

        else if(chooseFigure == 2)
            *CardEightFigure = "Star";

        else if(chooseFigure == 3)
            *CardEightFigure = "Triangle";

        else if(chooseFigure == 4)
            *CardEightFigure = "Circle";

        else
            goto Choose;
    }

    else if(cardNo == 9)
    {
        if(chooseFigure == 1)
            *CardNineFigure = "Square";

        else if(chooseFigure == 2)
            *CardNineFigure = "Star";

        else if(chooseFigure == 3)
            *CardNineFigure = "Triangle";

        else if(chooseFigure == 4)
            *CardNineFigure = "Circle";

        else
            goto Choose;
    }
}
int SelectFigureNumber(int figureNo)
{
    int chooseNumber;

    Choose:

    system("CLS");
    printf("Please select to number of figure!\n\n");
    printf("1- One\n");
    printf("2- Two\n");
    printf("3- Three\n");
    printf("4- Four\n");
    printf("5- Five\n");
    printf("6- Six\n");
    printf("7- Seven\n");
    printf("8- Eight\n");
    printf("9- Nine\n\n");

    scanf("%d", &chooseNumber);

    if(figureNo == 1)
    {
        if(chooseNumber == 1)
            CardOneNumber = 1;

        else if(chooseNumber == 2)
            CardOneNumber = 2;

        else if(chooseNumber == 3)
            CardOneNumber = 3;

        else if(chooseNumber == 4)
            CardOneNumber = 4;

        else if(chooseNumber == 5)
            CardOneNumber = 5;

        else if(chooseNumber == 6)
            CardOneNumber = 6;

        else if(chooseNumber == 7)
            CardOneNumber = 7;

        else if(chooseNumber == 8)
            CardOneNumber = 8;

        else if(chooseNumber == 9)
            CardOneNumber = 9;

        else
            goto Choose;
    }

    else if(figureNo == 2)
    {
        if(chooseNumber == 1)
            CardTwoNumber = 1;

        else if(chooseNumber == 2)
            CardTwoNumber = 2;

        else if(chooseNumber == 3)
            CardTwoNumber = 3;

        else if(chooseNumber == 4)
            CardTwoNumber = 4;

        else if(chooseNumber == 5)
            CardTwoNumber = 5;

        else if(chooseNumber == 6)
            CardTwoNumber = 6;

        else if(chooseNumber == 7)
            CardTwoNumber = 7;

        else if(chooseNumber == 8)
            CardTwoNumber = 8;

        else if(chooseNumber == 9)
            CardTwoNumber = 9;

        else
            goto Choose;
    }

    else if(figureNo == 3)
    {
        if(chooseNumber == 1)
            CardThreeNumber = 1;

        else if(chooseNumber == 2)
            CardThreeNumber = 2;

        else if(chooseNumber == 3)
            CardThreeNumber = 3;

        else if(chooseNumber == 4)
            CardThreeNumber = 4;

        else if(chooseNumber == 5)
            CardThreeNumber = 5;

        else if(chooseNumber == 6)
            CardThreeNumber = 6;

        else if(chooseNumber == 7)
            CardThreeNumber = 7;

        else if(chooseNumber == 8)
            CardThreeNumber = 8;

        else if(chooseNumber == 9)
            CardThreeNumber = 9;

        else
            goto Choose;
    }

    else if(figureNo == 4)
    {
        if(chooseNumber == 1)
            CardFourNumber = 1;

        else if(chooseNumber == 2)
            CardFourNumber = 2;

        else if(chooseNumber == 3)
            CardFourNumber = 3;

        else if(chooseNumber == 4)
            CardFourNumber = 4;

        else if(chooseNumber == 5)
            CardFourNumber = 5;

        else if(chooseNumber == 6)
            CardFourNumber = 6;

        else if(chooseNumber == 7)
            CardFourNumber = 7;

        else if(chooseNumber == 8)
            CardFourNumber = 8;

        else if(chooseNumber == 9)
            CardFourNumber = 9;

        else
            goto Choose;
    }

    else if(figureNo == 5)
    {
        if(chooseNumber == 1)
            CardFiveNumber = 1;

        else if(chooseNumber == 2)
            CardFiveNumber = 2;

        else if(chooseNumber == 3)
            CardFiveNumber = 3;

        else if(chooseNumber == 4)
            CardFiveNumber = 4;

        else if(chooseNumber == 5)
            CardFiveNumber = 5;

        else if(chooseNumber == 6)
            CardFiveNumber = 6;

        else if(chooseNumber == 7)
            CardFiveNumber = 7;

        else if(chooseNumber == 8)
            CardFiveNumber = 8;

        else if(chooseNumber == 9)
            CardFiveNumber = 9;

        else
            goto Choose;
    }

    else if(figureNo == 6)
    {
        if(chooseNumber == 1)
            CardSixNumber = 1;

        else if(chooseNumber == 2)
            CardSixNumber = 2;

        else if(chooseNumber == 3)
            CardSixNumber = 3;

        else if(chooseNumber == 4)
            CardSixNumber = 4;

        else if(chooseNumber == 5)
            CardSixNumber = 5;

        else if(chooseNumber == 6)
            CardSixNumber = 6;

        else if(chooseNumber == 7)
            CardSixNumber = 7;

        else if(chooseNumber == 8)
            CardSixNumber = 8;

        else if(chooseNumber == 9)
            CardSixNumber = 9;

        else
            goto Choose;
    }

    else if(figureNo == 7)
    {
        if(chooseNumber == 1)
            CardSevenNumber = 1;

        else if(chooseNumber == 2)
            CardSevenNumber = 2;

        else if(chooseNumber == 3)
            CardSevenNumber = 3;

        else if(chooseNumber == 4)
            CardSevenNumber = 4;

        else if(chooseNumber == 5)
            CardSevenNumber = 5;

        else if(chooseNumber == 6)
            CardSevenNumber = 6;

        else if(chooseNumber == 7)
            CardSevenNumber = 7;

        else if(chooseNumber == 8)
            CardSevenNumber = 8;

        else if(chooseNumber == 9)
            CardSevenNumber = 9;

        else
            goto Choose;
    }

    else if(figureNo == 8)
    {
        if(chooseNumber == 1)
            CardEightNumber = 1;

        else if(chooseNumber == 2)
            CardEightNumber = 2;

        else if(chooseNumber == 3)
            CardEightNumber = 3;

        else if(chooseNumber == 4)
            CardEightNumber = 4;

        else if(chooseNumber == 5)
            CardEightNumber = 5;

        else if(chooseNumber == 6)
            CardEightNumber = 6;

        else if(chooseNumber == 7)
            CardEightNumber = 7;

        else if(chooseNumber == 8)
            CardEightNumber = 8;

        else if(chooseNumber == 9)
            CardEightNumber = 9;

        else
            goto Choose;
    }

    else if(figureNo == 9)
    {
        if(chooseNumber == 1)
            CardNineNumber = 1;

        else if(chooseNumber == 2)
            CardNineNumber = 2;

        else if(chooseNumber == 3)
            CardNineNumber = 3;

        else if(chooseNumber == 4)
            CardNineNumber = 4;

        else if(chooseNumber == 5)
            CardNineNumber = 5;

        else if(chooseNumber == 6)
            CardNineNumber = 6;

        else if(chooseNumber == 7)
            CardNineNumber = 7;

        else if(chooseNumber == 8)
            CardNineNumber = 8;

        else if(chooseNumber == 9)
            CardNineNumber = 9;

        else
            goto Choose;
    }
}

void ShowAllCards()
{
    int delay;

    system("CLS");
    printf("Cards!\n\n");
    printf("1- %d %s \n", CardOneNumber, *CardOneFigure);
    printf("2- %d %s \n", CardTwoNumber, *CardTwoFigure);
    printf("3- %d %s \n", CardThreeNumber, *CardThreeFigure);
    printf("4- %d %s \n", CardFourNumber, *CardFourFigure);
    printf("5- %d %s \n", CardFiveNumber, *CardFiveFigure);
    printf("6- %d %s \n", CardSixNumber, *CardSixFigure);
    printf("7- %d %s \n", CardSevenNumber, *CardSevenFigure);
    printf("8- %d %s \n", CardEightNumber, *CardEightFigure);
    printf("9- %d %s \n \n", CardNineNumber, *CardNineFigure);

    printf("Press any key to exit!\n\n");
    getch();
}

void DestroyCards(void)
{
    CardOneFigure[0] = '\0';
    CardTwoFigure[0] = '\0';
    CardThreeFigure[0] = '\0';
    CardFourFigure[0] = '\0';
    CardFiveFigure[0] = '\0';
    CardSixFigure[0] = '\0';
    CardSevenFigure[0] = '\0';
    CardEightFigure[0] = '\0';
    CardNineFigure[0] = '\0';

    CardOneNumber = 0;
    CardTwoNumber = 0;
    CardThreeNumber = 0;
    CardFourNumber = 0;
    CardFiveNumber = 0;
    CardSixNumber = 0;
    CardSevenNumber = 0;
    CardEightNumber = 0;
    CardNineNumber = 0;

}

void CreateCrad(void)
{
    int card = 1;
    int CardNoStatic;
    bool ControlFlag;

    Choose:

    DestroyCards();

    system("CLS");
    printf("Please select to piece of cards!\n\n");
    printf("1- One\n");
    printf("2- Two\n");
    printf("3- Tree\n");
    printf("4- Four\n");
    printf("5- Five\n");
    printf("6- Six\n");
    printf("7- Seven\n");
    printf("8- Eight\n");
    printf("9- Nine\n\n");

    scanf("%d", &CardNo);

    if(CardNo == 1)
        ControlFlag = true;

    else if(CardNo == 2)
        ControlFlag = true;

    else if(CardNo == 3)
        ControlFlag = true;

    else if(CardNo == 4)
        ControlFlag = true;

    else if(CardNo == 5)
        ControlFlag = true;

    else if(CardNo == 6)
        ControlFlag = true;

    else if(CardNo == 7)
        ControlFlag = true;

    else if(CardNo == 8)
        ControlFlag = true;

    else if(CardNo == 9)
        ControlFlag = true;

    else
        ControlFlag = false;

    if(ControlFlag == false)
        goto Choose;


    CardNoStatic = CardNo;
    CardNo = 1;

    while(card <= CardNoStatic)
    {
        SelectFigure(CardNo);
        SelectFigureNumber(CardNo);
        card += 1;
        CardNo += 1;

    }
}

void BuildCards(void)
{
    unsigned int card = 1;

    struct {
		int FigureNumber;
		char *Figure;
		bool Flag;

	} CardOne, CardTwo, CardThree, CardFour, CardFive,
        CardSix, CardSeven, CardEight, CardNine;

    CardOne.FigureNumber = CardOneNumber;
    CardTwo.FigureNumber = CardTwoNumber;
    CardThree.FigureNumber = CardThreeNumber;
    CardFour.FigureNumber = CardFourNumber;
    CardFive.FigureNumber = CardFiveNumber;
    CardSix.FigureNumber = CardSixNumber;
    CardSeven.FigureNumber = CardSevenNumber;
    CardEight.FigureNumber = CardEightNumber;
    CardNine.FigureNumber = CardNineNumber;

    CardOne.Figure = *CardOneFigure;
    CardTwo.Figure = *CardTwoFigure;
    CardThree.Figure = *CardThreeFigure;
    CardFour.Figure = *CardFourFigure;
    CardFive.Figure = *CardFiveFigure;
    CardSix.Figure = *CardSixFigure;
    CardSeven.Figure = *CardSevenFigure;
    CardEight.Figure = *CardEightFigure;
    CardNine.Figure = *CardNineFigure;

    system("CLS");

    /*  *   *   *   *   Assignment   *   *   *   *   */

    First[0] = '\0';
    Second[0] = '\0';
    Third[0] = '\0';
    Fourth[0] = '\0';

    if (CardOne.Figure == "Circle")
        strcat(First, "CardOne");

    else if(CardOne.Figure == "Triangle")
        strcat(Second, "CardOne");

    else if(CardOne.Figure == "Square")
        strcat(Third, "CardOne");

    else if(CardOne.Figure == "Star")
        strcat(Fourth, "CardOne");


    if (CardTwo.Figure == "Circle")
        strcat(First, "CardTwo");

    else if(CardTwo.Figure == "Triangle")
        strcat(Second, "CardTwo");

    else if(CardTwo.Figure == "Square")
        strcat(Third, "CardTwo");

    else if(CardTwo.Figure == "Star")
        strcat(Fourth, "CardTwo");


    if (CardThree.Figure == "Circle")
        strcat(First, "CardThree");

    else if(CardThree.Figure == "Triangle")
        strcat(Second, "CardThree");

    else if(CardThree.Figure == "Square")
        strcat(Third, "CardThree");

    else if(CardThree.Figure == "Star")
        strcat(Fourth, "CardThree");


    if (CardFour.Figure == "Circle")
        strcat(First, "CardFour");

    else if(CardFour.Figure == "Triangle")
        strcat(Second, "CardFour");

    else if(CardFour.Figure == "Square")
        strcat(Third, "CardFour");

    else if(CardFour.Figure == "Star")
        strcat(Fourth, "CardFour");


    if (CardFive.Figure == "Circle")
        strcat(First, "CardFive");

    else if(CardFive.Figure == "Triangle")
        strcat(Second, "CardFive");

    else if(CardFive.Figure == "Square")
        strcat(Third, "CardFive");

    else if(CardFive.Figure == "Star")
        strcat(Fourth, "CardFive");


    if (CardSix.Figure == "Circle")
        strcat(First, "CardSix");

    else if(CardSix.Figure == "Triangle")
        strcat(Second, "CardSix");

    else if(CardSix.Figure == "Square")
        strcat(Third, "CardSix");

    else if(CardSix.Figure == "Star")
        strcat(Fourth, "CardSix");


    if (CardSeven.Figure == "Circle")
        strcat(First, "CardSeven");

    else if(CardSeven.Figure == "Triangle")
        strcat(Second, "CardSeven");

    else if(CardSeven.Figure == "Square")
        strcat(Third, "CardSeven");

    else if(CardSeven.Figure == "Star")
        strcat(Fourth, "CardSeven");


    if (CardEight.Figure == "Circle")
        strcat(First, "CardEight");

    else if(CardEight.Figure == "Triangle")
        strcat(Second, "CardEight");

    else if(CardEight.Figure == "Square")
        strcat(Third, "CardEight");

    else if(CardEight.Figure == "Star")
        strcat(Fourth, "CardEight");


    if (CardNine.Figure == "Circle")
        strcat(First, "CardNine");

    else if(CardNine.Figure == "Triangle")
        strcat(Second, "CardNine");

    else if(CardNine.Figure == "Square")
        strcat(Third, "CardNine");

    else if(CardNine.Figure == "Star")
        strcat(Fourth, "CardNine");


    /*  *   *   *   *   Control by First *   *   *   *   */

    if(strstr(First, "CardOne") != '\0')
        CardOne.Flag = true;

    else
        CardOne.Flag = false;


    if(strstr(First, "CardTwo") != '\0')
        CardTwo.Flag = true;

    else
        CardTwo.Flag = false;


    if(strstr(First, "CardThree") != '\0')
        CardThree.Flag = true;

    else
        CardThree.Flag = false;


    if(strstr(First, "CardFour") != '\0')
        CardFour.Flag = true;

    else
        CardFour.Flag = false;


    if(strstr(First, "CardFive") != '\0')
        CardFive.Flag = true;

    else
        CardFive.Flag = false;


    if(strstr(First, "CardSix") != '\0')
        CardSix.Flag = true;

    else
        CardSix.Flag = false;


    if(strstr(First, "CardSeven") != '\0')
        CardSeven.Flag = true;

    else
        CardSeven.Flag = false;


    if(strstr(First, "CardEight") != '\0')
        CardEight.Flag = true;

    else
        CardEight.Flag = false;


    if(strstr(First, "CardNine") != '\0')
        CardNine.Flag = true;

    else
        CardNine.Flag = false;

    /*  *   *   *   *   Write by First   *   *   *   *   */

    printf("Short by Edge!\n\n");

    if(CardOne.Flag == true)
    {
        printf("%d- %d %s\n",card,CardOne);
        card += 1;
    }

    if(CardTwo.Flag == true)
    {
        printf("%d- %d %s\n",card,CardTwo);
        card += 1;
    }

    if(CardThree.Flag == true)
    {
        printf("%d- %d %s\n",card,CardThree);
        card += 1;
    }

    if(CardFour.Flag == true)
    {
        printf("%d- %d %s\n",card,CardFour);
        card += 1;
    }

    if(CardFive.Flag == true)
    {
        printf("%d- %d %s\n",card,CardFive);
        card += 1;
    }

    if(CardSix.Flag == true)
    {
        printf("%d- %d %s\n",card,CardSix);
        card += 1;
    }

    if(CardSeven.Flag == true)
    {
        printf("%d- %d %s\n",card,CardSeven);
        card += 1;
    }

    if(CardEight.Flag == true)
    {
        printf("%d- %d %s\n",card,CardEight);
        card += 1;
    }

    if(CardNine.Flag == true)
    {
        printf("%d- %d %s\n",card,CardNine);
        card += 1;
    }

    /*  *   *   *   *   Control by Second *   *   *   *   */

    if(strstr(Second, "CardOne") != '\0')
        CardOne.Flag = true;

    else
        CardOne.Flag = false;


    if(strstr(Second, "CardTwo") != '\0')
        CardTwo.Flag = true;

    else
        CardTwo.Flag = false;


    if(strstr(Second, "CardThree") != '\0')
        CardThree.Flag = true;

    else
        CardThree.Flag = false;


    if(strstr(Second, "CardFour") != '\0')
        CardFour.Flag = true;

    else
        CardFour.Flag = false;


    if(strstr(Second, "CardFive") != '\0')
        CardFive.Flag = true;

    else
        CardFive.Flag = false;


    if(strstr(Second, "CardSix") != '\0')
        CardSix.Flag = true;

    else
        CardSix.Flag = false;


    if(strstr(Second, "CardSeven") != '\0')
        CardSeven.Flag = true;

    else
        CardSeven.Flag = false;


    if(strstr(Second, "CardEight") != '\0')
        CardEight.Flag = true;

    else
        CardEight.Flag = false;


    if(strstr(Second, "CardNine") != '\0')
        CardNine.Flag = true;

    else
        CardNine.Flag = false;

    /*  *   *   *   *   Write by Second   *   *   *   *   */

    if(CardOne.Flag == true)
    {
        printf("%d- %d %s\n",card,CardOne);
        card += 1;
    }

    if(CardTwo.Flag == true)
    {
        printf("%d- %d %s\n",card,CardTwo);
        card += 1;
    }

    if(CardThree.Flag == true)
    {
        printf("%d- %d %s\n",card,CardThree);
        card += 1;
    }

    if(CardFour.Flag == true)
    {
        printf("%d- %d %s\n",card,CardFour);
        card += 1;
    }

    if(CardFive.Flag == true)
    {
        printf("%d- %d %s\n",card,CardFive);
        card += 1;
    }

    if(CardSix.Flag == true)
    {
        printf("%d- %d %s\n",card,CardSix);
        card += 1;
    }

    if(CardSeven.Flag == true)
    {
        printf("%d- %d %s\n",card,CardSeven);
        card += 1;
    }

    if(CardEight.Flag == true)
    {
        printf("%d- %d %s\n",card,CardEight);
        card += 1;
    }

    if(CardNine.Flag == true)
    {
        printf("%d- %d %s\n",card,CardNine);
        card += 1;
    }

    /*  *   *   *   *   Control by Third *   *   *   *   */

    if(strstr(Third, "CardOne") != '\0')
        CardOne.Flag = true;

    else
        CardOne.Flag = false;


    if(strstr(Third, "CardTwo") != '\0')
        CardTwo.Flag = true;

    else
        CardTwo.Flag = false;


    if(strstr(Third, "CardThree") != '\0')
        CardThree.Flag = true;

    else
        CardThree.Flag = false;


    if(strstr(Third, "CardFour") != '\0')
        CardFour.Flag = true;

    else
        CardFour.Flag = false;


    if(strstr(Third, "CardFive") != '\0')
        CardFive.Flag = true;

    else
        CardFive.Flag = false;


    if(strstr(Third, "CardSix") != '\0')
        CardSix.Flag = true;

    else
        CardSix.Flag = false;


    if(strstr(Third, "CardSeven") != '\0')
        CardSeven.Flag = true;

    else
        CardSeven.Flag = false;


    if(strstr(Third, "CardEight") != '\0')
        CardEight.Flag = true;

    else
        CardEight.Flag = false;


    if(strstr(Third, "CardNine") != '\0')
        CardNine.Flag = true;

    else
        CardNine.Flag = false;

    /*  *   *   *   *   Write by Third   *   *   *   *   */

    if(CardOne.Flag == true)
    {
        printf("%d- %d %s\n",card,CardOne);
        card += 1;
    }

    if(CardTwo.Flag == true)
    {
        printf("%d- %d %s\n",card,CardTwo);
        card += 1;
    }

    if(CardThree.Flag == true)
    {
        printf("%d- %d %s\n",card,CardThree);
        card += 1;
    }

    if(CardFour.Flag == true)
    {
        printf("%d- %d %s\n",card,CardFour);
        card += 1;
    }

    if(CardFive.Flag == true)
    {
        printf("%d- %d %s\n",card,CardFive);
        card += 1;
    }

    if(CardSix.Flag == true)
    {
        printf("%d- %d %s\n",card,CardSix);
        card += 1;
    }

    if(CardSeven.Flag == true)
    {
        printf("%d- %d %s\n",card,CardSeven);
        card += 1;
    }

    if(CardEight.Flag == true)
    {
        printf("%d- %d %s\n",card,CardEight);
        card += 1;
    }

    if(CardNine.Flag == true)
    {
        printf("%d- %d %s\n",card,CardNine);
        card += 1;
    }

    /*  *   *   *   *   Control by Fourth *   *   *   *   */

    if(strstr(Fourth, "CardOne") != '\0')
        CardOne.Flag = true;

    else
        CardOne.Flag = false;


    if(strstr(Fourth, "CardTwo") != '\0')
        CardTwo.Flag = true;

    else
        CardTwo.Flag = false;


    if(strstr(Fourth, "CardThree") != '\0')
        CardThree.Flag = true;

    else
        CardThree.Flag = false;


    if(strstr(Fourth, "CardFour") != '\0')
        CardFour.Flag = true;

    else
        CardFour.Flag = false;


    if(strstr(Fourth, "CardFive") != '\0')
        CardFive.Flag = true;

    else
        CardFive.Flag = false;


    if(strstr(Fourth, "CardSix") != '\0')
        CardSix.Flag = true;

    else
        CardSix.Flag = false;


    if(strstr(Fourth, "CardSeven") != '\0')
        CardSeven.Flag = true;

    else
        CardSeven.Flag = false;


    if(strstr(Fourth, "CardEight") != '\0')
        CardEight.Flag = true;

    else
        CardEight.Flag = false;


    if(strstr(Fourth, "CardNine") != '\0')
        CardNine.Flag = true;

    else
        CardNine.Flag = false;

    /*  *   *   *   *   Write by Fourth   *   *   *   *   */

    if(CardOne.Flag == true)
    {
        printf("%d- %d %s\n",card,CardOne);
        card += 1;
    }

    if(CardTwo.Flag == true)
    {
        printf("%d- %d %s\n",card,CardTwo);
        card += 1;
    }

    if(CardThree.Flag == true)
    {
        printf("%d- %d %s\n",card,CardThree);
        card += 1;
    }

    if(CardFour.Flag == true)
    {
        printf("%d- %d %s\n",card,CardFour);
        card += 1;
    }

    if(CardFive.Flag == true)
    {
        printf("%d- %d %s\n",card,CardFive);
        card += 1;
    }

    if(CardSix.Flag == true)
    {
        printf("%d- %d %s\n",card,CardSix);
        card += 1;
    }

    if(CardSeven.Flag == true)
    {
        printf("%d- %d %s\n",card,CardSeven);
        card += 1;
    }

    if(CardEight.Flag == true)
    {
        printf("%d- %d %s\n",card,CardEight);
        card += 1;
    }

    if(CardNine.Flag == true)
    {
        printf("%d- %d %s\n",card,CardNine);
        card += 1;
    }

    printf("\nPress any key to exit!\n\n");
    getch();
}

int main()
{
    int i = 0;
    int chooseMenu;

    Menu:
    system("CLS");
    printf(message,"\n");
    printf("\n1 - Create Card \n");
    printf("2 - Show All Cards \n");
    printf("3 - Short by Cards \n");
    printf("0 - Exit \n \n");

    scanf("%d", &chooseMenu);

    switch(chooseMenu)
    {
        case 1: CreateCrad();goto Menu;
        case 2: ShowAllCards();goto Menu;
        case 3: BuildCards();goto Menu;
        case 0: break;
        default: goto Menu;
    }
}
