#include <stdio.h>

int main()
{
    printf("Hello world\n노\n수\n찬\n"
           "c  ccccccc      c\n"
           "c      ccccccc             c\n");
           printf("첫 번째 숫자 : %d\n", 123);
           printf("두 번째 숫자 : %f\n", 7.6);
           printf("실수 출력%10f\n",7.4534);
           printf("실수 출력%10.3f\n",7.4534);
           printf("실수 출력%10.2f\n",7.4534);
           printf("실수 출력%10.0f\n",7.4534);
           printf("실수 출력%10d\n",1234);
           printf("실수 출력%8d\n",1234);
           printf("실수 출력%6d\n",1234);
           printf("실수 출력%2d\n",1234);
           printf("----------\n");
           printf("%s\n", "각 과목의 점수와 합계, 평균을 출력한다.");
           printf("kor %d, mat %d, eng %d\n", 55, 65, 90);
           printf("sum %d\n", 55 + 65 + 90);
           printf("avg %d\n", (55 + 65 + 90)/3);
           printf("%s%8s\n", "sub", "score");
           printf("----------\n");
           printf("%s%8d\n", "kor", 50);
           printf("%s%8d\n", "mat", 65);
           printf("%s%8d\n", "eng", 90);
           printf("----------\n");
           printf("%s%8d\n", "sum", 55+65+90);
           printf("%s%8d\n", "avg", (55+65+90)/3);
           printf("----------\n");
        int a = 2;
        char b;
        b = 'c';
        printf("a = %d\nb = %c\n", a, b);
        return 0;
    }