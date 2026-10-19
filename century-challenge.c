#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define red "\033[31m"
#define blue "\033[34m"
#define green "\033[32m"
#define reset "\033[0m"

void ui();
void ui2();
void ui3();
void ui4();
void ui5();

int player_1, player_2, cpu, cas3, i;
int sum = 0, count = 0, n = 0;

int main()
{
    system("clear");
    ui3();
    printf(green "\t   (1) Player VS Player\n");
    printf("\t   (2) Player VS CPU\n\n");
    printf("\t   Mode : " reset);
    scanf("%d", &cas3);

    switch (cas3)
    {
    case 1:
    {
        system("clear");
        ui3();
        ui4();

        while (1)
        {
            printf(red "Player 1: " reset);
            scanf("%d", &player_1);

            if (player_1 > 10 || player_1 < 1)
            {
                printf("ERROR\n");
            }

            else
            {

                sum += player_1;
                while (sum > 100)
                {

                    printf("ERROR\n");
                    sum -= player_1;

                    while (1)
                    {

                        printf(red "Player 1: " reset);
                        scanf("%d", &player_1);

                        if (player_1 > 10 || player_1 < 1)
                        {
                            printf("ERROR\n");
                        }

                        else
                        {
                            sum += player_1;
                            break;
                        }
                    }
                }

                ui();

                if (sum == 100)
                {
                    printf(red "\n\t\t   Player 1 Win!!!\n\n" reset);
                    return 0;
                }

                printf(blue "\t\t\t\t\t  Player 2: " reset);
                scanf("%d", &player_2);

                if (player_2 > 10 || player_2 < 1)
                {

                    printf("\t\t\t\t\t  ERROR\n");
                    while (1)

                    {

                        printf(blue "\t\t\t\t\t  Player 2: " reset);
                        scanf("%d", &player_2);

                        if (player_2 <= 10 && player_2 >= 1)
                        {
                            break;
                        }

                        else
                        {
                            printf("\t\t\t\t\t  ERROR\n");
                        }
                    }
                }

                sum += player_2;

                while (sum > 100)
                {

                    printf("\t\t\t\t\t  ERROR\n");
                    sum -= player_2;

                    while (1)
                    {

                        printf(blue "\t\t\t\t\t  Player 2: " reset);
                        scanf("%d", &player_2);

                        if (player_2 > 10 || player_2 < 1)
                        {
                            printf("\t\t\t\t\t  ERROR\n");
                        }

                        else
                        {
                            sum += player_2;
                            break;
                        }
                    }
                }

                ui2();

                if (sum == 100)
                {
                    printf(blue "\n\t\t   Player 2 Win!!!\n\n" reset);
                    return 0;
                }
            }
        }
    }

    case 2:
    {
        system("clear");
        ui3();
        ui4();

        while (1)
        {
            printf(red "Player 1: " reset);
            scanf("%d", &player_1);

            if (player_1 > 10 || player_1 < 1)
            {
                printf("ERROR\n");
            }

            else
            {

                sum += player_1;
                while (sum > 100)
                {

                    printf("ERROR\n");
                    sum -= player_1;

                    while (1)
                    {

                        printf(red "Player 1: " reset);
                        scanf("%d", &player_1);

                        if (player_1 > 10 || player_1 < 1)
                        {
                            printf("ERROR\n");
                        }

                        else
                        {
                            sum += player_1;
                            break;
                        }
                    }
                }

                ui();

                if (sum == 100)
                {
                    printf(red "\n\t\t   Player 1 Win!!!\n\n" reset);
                    return 0;
                }

                while (n == 0)
                {
                    srand(time(NULL));
                    i = rand() % 6;
                    n++;
                }

                printf(blue "\t\t\t\t\t  CPU: " reset);

                if (count < i && i != 0)
                {
                    srand(time(NULL));
                    cpu = rand() % 10 + 1;
                    ui5();
                    sum += cpu;
                    count++;
                }

                else if (sum == 1 || sum == 12 || sum == 23 || sum == 34 || sum == 45 || sum == 56 || sum == 67 || sum == 78 || sum == 89)
                {
                    cpu = rand() % 10 + 1;
                    ui5();
                    sum += cpu;
                }

                else
                {
                    if (sum < 12)
                    {
                        cpu = 12 - sum;
                        ui5();
                        sum += cpu;
                    }
                    else if (sum < 23 && sum > 12)
                    {
                        cpu = 23 - sum;
                        ui5();
                        sum += cpu;
                    }
                    else if (sum < 34 && sum > 23)
                    {
                        cpu = 34 - sum;
                        ui5();
                        sum += cpu;
                    }
                    else if (sum < 45 && sum > 34)
                    {
                        cpu = 45 - sum;
                        ui5();
                        sum += cpu;
                    }
                    else if (sum < 56 && sum > 45)
                    {
                        cpu = 56 - sum;
                        ui5();
                        sum += cpu;
                    }
                    else if (sum < 67 && sum > 56)
                    {
                        cpu = 67 - sum;
                        ui5();
                        sum += cpu;
                    }
                    else if (sum < 78 && sum > 67)
                    {
                        cpu = 78 - sum;
                        ui5();
                        sum += cpu;
                    }
                    else if (sum < 89 && sum > 78)
                    {
                        cpu = 89 - sum;
                        ui5();
                        sum += cpu;
                    }
                    else
                    {
                        cpu = 100 - sum;
                        ui5();
                        sum += cpu;
                    }
                }

                ui2();

                if (sum == 100)
                {
                    printf(blue "\n\t\t      CPU Win!!!\n\n" reset);
                    return 0;
                }
            }
        }
    }
    }
    return 0;
}

void ui()
{
    printf(red "\t\t|         %d         |\n" reset, sum);
    printf("\t\t----------------------\n");
}

void ui2()
{
    printf(blue "\t\t|         %d         |\n" reset, sum);
    printf("\t\t----------------------\n");
}

void ui3()
{
    printf(green "\t   ===============================\n");
    printf("\t   ====== Century Challenge ======\n");
    printf("\t   ===============================\n\n" reset);
}

void ui4()
{
    printf(green "    Pick a number (1-10). First to reach 100 wins.\n\n" reset);
}

void ui5()
{
    printf("%d\n", cpu);
}