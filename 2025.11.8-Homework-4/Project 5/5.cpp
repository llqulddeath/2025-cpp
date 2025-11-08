#include <cstdio>

int main(int argc, char** argv)
{
    // Объявление и инициализация переменных
    int n = 0;
    int found = 0;
    
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
    
    // Проверка пар соседних элементов на одинаковые знаки
    for (int i = 1; i < n; i++)
    {
        // Проверяем, имеют ли текущий и предыдущий элементы одинаковые знаки
        // Оба положительные ИЛИ оба отрицательные
        if ((array[i] > 0 && array[i - 1] > 0) || (array[i] < 0 && array[i - 1] < 0))
        {
            found = 1;
            break; // Нашли пару, можно выходить из цикла
        }
    }
    
    // Вывод результата
    if (found == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    
    // Освобождение памяти
    delete[] array;
    
    return 0;
}