#include <stdio.h>
#include <stdlib.h>

int main() {
	int rand_num, num;
	int upper = 101, lower = 0;

	srand(time(NULL));
	printf("Random Number between 1 and 100 was generated.\n Let's quess!\n");
	rand_num = rand() % 100 + 1;   /*�̰� ������ +1�̴ϱ� 1~10�ϰŰ� 11 12 13�� ��� ����� �� �׳� 100���� ������ 123�� �������� 23�̰� +1 �ǰڳ�;*/









	for (int cnt = 1; 1; ++cnt) {


		printf("Enter a number ( lower: %d, upper: %d )��", lower, upper);
		scanf_s("%d", &num);

		if (num == rand_num) {
			printf("Congratulations! You guessed the number in %d times.\n", cnt);

			return;

		}

		else if (upper > num && num > rand_num) {
			printf("The target number is smaller than yours.\n");

			while (1) {
				if (num <= lower) {


					printf("Enter a number between %d and %d.��", lower, upper);

					scanf_s("%d", &num);
					break;
				}

				else if (num >= lower && num <= upper) {
					upper = num;
					break;
				}

			}
		}
		else if (num >= upper) {


			printf("Enter a number between %d and %d.\n", lower, upper);





		}
		else if (lower < num && num < rand_num) {
			printf("The target number is greater than yours.\n");

			while (1) {

				if (num <= lower) {

					printf("Enter a number between %d and %d.��", lower, upper);

					scanf_s("%d", &num);
					break;
				}

				else if (num >= lower && num <= upper) {
					lower = num;
					break;
				}


			}
		}
		else if (num <= lower) {


			printf("Enter a number between %d and %d.\n", lower, upper);




		}
		else if (lower >= num || num <= upper) {
			printf("Enter a number between %d and %d.\n", lower, upper);

		}








	}



}