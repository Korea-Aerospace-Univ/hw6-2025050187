#include <stdio.h>

int main(void) {
    //문자열 x를 정의하고, 이 문자열에 대한 포인터 두개를 정의한다. p는 외부용 포인터
    //q는 내부용 포인터이다.
    char x[10];
    char *p, *q;

    //그리고 10개의 영문자를 입력한다. 포인터로 배열에 접근하기에 p를 사용한다.
    for (p = x; p < x + 10; p++) {
        scanf(" %c", p);
    }

    //최빈 문자와 빈도수를 저장할 변수이다.
    //여기서 max_ch는 *x로 작성해 첫번째 문자를 초기값으로 설정하고, max_count는 아직 수를 안세었기 때문에 먼저 0으로 설정한다.
    char max_ch = *x;
    int max_count = 0;
    //각 문자가 배열에 몇 번 나오는지 세고, 가장 많이 나온 것을 찾는 반복문이다.
    //p는 지금 검사할 문자를 의미하는 거고
    //q는 배열을 처음부터 끝까지 보기 위해 사용된다(최대 빈도수 확인하기 위한)
    //그래서 여기서 배열 전체로 봤을 때 지금 검사할 문자와 같은 부분이 있으면 카운트를 올린다.
    for (p = x; p < x + 10; p++) {
        int count = 0;
        for (q = x; q < x + 10; q++) {
            if (*q == *p) {
                count++;
            }
        }
        //이것은 빈도가 기존에 저장했던 거에서 더 클때만 갱신하며, 같으면 유지된다.
        if (count > max_count) {
            max_count = count;
            max_ch = *p;
        }
    }

    printf("%c %d\n", max_ch, max_count);

    return 0;
}
