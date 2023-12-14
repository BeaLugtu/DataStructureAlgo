#include <stdio.h>
#include <windows.h>
#define MAX_SIZE 100

#define pf printf
#define sf scanf

// Function prototypes
void displayMainMenu();
int handle1DArrayChoice(int choice);

void handle1DArrayChoiceNoArgument();

int handle2DArrayChoice(int choice);
void handle2DArrayChoiceNoArgument();

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

void traverse();
void transpose();

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
            handle1DArrayChoiceNoArgument();
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
    printf("2. Transpose\n");
    printf("3. Implement Stack\n");
    printf("4. Back to Main Menu\n");
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
        traverse();
        break;
    case 2:
        transpose();
        break;
    case 3:
        implementStack();
        break;
    default:
        printf("Invalid choice for 2D Array Operations\n");
        break;
    }

    return 1; // Continue the program
}

void handle2DArrayChoiceNoArgument()
{
    system("cls");

    int choice;

    printf("\n 2D Array Operations:\n");
    printf("1. Traverse\n");
    printf("2. Transpose\n");
    printf("3. Implement Stack\n");
    printf("4. Back to Main Menu\n");
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
        traverse();
        handle2DArrayChoiceNoArgument();
        break;
    case 2:
        transpose();
        handle2DArrayChoiceNoArgument();
        break;
    case 3:
        implementStack();
        break;
    default:
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

void mergeSortedArrays()
{
    int size1, size2;

    // Ask for the length of the first array
    printf("Enter the length of the first array: ");
    scanf("%d", &size1);

    int arr1[MAX_SIZE];
    // Ask for elements of the first array
    printf("Enter elements for the first array:\n");
    for (int i = 0; i < size1; ++i)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr1[i]);
    }

    // Ask for the length of the second array
    printf("Enter the length of the second array: ");
    scanf("%d", &size2);

    int arr2[MAX_SIZE];
    // Ask for elements of the second array
    printf("Enter elements for the second array:\n");
    for (int i = 0; i < size2; ++i)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr2[i]);
    }

    // Display the first array
    printf("First Array: ");
    for (int i = 0; i < size1; ++i)
    {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    // Display the second array
    printf("Second Array: ");
    for (int i = 0; i < size2; ++i)
    {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    // Ask the user if they want to merge the arrays
    char mergeConfirmation;
    printf("Do you want to merge these arrays? (y/n): ");
    scanf(" %c", &mergeConfirmation);

    if (mergeConfirmation == 'y' || mergeConfirmation == 'Y')
    {
        // Merge the arrays in sorted order
        int mergedArray[MAX_SIZE * 2];
        int mergedSize = 0;
        int i = 0, j = 0, k = 0;

        while (i < size1 && j < size2)
        {
            if (arr1[i] < arr2[j])
            {
                mergedArray[k++] = arr1[i++];
            }
            else
            {
                mergedArray[k++] = arr2[j++];
            }
        }

        // Copy the remaining elements from the first array, if any
        while (i < size1)
        {
            mergedArray[k++] = arr1[i++];
        }

        // Copy the remaining elements from the second array, if any
        while (j < size2)
        {
            mergedArray[k++] = arr2[j++];
        }

        // Display the merged array
        printf("Merged and Sorted Array: ");
        for (int i = 0; i < k; ++i)
        {
            printf("%d ", mergedArray[i]);
        }
        printf("\n");

        // Ask the user if they want to try again or exit
        char tryAgain;
        printf("Do you want to try again? (y/n): ");
        scanf(" %c", &tryAgain);

        if (tryAgain != 'y' && tryAgain != 'Y')
        {
            printf("Exiting function.\n");
            return;
        }
    }
    else
    {
        printf("Exiting program.\n");
    }
};

void mergeUnsortedArrays()
{
    int size1, size2;

    // Ask for the length of the first array
    printf("Enter the length of the first array: ");
    scanf("%d", &size1);

    int arr1[MAX_SIZE];
    // Ask for elements of the first array
    printf("Enter elements for the first array:\n");
    for (int i = 0; i < size1; ++i)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr1[i]);
    }

    // Ask for the length of the second array
    printf("Enter the length of the second array: ");
    scanf("%d", &size2);

    int arr2[MAX_SIZE];
    // Ask for elements of the second array
    printf("Enter elements for the second array:\n");
    for (int i = 0; i < size2; ++i)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr2[i]);
    }

    // Display the first array
    printf("First Array: ");
    for (int i = 0; i < size1; ++i)
    {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    // Display the second array
    printf("Second Array: ");
    for (int i = 0; i < size2; ++i)
    {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    // Ask the user if they want to merge the arrays
    char mergeConfirmation;
    printf("Do you want to merge these arrays? (y/n): ");
    scanf(" %c", &mergeConfirmation);

    if (mergeConfirmation == 'y' || mergeConfirmation == 'Y')
    {
        // Merge the arrays without sorting
        int mergedArray[MAX_SIZE * 2];
        int mergedSize = 0;

        // Copy elements from the first array
        for (int i = 0; i < size1; ++i)
        {
            mergedArray[mergedSize++] = arr1[i];
        }

        // Copy elements from the second array
        for (int i = 0; i < size2; ++i)
        {
            mergedArray[mergedSize++] = arr2[i];
        }

        // Display the merged array
        printf("Merged Array: ");
        for (int i = 0; i < mergedSize; ++i)
        {
            printf("%d ", mergedArray[i]);
        }
        printf("\n");

        // Ask the user if they want to try again or exit
        char tryAgain;
        printf("Do you want to try again? (y/n): ");
        scanf(" %c", &tryAgain);

        if (tryAgain != 'y' && tryAgain != 'Y')
        {
            printf("Exiting function.\n");
            return;
        }
    }
    else
    {
        printf("Exiting program.\n");
    }
};

// Function prototypes for 2D array operations
void traverse()
{
    system("cls");

    int m, n;
    pf("\nEnter number of rows: ");
    sf("%d", &m);

    pf("\nEnter number of columns: ");
    sf("%d", &n);

    int a[50][50];
    pf("\nEnter elements of %d x %d array:\n", m, n);

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            sf("%d", &a[i][j]);
    int i, j;

    char choice, operation;

    getchar();
    system("cls");

    pf("\nDo you want to perform an operation on stored elements? (y/n): ");
    sf(" %c", &choice);

    if (choice == 'y' || choice == 'Y')
    {

        pf("\nChoose an operation to perform on the stored array elements: \n");
        pf("a. Addition\n");
        pf("b. Subtraction\n");
        pf("c. Multiplication\n");
        pf("d. Division\n");

        sf(" %c", &operation);

        switch (operation)
        {
        case 'a':
            for (i = 0; i < m; i++)
                for (j = 0; j < n; j++)
                    a[i][j] = a[i][j] + a[i][j];
            break;
        case 'b':
            for (i = 0; i < m; i++)
                for (j = 0; j < n; j++)
                    a[i][j] = a[i][j] - a[i][j];
            break;
        case 'c':
            for (i = 0; i < m; i++)
                for (j = 0; j < n; j++)
                    a[i][j] = a[i][j] * a[i][j];
            break;
        case 'd':
            for (i = 0; i < m; i++)
                for (j = 0; j < n; j++)
                    a[i][j] = a[i][j] / a[i][j];
            break;
        default:
            pf("Invalid operation choice\n");
            return; // Return from the function if the operation is invalid
        }

        pf("\n\n %d x %d Array after Traversing:\n\n", m, n);
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
                pf("\t%d", a[i][j]);
            pf("\n\n");

            printf("Press Any Key to Continue...");
            getch();
            handle2DArrayChoiceNoArgument();
            system("cls");
        }
    }
    else
    {
        handle2DArrayChoiceNoArgument();
        system("cls");
    }
}

void transpose()
{
    system("cls");
    int m, n;
    pf("\nEnter number of rows: ");
    sf("%d", &m);

    pf("\nEnter number of columns: ");
    sf("%d", &n);

    int a[10][10], b[10][10];
    pf("\nEnter elements to be transposed:\n");

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            sf("%d", &a[i][j]);
    int i, j;

    system("cls");

    pf("\nYour Array Elements before Transposing:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            pf("\t%d", a[i][j]);
        }
        pf("\n\n");
    }

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            b[j][i] = a[i][j];
        }
    }

    pf("\nYour Array Elements after Transposing:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            pf("\t%d", b[i][j]);
        }
        pf("\n\n");
        printf("Press Any Key to Continue...");
        getch();
        handle2DArrayChoiceNoArgument();
    }
    system("cls");
}

typedef struct
{
    int items[MAX_SIZE];
    int top;
} Stack;

void initializeStack(Stack *stack)
{
    stack->top = -1;
}

int isEmpty(Stack *stack)
{
    return stack->top == -1;
}

int isFull(Stack *stack)
{
    return stack->top == MAX_SIZE - 1;
}

void push(Stack *stack, int value)
{

    if (isFull(stack))
    {
        printf("Stack overflow: Cannot push element onto a full stack.\n");
        return;
    }
    stack->items[++stack->top] = value;
    system("cls");

    printf("Element %d inserted.\n", value);
}

int pop(Stack *stack)
{

    if (isEmpty(stack))
    {
        printf("Stack underflow: Cannot pop element from an empty stack.\n");
        exit(EXIT_FAILURE);
    }
    int poppedValue = stack->items[stack->top--];
    system("cls");

    printf("Element %d deleted.\n", poppedValue);

    return poppedValue;
}

void displayStack(Stack *stack)
{

    if (isEmpty(stack))
    {
        printf("Stack is empty.\n");
        return;
    }

    printf("Stack: ");
    for (int i = 0; i <= stack->top; ++i)
    {
        printf("%d ", stack->items[i]);
    }
    printf("\n");
}

void implementStack()
{

    Stack stack;
    initializeStack(&stack);

    int choice;

    do
    {
        printf("\nMenu:\n");
        printf("1. Insert (Push)\n");
        printf("2. Delete (Pop)\n");
        printf("3. Display\n");
        printf("4. Exit Program\n");

        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
        {
            int value;
            printf("Enter the value to insert: ");
            scanf("%d", &value);
            push(&stack, value);
            break;
        }

        case 2:
        {
            pop(&stack);
            break;
        }

        case 3:
        {
            displayStack(&stack);
            break;
        }

        case 4:
        {
            handle2DArrayChoiceNoArgument();
            break;
        }

        default:
        {
            printf("Invalid choice. Please enter a number between 1 and 4.\n");
        }
        }

    } while (choice != 4);
    system("cls");
}
