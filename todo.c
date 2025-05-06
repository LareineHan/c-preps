#include <stdio.h>
#include <string.h>
#define MAX_TASKS 10
#define MAX_LENGTH 50


int main() {
    char task[MAX_TASKS][MAX_LENGTH];
    int done[MAX_TASKS] = {0};
    int task_count = 0;
    int choice; 

    while (1) {
        printf("\n--- TO-DO LIST MENU ---\n");
        printf("1. Add task\n");
        printf("2. View task\n");
        printf("3. Mark task as done\n");
        printf("4. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &choice);
        getchar();
        // to consume the leftover newline

        if (choice ==1 ) {
            if (task_count >= MAX_TASKS){
                printf("Task list is full!\n");
                continue;
            }
            printf("Enter your task: ");
            fgets(task[task_count], MAX_LENGTH, stdin);
            task[task_count][strcspn(task[task_count], "\n")] = '\0'; // remove new line
            done[task_count] = 0; 
            task_count ++;
            printf("Task added!\n");
            
        } else if (choice ==2) {
            printf("\n--- Your Tasks ---\n");
            for (int i = 0; i < task_count; i++) {
                printf("%d. %s [%s]\n", i + 1, task[i], done[i] ? "Done" : "Not done");
            }
        } else if (choice ==3) {
            int num; 
            printf("Enter task number to mark as done: ");
            scanf("%d", &num);
            getchar(); // consume new line
            if (num >=1 && num <= task_count) {
                done[num-1] = 1;
                printf("Task %d marked as done!\n",num);
            } else {
                printf("Invalid task number.\n");
            }
        } else if (choice == 4) {
            printf("Goodbye@ \n");
            break;
        } else {
            printf("Invalid choice. Try again. \n");
        }
    }

    return 0;
}