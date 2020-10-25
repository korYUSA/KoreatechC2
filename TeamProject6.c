#include <stdio.h>

void ArrayCreate (int (*_arr)[10], int _row, int _col) {	// 자료값이 _row, _col만큼 밀려서 생성되는 함수
	int num;
	num = 1;
	printf("(%d, %d)에서 시작합니다.\n", _col, _row);
	for (int j = _col - 1; j < 10; j++) {					// _row - 1 줄에서는 _col - 1만큼 건너뛰어서 시작함
		_arr[_row - 1][j] = num;
		num++;
	}

	for (int i = _row; i < 10; i++) {						// _row 줄 부터는 정상적으로 생성
		for (int j = 0; j < 10; j++) {
			_arr[i][j] = num;
			num++;
		}
	}
}

void ArrayPrint (int (*_arr)[10]) {
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			printf("%.2d ", _arr[i][j]);
		}
		printf("\n");
	}
}

void ArrayModify (int(*_arr)[10], int _row, int _col) {

	// 이 함수를 작성하시오

}

int main(void)
{
	int arr[10][10] = {0};		// 10x10 배열을 0으로 초기화
	int row, col;

	printf("행렬을 입력해주세요: ");
	scanf_s("%d %d", &col, &row);

	ArrayCreate(arr, row, col);
	ArrayPrint(arr);
	printf("\n행렬 수정중...\n\n");
	ArrayModify(arr, row, col);
	ArrayPrint(arr);

	return 0;
}