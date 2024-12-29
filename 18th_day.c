#include <stdio.h>

int main()
{
    char input;
    float kmsToMiles = 0.621371;
    float inchesToFoot = 0.0833333;
    float cmsToInches = 0.393701;
    float poundToKgs = 0.453592;
    float inchesToMeters = 0.0254;
    float first, second;

    while (1)
    {
        printf("Enter the input character. 'q' to quit\n");
        printf("1. kms to miles\n");
        printf("2. inches to foot\n");
        printf("3. cms to inches\n");
        printf("4. pound to kgs\n");
        printf("5. inches to meters\n");

        scanf(" %c", &input);

        switch (input)
        {
        case 'q':
            printf("Quitting the program...\n");
            return 0;  // Exit the program

        case '1':
            printf("Enter kilometers: ");
            scanf("%f", &first);
            second = first * kmsToMiles;
            printf("%.2f kilometers is %.2f miles\n", first, second);
            break;

        case '2':
            printf("Enter inches: ");
            scanf("%f", &first);
            second = first * inchesToFoot;
            printf("%.2f inches is %.2f feet\n", first, second);
            break;

        case '3':
            printf("Enter centimeters: ");
            scanf("%f", &first);
            second = first * cmsToInches;
            printf("%.2f centimeters is %.2f inches\n", first, second);
            break;

        case '4':
            printf("Enter pounds: ");
            scanf("%f", &first);
            second = first * poundToKgs;
            printf("%.2f pounds is %.2f kilograms\n", first, second);
            break;

        case '5':
            printf("Enter inches: ");
            scanf("%f", &first);
            second = first * inchesToMeters;
            printf("%.2f inches is %.2f meters\n", first, second);
            break;

        default:
            printf("Invalid option. Please choose again.\n");
            break;
        }
    }

    return 0;
}
