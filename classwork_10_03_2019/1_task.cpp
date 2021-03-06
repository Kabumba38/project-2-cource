/// Здесь описано 3 функции, мысленно пронумеруем их как 1, 2 и 3.
/// Для определения номера функции, которую Вам надо реализовать, возьмите остаток от деления
/// Вашего номера в списке группы на 3.


/**
Заполняет матрицу случайными целыми числами из диапазона [min; max], включая концы интервала.

Переданная матрица должна быть непустой, т.е. для неё уже должен быть вызван Create.

min=0 - аргумент по умолчанию и его необязательно передавать, если нас устраивает 0.
Например, FillRandomInt(some_m, 10) <--> FillRandomInt(some_m, 10, 0)
*/
void FillRandomInt(Matrix& arr, int max, int min=0)
{
    //TODO
}

/**
Заполняет матрицу так, чтобы получилась единичная.

Переданная матрица должна быть непустой, т.е. для неё уже должен быть вызван Create.
*  
Т.е. на главной диагонали будут 1, а во всех остальных местах - 0.
*/
void FillMatrixE(Matrix& arr)
{
    // TODO
}

/**
Заполнение матрицы пользователем с клавиатуры

Переданная матрица должна быть непустой, т.е. для неё уже должен быть вызван Create.
*/
void FillByUser(Matrix& arr)
{
    //TODO
}


///////////////////// ДОПОЛНИТЕЛЬНОЕ ЗАДАНИЕ ///////////////////////

/**
Загружает данные из файла и возвращает в виде матрицы.
В файле просто выписана матрица, например

23 4 65
43 54 2

Количество столбцов в матрице нужно понять на основе количества чисел
 в первой строке файла (разделитель - пробел),
а количество строк матрицы - на основе количества строк в файле.

Если при чтении файла станет понятно, что он некорректный, нужно вернуть пустую матрицу
и вывести сообщение об ошибке в cerr.
*/
Matrix LoadFromFile(string filename)
{
    
}
