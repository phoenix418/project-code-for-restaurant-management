# проектный код для управления рестораном
# ПУНКТЫ ДЛЯ СОЗДАНИЯ КОДА 
СОЗДАЙТЕ КЛАСС MENUITEM ДЛЯ ПРЕДСТАВЛЕНИЯ ЭЛЕМЕНТОВ МЕНЮ.
 - Добавьте приватные поля: string name, double price, string ingredients.
 - Реализуйте конструктор для инициализации полей.
 - Создайте метод displayInfo() для отображения информации о блюде.
 - Добавьте метод getPrice() для получения цены блюда.
   
Определение класса Order:
-Создайте класс Order для представления заказа.
-Добавьте приватные поля: int orderID, vector<MenuItem> items, double totalPrice.
-Реализуйте конструктор для инициализации orderID и totalPrice.
-Создайте метод addItem(MenuItem item) для добавления блюда в заказ и обновления общей стоимости.
-Реализуйте метод displayOrder() для отображения информации о заказе.

ОПРЕДЕЛЕНИЕ КЛАССА CUSTOMER:
-Создайте класс Customer для представления клиента.
-Добавьте приватное поле: string name.
-Реализуйте конструктор для инициализации имени клиента.
-Создайте метод displayInfo() для отображения информации о клиенте.

ОПРЕДЕЛЕНИЕ КЛАССА RESTAURANT:
-Создайте класс Restaurant для управления меню и заказами.
-Добавьте приватные поля: vector<MenuItem> menu, vector<Order> orders.
-Реализуйте метод loadMenu(string filename) для загрузки меню из файла.
-Откройте файл и проверьте его доступность.
-Читайте строки из файла и разбивайте их на компоненты: имя, цену и состав.
-Добавьте элементы меню с помощью метода addMenuItem(MenuItem item).
-Создайте метод createOrder(Customer customer) для создания нового заказа.
-Используйте рекурсивный вызов для добавления нескольких блюд в заказ.
-Реализуйте метод displayMenu() для отображения меню.

ФУНКЦИЯ MAIN():
-Создайте объект Restaurant.
-Загрузите меню из файла, вызвав loadMenu("menu.txt").
-Запросите имя клиента и создайте объект Customer.
-Вызовите метод createOrder(customer) для начала процесса заказа.
