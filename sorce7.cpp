//   파일이름: 3-17study.cpp
//   설명 : cpp의 활용
//   작성자 : 이재욱
  #include <stdio.h>// 전처리기. 
 int/*함수의 출력타입*/  main/*함수의 이름*/(void)/*함수의 입력 타입. void는 입력이 없다는 의미이다.*/ //<함수 :헤더(header)첫번째행에 세미콜론 없음 주의
 {/*함수의 시작*/ 
//변수의 선언과 정의
        short x; //첫번째 정수를 저장하는 변수
        int y;//두번째 정수를 저장하는 변수
        int sum;//두 정수의 합을 저장하는 변수, int x, y, sum; 하나의 라인에서 여러개의 변수를 선언; sum은 식별자이다
       /*표준자료형
              -정수형: short, int, long, longlong
              -실수형: float, double, long double
              -문자형: char 영어1byte 한글2byte
*/



        x = 100;
        y = 200;

        sum = x + y;
       
       printf("두수의 합 : %d", sum);

       // 변수 초기화
       int j = 10;
       int k = 20;
       
       sum = j + k;
       printf("초기화 된 두 수의 합: %d", sum); 
        
        
        return 0;//함수를 종료시키면서 값을 반환하는 키워드이다. 값을 반환하기 위해서는 return 다음에 반환값을 써주면 된다.
 //함수의 몸체, 함수가 수행하는 작업에 해당하는 문장들이 들어간다.
 }//함수의 종료