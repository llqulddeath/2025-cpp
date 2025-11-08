#include <cstdio>

int main(int argc, char** argv)
{
    // Объявление и инициализация переменных
    int n = 0;
    
    // Ввод количества элементов
    scanf("%d", &n);
    
    // Проверка корректности размера
    if (n <= 0 || n > 100)
    {
        printf("Invalid array size\n");
        return 1;
    }
    
    // Создание динамического массива
    int* array = new int[n];
    
    // Ввод элементов массива
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    
    // Флаг для отслеживания первого четного элемента
    int firstEvenFound = 0;
    
    // Поиск и вывод четных элементов
    for (int i = 0; i < n; i++)
    {
        // Проверка на четность (остаток от деления на 2 равен 0)
        if (array[i] % 2 == 0)
        {
            // Если это не первый четный элемент, выводим пробел
            if (firstEvenFound == 1)
            {
                printf(" ");
            }
            
            printf("%d", array[i]);
            firstEvenFound = 1;
        }
    }
    printf("\n");
    
    // Освобождение памяти
    delete[] array;
    
    return 0;
}