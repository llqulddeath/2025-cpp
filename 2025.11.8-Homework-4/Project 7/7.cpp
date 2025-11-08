#include <cstdio>

int main(int argc, char** argv)
{
    // Объявление и инициализация переменных
    int n = 0;
    
    // Ввод количества элементов
    scanf("%d", &n);
    
    // Проверка корректности размера
    if (n <= 0 || n > 35)
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
    
    // Перестановка элементов в обратном порядке
    for (int i = 0; i < n / 2; i++)
    {
        // Обмен элементов симметричных относительно центра
        int temp = array[i];
        array[i] = array[n - 1 - i];
        array[n - 1 - i] = temp;
    }
    
    // Вывод результата
    for (int i = 0; i < n; i++)
    {
        printf("%d", array[i]);
        if (i < n - 1)
        {
            printf(" ");
        }
    }
    printf("\n");
    
    // Освобождение памяти
    delete[] array;
    
    return 0;
}