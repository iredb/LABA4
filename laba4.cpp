/****************************************************
 *  Автор:    Струк С.А.                            *
 *  Название: Обработка массивов.                   *
 *  https://onlinegdb.com/7w5YUUA1J                *
 ****************************************************/

#include <iostream>

using namespace std;

int main() {
  int B[100][100];
  int rows, columns, sum;
  
  cout << "Сколько столбцов? ";
  cin >> columns;
  cout << endl << "Сколько строк? ";
  cin >> rows;
  
  for (int row = 0; row < rows; ++row) {
    for (int column = 0; column < columns; ++column) {
      cout << endl << "Введите элемент " << row + 1 << " строки " << column + 1 << " столбца: ";
      cin >> B[row][column];
      
      if (B[row][column] > 0 && B[row][column] % 2 == 0) {
        sum += B[row][column];
      } 
    }
  }
  
  cout << endl << "Исходная матрица: " << endl;
  
  for (int row = 0; row < rows; ++row){
    for (int column = 0; column < columns; ++column){
      cout << B[row][column] << " ";
    }
    
    cout << endl;
  }
  
  cout << "Характеристика матрицы: " << sum;
  
  return 0;
}
