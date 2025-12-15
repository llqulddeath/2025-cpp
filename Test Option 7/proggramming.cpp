#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <windows.h>

// Структура для хранения данных студента
typedef struct {
    char name[50];
    char recordBook[20];  // номер зачетки
} StudentInfo;

// Структура для хранения динамического массива студентов
typedef struct {
    StudentInfo* students;   // динамический массив студентов
    int count;               // количество студентов
    int capacity;            // вместимость массива
} StudentList;

// Структура для курса
typedef struct {
    char name[50];
    char teacher[50];
    StudentList studentList;  // вложенная структура со списком студентов
} Course;

// Функции для работы со StudentList
void init_student_list(StudentList* sl) {
    sl->count = 0;
    sl->capacity = 5;
    sl->students = (StudentInfo*)malloc(sl->capacity * sizeof(StudentInfo));
}

void add_student(StudentList* sl, const char* name, const char* recordBook) {
    // Если массив заполнен, увеличиваем его размер
    if (sl->count >= sl->capacity) {
        sl->capacity *= 2;
        sl->students = (StudentInfo*)realloc(sl->students, sl->capacity * sizeof(StudentInfo));
    }
    
    // Копируем данные студента
    strcpy(sl->students[sl->count].name, name);
    strcpy(sl->students[sl->count].recordBook, recordBook);
    sl->count++;
}

void free_student_list(StudentList* sl) {
    free(sl->students);
    sl->students = NULL;
    sl->count = 0;
    sl->capacity = 0;
}

// Функции для работы с курсами
Course* create_courses(int n) {
    Course* courses = (Course*)malloc(n * sizeof(Course));
    for (int i = 0; i < n; i++) {
        init_student_list(&courses[i].studentList);
    }
    return courses;
}

Course* find_course_with_most_students(Course* courses, int n) {
    if (n <= 0) return NULL;

    Course* most_popular = &courses[0];
    int max_count = courses[0].studentList.count;

    for (int i = 1; i < n; i++) {
        int current_count = courses[i].studentList.count;
        if (current_count > max_count) {
            most_popular = &courses[i];
            max_count = current_count;
        }
    }
    return most_popular;
}

void print_course(const Course* course) {
    printf("Курс: %s\n", course->name);
    printf("Преподаватель: %s\n", course->teacher);
    printf("Количество студентов: %d\n", course->studentList.count);
    
    if (course->studentList.count > 0) {
        printf("Студенты:\n");
        for (int i = 0; i < course->studentList.count; i++) {
            printf("  %d. %s (зачетка: %s)\n", 
                   i + 1,
                   course->studentList.students[i].name,
                   course->studentList.students[i].recordBook);
        }
    }
    printf("\n");
}

void free_courses(Course* courses, int n) {
    for (int i = 0; i < n; i++) {
        free_student_list(&courses[i].studentList);
    }
    free(courses);
}

// Вспомогательные функции
void clear_input_buffer() {
    int c = 0;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

void clear_last_linebreak(char* str) {
    if (str != NULL) {
        str[strcspn(str, "\n")] = '\0';
    }
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
    int n = 0;
    printf("Введите количество курсов: ");
    scanf("%d", &n);
    clear_input_buffer();

    Course* courses = create_courses(n);

    // Ввод данных о курсах
    for (int i = 0; i < n; i++) {
        printf("\nКурс %d:\n", i + 1);
        printf("Название курса: ");
        fgets(courses[i].name, sizeof(courses[i].name), stdin);
        clear_last_linebreak(courses[i].name);
        
        printf("ФИО преподавателя: ");
        fgets(courses[i].teacher, sizeof(courses[i].teacher), stdin);
        clear_last_linebreak(courses[i].teacher);

        int student_count = 0;
        printf("Количество студентов на курсе: ");
        scanf("%d", &student_count);
        clear_input_buffer();

        printf("Введите данные %d студентов:\n", student_count);
        for (int j = 0; j < student_count; j++) {
            char name[50];
            char recordBook[20];
            
            printf("  Студент %d:\n", j + 1);
            printf("    Имя: ");
            fgets(name, sizeof(name), stdin);
            clear_last_linebreak(name);
            
            printf("    Номер зачетки: ");
            fgets(recordBook, sizeof(recordBook), stdin);
            clear_last_linebreak(recordBook);
            
            add_student(&courses[i].studentList, name, recordBook);
        }
    }

    // Вывод всех курсов
    printf("\nВсе курсы:\n");
    for (int i = 0; i < n; i++) {
        printf("\n%d. ", i + 1);
        print_course(&courses[i]);
    }

    // Поиск курса с наибольшим количеством студентов
    Course* most_popular = find_course_with_most_students(courses, n);
    if (most_popular) {
        printf("\nКурс с наибольшим количеством студентов:\n");
        print_course(most_popular);
    }

    free_courses(courses, n);
    return 0;
}