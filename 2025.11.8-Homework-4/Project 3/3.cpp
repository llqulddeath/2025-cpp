#include <cstdio>

int main(int argc, char** argv)
{
    // Объявление и инициализация переменных
    int n = 0;
    int count = 0;
    
    // Ввод количества элементов
    scanf("%d", &n);
    
    // Проверка корректности размера
    if (n <= 0 || n > 10000)
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
    
    // Подсчет положительных элементов
    for (int i = 0; i < n; i++)
    {
        // Проверка, является ли элемент положительным
        if (array[i] > 0)
        {
            count = count + 1;
        }
    }
    
    // Вывод результата
    printf("%d\n", count);
    
    // Освобождение памяти
    delete[] array;
    
    return 0;
}