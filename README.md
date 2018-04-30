Данный проект решает метрическую неориентированную задачу коммивояжера в полном графе на плоскости в 2-приближении, а также считает среднее значение и среднеквадратичное отклонение пути в 2-приближении от правильного ответа.
Он сам генерирует нормально распределенный на плоскости набор точек с дисперсией 1 с помощью преобразования Бокса-Мюллера.
Также, тесты запускаются автоматически для количества точек от 2 до 10.

Чтобы запустить проект, нужны все файлы. Запускать нужно просто main.cpp.

2-приближение.
1. Выбирается вершина r ∈ V[G], которая будет «корневой»
2. Из корня r с помощью алгоритма Прима строится минимальное остовное дерево T для графа G
3. Пусть L – список вершин, которые посещаются при обходе вершин дерева T в прямом порядке
4. Возвращается как ответ гамильтонов цикл H, который посещает вершины в порядке перечисления в списке L

Докажем, что c(Z) <= 2c(Z*), где Z* - минимальный гамильтонов цикл.
Достаточно доказать 2 вспомогательных утверждения:
1) c(Z*) >= c(T)
2) c(Z) <= 2 c(T)

Докажем (1). Если из Z* удалить одно (произвольное) ребро, получится остовное дерево T'.
А по построению T — минимальное остовное дерево. Поэтому c(Z*) > c(T') >= c(T).

Докажем (2). Через P обозначим путь на графе, соответствующий обходу T в прямом порядке.
Путь P проходит ровно 2 раза по каждому ребру T. Поэтому c(P) = 2 c(T) <= 2 c(Z*).
Путь P — замкнутый путь, проходящий по всем вершинам графа. Но P — не гамильтонов цикл,
т. к. по некоторым вершинам может проходить более одного раза. Обход L содержит список
вершин в порядке прохождения P , но без дубликатов. В силу того, что для стоимости рёбер выполняется
неравенство треугольника, c(L) <= c(P). Поэтому: c(Z) <= c(T) <= 2 c(T). Т.е. (2) доказано.
