#include "4-1.h"
#include "4-1.cpp"
using namespace std;

int main() {
	srand(time(NULL));
	setlocale(LC_ALL, "rus");
	menu();
	return 0;
}

// сбалансированное - высоты поддеревьев каждой из вершин отличаются не более чем на единицу
// двоичное - имеет только левого и правого потомка
// прямой - от корня по левой ветви, затем к правой
// симметричный - от левой ветви к корню, а затем по правой ветви

void menu() {
	int command{}, n{};
	TreeNode* root{};
	n = get_number();
	while (true) {
		cout << "Введите нужную вам команду:" << endl;
		cout << "1 - Создать дерево и показать его элементы в виде последовательности" << endl;
		cout << "2 - Построчный вывод дерева на основе процедуры обхода в прямом порядке" << endl;
		cout << "3 - Построчный вывод дерева на основе процедуры обхода в симметричном порядке" << endl;
		cout << "4 - Построчный вывод дерева на основе процедуры обхода в обратно-симметричном порядке" << endl;
		cout << "0 - Завершить программу" << endl;
		cin >> command;
		switch (command) {
		case 0:
			destroy(root);
			return;
			break;
		case 1:
			cout << "Введите количество элементов дерева" << endl;
			cin >> n;
			cout << "Элементы дерева:" << endl;
			build_tree(root, n);
			cout << "\n";
			break;
		case 2:
			in_order(root, 0);
			break;
		case 3:
			pre_order(root, 0);
			break;
		case 4:
			post_order(root, 0);
			break;
		default:
			cout << "Ошибка ввода. Попробуйте снова." << endl << endl;
		}
	}

}
