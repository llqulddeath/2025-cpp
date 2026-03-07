#include <iostream>
#include <fstream>

class ArrayList {
private:
    int* data;
    int capacity;
    int size;
    
    void resize() {
        int newCapacity = capacity * 2;
        int* newData = new int[newCapacity];
        
        for (int i = 0; i < size; i++) {
            newData[i] = data[i];
        }
        
        delete[] data;
        data = newData;
        capacity = newCapacity;
    }
    
public:
    ArrayList() {
        capacity = 10;
        size = 0;
        data = new int[capacity];
    }
    
    ~ArrayList() {
        delete[] data;
    }
    
    void add(int value) {
        if (size >= capacity) {
            resize();
        }
        data[size] = value;
        size++;
    }
    
    int get(int index) {
        if (index < 0 || index >= size) {
            std::cout << "Индекс вне диапазона!" << std::endl;
            return -1;
        }
        return data[index];
    }
    
    void set(int index, int value) {
        if (index < 0 || index >= size) {
            std::cout << "Индекс вне диапазона!" << std::endl;
            return;
        }
        data[index] = value;
    }
    
    void remove(int index) {
        if (index < 0 || index >= size) {
            std::cout << "Индекс вне диапазона!" << std::endl;
            return;
        }
        
        for (int i = index; i < size - 1; i++) {
            data[i] = data[i + 1];
        }
        size--;
    }
    
    int getSize() {
        return size;
    }
    
    void print() {
        std::cout << "ArrayList: ";
        for (int i = 0; i < size; i++) {
            std::cout << data[i] << " ";
        }
        std::cout << std::endl;
    }
    
    void insert(int index, int value) {
        if (index < 0 || index > size) {
            std::cout << "Индекс вне диапазона!" << std::endl;
            return;
        }
        
        if (size >= capacity) {
            resize();
        }
        
        for (int i = size; i > index; i--) {
            data[i] = data[i - 1];
        }
        
        data[index] = value;
        size++;
    }
    
    void clear() {
        size = 0;
    }
    
    bool contains(int value) {
        for (int i = 0; i < size; i++) {
            if (data[i] == value) {
                return true;
            }
        }
        return false;
    }
    
    void saveToFile(const char* filename) {
        std::ofstream file(filename, std::ios::binary);
        if (!file) {
            std::cout << "Ошибка открытия файла для записи!" << std::endl;
            return;
        }
        
        file.write(reinterpret_cast<char*>(&size), sizeof(int));
        file.write(reinterpret_cast<char*>(&capacity), sizeof(int));
        file.write(reinterpret_cast<char*>(data), size * sizeof(int));
        
        file.close();
        std::cout << "Список сохранен в файл " << filename << std::endl;
    }
    
    void loadFromFile(const char* filename) {
        std::ifstream file(filename, std::ios::binary);
        if (!file) {
            std::cout << "Ошибка открытия файла для чтения!" << std::endl;
            return;
        }
        
        int newSize, newCapacity;
        file.read(reinterpret_cast<char*>(&newSize), sizeof(int));
        file.read(reinterpret_cast<char*>(&newCapacity), sizeof(int));
        
        delete[] data;
        
        capacity = newCapacity;
        size = newSize;
        data = new int[capacity];
        
        file.read(reinterpret_cast<char*>(data), size * sizeof(int));
        
        file.close();
        std::cout << "Список загружен из файла " << filename << std::endl;
    }
};

int main() {
    ArrayList list;
    
    list.add(10);
    list.add(20);
    list.add(30);
    list.add(40);
    list.add(50);
    
    std::cout << "После добавления элементов:" << std::endl;
    list.print();
    std::cout << "Размер: " << list.getSize() << std::endl;
    
    std::cout << "\nВставка 25 на позицию 2:" << std::endl;
    list.insert(2, 25);
    list.print();
    
    std::cout << "\nИзменение элемента на позиции 3 на 35:" << std::endl;
    list.set(3, 35);
    list.print();
    
    std::cout << "\nУдаление элемента на позиции 1:" << std::endl;
    list.remove(1);
    list.print();
    
    std::cout << "\nПроверка contains:" << std::endl;
    std::cout << "Содержит 25? " << (list.contains(25) ? "Да" : "Нет") << std::endl;
    std::cout << "Содержит 100? " << (list.contains(100) ? "Да" : "Нет") << std::endl;
    
    std::cout << "\nСохранение в файл..." << std::endl;
    list.saveToFile("list.bin");
    
    std::cout << "\nОчистка списка:" << std::endl;
    list.clear();
    list.print();
    std::cout << "Размер после очистки: " << list.getSize() << std::endl;
    
    std::cout << "\nЗагрузка из файла..." << std::endl;
    list.loadFromFile("list.bin");
    list.print();
    
    return 0;
}