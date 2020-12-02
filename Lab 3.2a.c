#include <stdio.h>
#include <string.h>
#include <locale.h>

int main()
{
    int m = 0;
    {
      printf("Программа яка показує знак задіака згідно з числом місяця.");
        printf("\nВвести число місяця (Н-д: 5).\n");
        scanf("%d",&m);
        switch(m)
        {
            case 1:
            printf("Водолій - 21 січня - 19 лютого\n");
            break;
            case 2:
            printf("Риби - 20 лютого - 20 березня\n");
            break;
            case 3:
            printf("Овен - 21 березня - 20 квітня\n");
            break;
            case 4:
            printf("Телець - 21 квітня - 21 травня\n");
            break;
            case 5:
            printf("Близнюки - 22 травня - 21 червня\n");
            break;
            case 6:
            printf("рак - 22 червня - 22 липня\n");
            break;
            case 7:
            printf("Лев - 23 липня - 23 серпня\n");
            break;
            case 8:
            printf("Діва - 24 серпня - 22 вересня\n");
            break;
            case 9:
            printf("ваги - 23 вересня - 22 жовтня\n");
            break;
            case 10:
            printf("Скорпіон - 23 жовтня - 22 листопада\n");
            break;
            case 11:
            printf("Стрілець - 22 листопада - 21 грудня\n");
            break;
            case 12:
            printf("Козеріг - 22 грудня - 20 січня\n");
            break;
            default:
            printf("Під таким числом місяця не існує\n");
            return 0;
            
        }
    }
}