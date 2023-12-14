#include <stdio.h>
#include <windows.h>
#define MAX_SIZE 100

// Function prototypes
void displayMainMenu();
int handle1DArrayChoice(int choice);

void handle1DArrayChoiceNoArgument();

int handle2DArrayChoice(int choice);
int handleExitChoice();

void mergeArray();

void mergeUnsortedArrays();
void mergeSortedArrays();

//  Function prototypes for 1D array operations
void traverse1D();
void insertSorted1D();
void insertUnsorted1D();
void removeElement1D();
void mergeArray();

void mergeUnsortedArrays();
void mergeSortedArrays();

// Function prototypes for 2D array operations
void traverse2D();
void implementStack();

int main()
{
    int choice;
    int continueProgram = 1; // Flag to control program flow

    while (continueProgram)
    {
        displayMainMenu();

        // Check if input is an integer
        if (scanf("%d", &choice) != 1)
        {
            printf("Invalid input. Please enter an integer.\n");
            // Clear the input buffer
            while (getchar() != '\n')
                ;
            continue;
        }

        // Handle the user's choice based on the group
        if (choice == 1)
        {
            system("cls");
            continueProgram = handle1DArrayChoice(choice);
        }
        else if (choice == 2)
        {
            system("cls");
            continueProgram = handle2DArrayChoice(choice);
        }
        else if (choice == 3)
        {
            continueProgram = handleExitChoice();
        }
        else
        {
            printf("Invalid choice! Press ENTER and try again. \n");
            getch();
            system("cls");
        }
    }

    return 0;
}

// Function to display the main menu
void displayMainMenu()
{
    printf("+------------------------+\n");
    printf("|   DATA STRUCTURES  &   |\n");
    printf("|   ALGORITHMS LESSONS   |\n");
    printf("+------------------------+\n");

    printf("\nMAIN MENU\n");
    printf("1. 1D Array Operations\n");
    printf("2. 2D Array Operations\n");
    printf("3. Exit\n");
    printf("\nEnter your choice: ");
}

// Function to display the main menu without getting arguments
void handle1DArrayChoiceNoArgument()
{
    int choice;

    do
    {
        printf("+------------------------+\n");
        printf("|       1D   ARRAY       |\n");
        printf("|       OPERATIONS       |\n");
        printf("+------------------------+\n");
        // Display the 1D array operations menu
        printf("\n 1D Array Operations:\n");
        printf("1. Traverse\n");
        printf("2. Insert Sorted\n");
        printf("3. Insert Unsorted\n");
        printf("4. Remove Element\n");
        printf("5. Merge Array\n");
        printf("6. Back to Main Menu\n");
        printf("Enter your choice: ");

        // Check if input is an integer
        if (scanf("%d", &choice) != 1)
        {
            printf("Invalid input. Please enter an integer.\n");
            // Clear the input buffer
            while (getchar() != '\n')
                ;
            return 1; // Continue the program
        }

        // Perform the corresponding operation for 1D array
        switch (choice)
        {
        case 1:
            traverse1D();
            break;
        case 2:
            insertSorted1D();
            break;
        case 3:
            insertUnsorted1D();
            break;
        case 4:
            removeElement1D();
            break;
        case 5:
            mergeArray();
            break;
        case 6:
            system("cls");
            break;
        default:
            printf("Invalid choice for 1D Array Operations\n");
            break;
        }
    } while (1);
    return 1;
}

// Function to handle the user's choice for 1D array operations
int handle1DArrayChoice(int choice)
{
    printf("+------------------------+\n");
    printf("|       1D   ARRAY       |\n");
    printf("|       OPERATIONS       |\n");
    printf("+------------------------+\n");

    printf("\n1. Traverse\n");
    printf("2. Insert Sorted\n");
    printf("3. Insert Unsorted\n");
    printf("4. Remove Element\n");
    printf("5. Merge Array\n");
    printf("6. Back to Main Menu\n");
    printf("Enter your choice: ");

    // Check if input is an integer
    if (scanf("%d", &choice) != 1)
    {
        printf("Invalid input. Please enter an integer.\n");
        // Clear the input buffer
        while (getchar() != '\n')
            ;
        return 1; // Continue the program;
    }

    // Perform the corresponding operation for 1D array
    switch (choice)
    {
    case 1:
        system("cls");
        traverse1D();
        break;
    case 2:
        system("cls");
        insertSorted1D();
        break;
    case 3:
        system("cls");
        insertUnsorted1D();
        break;
    case 4:
        system("cls");
        removeElement1D();
        break;
    case 5:
        system("cls");
        mergeArray();
        break;
    case 6:
        system("cls");
        system("cls");
        break;
    default:
        system("cls");
        printf("Invalid choice for 1D Array Operations! Press ENTER and try again.\n");
        getch();
        system("cls");
        handle1DArrayChoice(0);
        break;
    }

    return 1; // Continue the program
}

void mergeArray()
{
    int choice;

    while (1)
    {
        printf("Choose an option:\n");
        printf("1. Merge Sorted Arrays\n");
        printf("2. Merge UnSorted Arrays\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
        {
            // Merge unsorted arrays
            mergeSortedArrays();
            break;
        }

        case 2:
        {
            // Merge sorted arrays
            mergeUnsortedArrays();
            break;
        }

        case 3:
        {
            return;
        }

        default:
        {
            break;
        }
        }
    }
}

// Function to handle the user's choice for 2D array operations
int handle2DArrayChoice(int choice)
{
    printf("\n 2D Array Operations:\n");
    printf("1. Traverse\n");
    printf("2. Implement Stack\n");
    printf("3. Back to Main Menu\n");
    printf("Enter your choice: ");

    // Check if input is an integer
    if (scanf("%d", &choice) != 1)
    {
        printf("Invalid input. Please enter an integer.\n");
        // Clear the input buffer
        while (getchar() != '\n')
            ;
        return 1; // Continue the program
    }

    // Perform the corresponding operation for 2D array
    switch (choice)
    {
    case 1:
        traverse2D();
        break;
    case 2:
        implementStack();
        break;
    case 3:
        // Back to the main menu
        break;
    default:
        printf("Invalid choice for 2D Array Operations\n");
        break;
    }

    return 1; // Continue the program
}

// Function to handle the user's choice for exiting the program
int handleExitChoice()
{
    // Exit confirmation loop
    while (1)
    {
        printf("Are you sure you want to exit? (1 for Yes, 0 for No): ");
        int exitChoice;
        scanf("%d", &exitChoice);

        if (exitChoice == 1)
        {
            printf("Exiting program.\n");
            return 0; // Terminate the program
        }
        else if (exitChoice == 0)
        {
            // Continue with the loop to display the main menu again
            printf("Returning to the main menu.\n");
            return 1; // Continue the program
        }
        else
        {
            // Invalid choice for exit confirmation
            printf("Invalid choice for exit confirmation. Please enter 1 or 0.\n");
        }
    }
}

// pufbsdfjbjfsbjsfefs
// Function prototypes for 1D array operations
void traverse1D()
{
    system("cls");
    int numArrays = 0;
    CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &consoleInfo);
    WORD originalColor = consoleInfo.wAttributes;

    while (1)
    {
        int size;
        printf("+------------------------+\n");
        printf("|       1D TRAVERSE      |\n");
        printf("+------------------------+\n");
        printf("\nEnter the size of array: ", numArrays + 1);

        // Check if input is an integer
        while (scanf("%d", &size) != 1 || size <= 0)
        {
            printf("Invalid input. Please enter a positive integer for array size: ");

            // Clear the input buffer
            while (getchar() != '\n')
                ;
        }

        int array[size];

        // Ask for array elements
        printf("\nENTER ELEMENTS FOR ARRAY\n", size, numArrays + 1);
        for (int i = 0; i < size; ++i)
        {
            printf("Element %d: ", i + 1);

            // Check if input is an integer
            while (scanf("%d", &array[i]) != 1)
            {
                printf("Invalid input. Please enter an integer: ");

                // Clear the input buffer
                while (getchar() != '\n')
                    ;
            }
        }

        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_GREEN);
        // Print the array
        printf("Array elements: ", numArrays + 1);

        for (int i = 0; i < size; ++i)
        {
            printf("%d ", array[i]);
        }
        printf("\n");

        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), originalColor);

        // Option to create another array
        char createAnother;
        printf("\nDo you want to create another array? (Y/N): ");
        while (scanf(" %c", &createAnother) == 1 && (createAnother == 'y' || createAnother == 'Y'))
        {
            system("cls");
            numArrays++;
            break;
        }

        if (createAnother != 'y' && createAnother != 'Y')
        {
            // Go back to handle1DArrayChoice
            system("cls");
            handle1DArrayChoice(numArrays);
            break;
        }
    }
}

void insertSorted1D()
{
    system("cls");

    int size;
    CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &consoleInfo);
    WORD originalColor = consoleInfo.wAttributes;

    printf("+------------------------+\n");
    printf("|    1D INSERT SORTED    |\n");
    printf("+------------------------+\n");
    printf("\nEnter the size of the array: ");

    // Check if input is an integer
    while (scanf("%d", &size) != 1 || size <= 0 || size > MAX_SIZE)
    {
        printf("Invalid input. Please enter a positive integer less than or equal to %d for array size: ", MAX_SIZE);

        // Clear the input buffer
        while (getchar() != '\n')
            ;
    }

    int array[MAX_SIZE];

    // Ask for array elements
    printf("\nENTER ELEMENTS TO BE SORTED\n", size);
    for (int i = 0; i < size; ++i)
    {
        printf("Element %d: ", i + 1);

        // Check if input is an integer
        while (scanf("%d", &array[i]) != 1)
        {
            printf("Invalid input. Please enter an integer: ");

            // Clear the input buffer
            while (getchar() != '\n')
                ;
        }
    }

    // Print the original sorted array
    printf("\nOriginal Array: ");
    for (int i = 0; i < size; ++i)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Sort the array in ascending order
    for (int i = 0; i < size - 1; ++i)
    {
        for (int j = 0; j < size - i - 1; ++j)
        {
            if (array[j] > array[j + 1])
            {
                // Swap elements if they are in the wrong order
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    // Print the sorted array
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_GREEN);

    printf("Sorted Array: ");

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), originalColor);

    for (int i = 0; i < size; ++i)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Option to insert another element
    char insertAnother;
    do
    {
        int elementToInsert;

        printf("Do you want to insert another element? (y/n): ");
        while (scanf(" %c", &insertAnother) == 1 && (insertAnother == 'y' || insertAnother == 'Y'))
        {
            printf("Enter the element to insert: ");
            while (scanf("%d", &elementToInsert) != 1)
            {
                printf("Invalid input. Please enter an integer: ");
                while (getchar() != '\n')
                    ;
            }

            // Find the correct position to insert the new element
            int insertPosition = 0;
            while (insertPosition < size && elementToInsert > array[insertPosition])
            {
                insertPosition++;
            }

            // Shift elements to make space for the new element
            for (int i = size; i > insertPosition; --i)
            {
                array[i] = array[i - 1];
            }

            // Insert the new element at the specified position
            array[insertPosition] = elementToInsert;

            // Update the size of the array
            size++;

            // Print the updated sorted array
            printf("Updated Sorted Array: ");
            for (int i = 0; i < size; ++i)
            {
                printf("%d ", array[i]);
            }
            printf("\n");

            // Option to insert another element
            printf("Do you want to insert another element? (y/n): ");
        }
    } while (insertAnother != 'n' && insertAnother != 'N');
    handle1DArrayChoiceNoArgument();
    ;
}

// Function to insert an element into an unsorted 1D array
void insertUnsorted1D()
{
    int size;
    printf("Enter the size of the array: ");

    // Check if input is an integer
    while (scanf("%d", &size) != 1 || size <= 0 || size > MAX_SIZE)
    {
        printf("Invalid input. Please enter a positive integer less than or equal to %d for array size: ", MAX_SIZE);

        // Clear the input buffer
        while (getchar() != '\n')
            ;
    }

    int array[MAX_SIZE];

    // Ask for array elements
    printf("Enter elements for Unsorted array:\n", size);
    for (int i = 0; i < size; ++i)
    {
        printf("Element %d: ", i + 1);

        // Check if input is an integer
        while (scanf("%d", &array[i]) != 1)
        {
            printf("Invalid input. Please enter an integer: ");

            // Clear the input buffer
            while (getchar() != '\n')
                ;
        }
    }

    // Print the original unsorted array
    printf("Original Unsorted Array: ");
    for (int i = 0; i < size; ++i)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Option to insert another element
    char insertAnother;
    do
    {
        int elementToInsert, positionToInsert;

        printf("Do you want to insert another element? (y/n): ");
        while (scanf(" %c", &insertAnother) == 1 && (insertAnother == 'y' || insertAnother == 'Y'))
        {
            printf("Enter the element to insert: ");
            while (scanf("%d", &elementToInsert) != 1)
            {
                printf("Invalid input. Please enter an integer: ");
                while (getchar() != '\n')
                    ;
            }

            printf("Enter the position to insert (1 to %d): ", size + 1);
            while (scanf("%d", &positionToInsert) != 1 || positionToInsert < 1 || positionToInsert > size + 1)
            {
                printf("Invalid input. Please enter a valid position: ");

                // Clear the input buffer
                while (getchar() != '\n')
                    ;
            }

            // Shift elements to make space for the new element
            for (int i = size; i >= positionToInsert; --i)
            {
                array[i] = array[i - 1];
            }

            // Insert the new element at the specified position
            array[positionToInsert - 1] = elementToInsert;

            // Update the size of the array
            size++;

            // Print the updated unsorted array
            printf("Updated Unsorted Array: ");
            for (int i = 0; i < size; ++i)
            {
                printf("%d ", array[i]);
            }
            printf("\n");

            // Option to insert another element
            printf("Do you want to insert another element? (y/n): ");
        }
    } while (insertAnother != 'n' && insertAnother != 'N');

    handle1DArrayChoiceNoArgument();
}

void removeElement1D()
{
    int size;

    while (1)
    {
        // Ask the user for the array length or option to exit
        printf("Enter the size of the array (enter 0 to exit): ");
        scanf("%d", &size);

        if (size == 0)
        {
            printf("Exiting program.\n");
            handle1DArrayChoiceNoArgument();
        }

        // Check if the array size is within bounds
        if (size < 0 || size > MAX_SIZE)
        {
            printf("Invalid array size. Please enter a positive integer less than or equal to %d.\n", MAX_SIZE);
            continue;
        }

        int array[MAX_SIZE];

        // Ask for array elements
        printf("Enter elements for the array:\n");
        for (int i = 0; i < size; ++i)
        {
            printf("Element %d: ", i + 1);
            scanf("%d", &array[i]);
        }

        // Display the original array
        printf("Original Array: ");
        for (int i = 0; i < size; ++i)
        {
            printf(" %d", array[i]);
        }
        printf("\n");

        // Ask the user for the index to delete
        int indexToDelete;
        printf("Enter the index to delete (0 to exit): ");
        scanf("%d", &indexToDelete);

        if (indexToDelete < 0 || indexToDelete >= size)
        {
            printf("Invalid index. Please enter a valid index.\n");
            continue;
        }

        // Display the element at the chosen index
        printf("Element at index %d: %d\n", indexToDelete, array[indexToDelete]);

        // Ask for confirmation to delete
        char deleteConfirmation;
        printf("Do you want to delete this element? (y/n): ");
        scanf(" %c", &deleteConfirmation);

        if (deleteConfirmation == 'y' || deleteConfirmation == 'Y')
        {
            // Shift elements to overwrite the deleted element
            for (int i = indexToDelete; i < size - 1; ++i)
            {
                array[i] = array[i + 1];
            }

            // Update the size of the array
            size--;

            // Display the updated array
            printf("Updated Array: ");
            for (int i = 0; i < size; ++i)
            {
                printf(" %d", array[i]);
            }
            printf("\n");

            // Ask the user if they want to try again or exit
            char tryAgain;
            printf("Do you want to try again? (y/n): ");
            scanf(" %c", &tryAgain);

            if (tryAgain != 'y' && tryAgain != 'Y')
            {
                printf("Exiting function.\n");
                handle1DArrayChoiceNoArgument();
            }
        }
    }
}

void mergeUnsortedArrays(){

};
void mergeSortedArrays(){

};

// Function prototypes for 2D array operations
void traverse2D(){
    // Implement the function
};

void implementStack(){
    // Implement the function
};
