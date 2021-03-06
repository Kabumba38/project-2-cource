/// Общее для всех задание

/**
Возвращает след матрицы.
След матрицы - это сумма элементов главной диагонали.
*/
double GetTrace(Matrix& arr)
{
    return 0;// TODO
}


/**
Проверяет, является ли матрица диагональной.

Диагональная матрица - это матрица, у которой нуле везде, кроме главной диагонали.
*/
bool IsDiagonal(Matrix& arr)
{
    return false; //TODO
}

/**
В матрице arr из строки from_i вычитает строку this_j, умноженную на k.

Это одно из элементарных преобразований матриц, которое используется в методе Гаусса.
*/
void SubtractLine(Matrix& arr, int from_i, int this_j, double k)
{
    // TODO
}

///////////// Вариант 1 - если у Вас нечетный номер в списке группы //////////////////////////

/**
Проверяет, является ли матрица верхнетреугольной.

Верхнетреугольная матрица - это такая матрица, у которой все элементы под главной диагональю нулевые.
*/
bool IsUpperAngle(Matrix& arr)
{
    return false; //TODO
}


/**
Делает матрицу верхнедиагональной
*/
bool MakeUpperAngle(Matrix& arr)
{
    // Использовать функцию SubtractLine
    return false; // TODO
}



///////////// Вариант 2 - если у Вас четный номер в списке группы //////////////////////////


/**
Проверяет, является ли матрица нижнетреугольной.

Нижнетреугольная матрица - это такая матрица, у которой все элементы над главной диагональю нулевые.
*/
bool IsLowerAngle(Matrix& arr)
{
    return false; //TODO
}


/**
Делаем матрицу нижнедиагональной
*/
bool MakeLowerAngle(Matrix& arr)
{
    // Использовать функцию SubtractLine
    return true;
}



/////////////// ДОПОЛНИТЕЛЬНОЕ ЗАДАНИЕ ///////////////////////


/**
Метод Гаусса. Приводит матрицу к верхнетреугольному виду (прямой ход), затем делает её диагональной (обратный ход).
Можно использовать для решения СЛУ, расчёта определителя, а также нахождения обратной матрицы.
Возвращает true, если всё удалось и false, если в процессе работы неудачно подвернулся ноль, а нам надо делить...
*/
bool Gauss(Matrix& arr)
{
    // Реализовать без использования циклов и рекурсии с использованием функций из основной части задания и вариантов.
    return false; // TODO
}
