#include <iostream>

int main()
{
	int scanf__;
	int cin__;

    std::cout << "Hello World!\n";
	std::cin >> cin__;
	scanf("%d", &scanf__);
	printf("scanf : %d\n", scanf__);
	std::cout << "cin :" << cin__;

	return 0;
}

//dev++으로 실행시 입력한 한글 코맨트가 보이지 않기 때문에 시간내서 비주얼 스튜디오 다운로드
//install Visual Studio Community 실행 - 수정 - C++ 개발 환경 - C++ 데스크톱 개발 선택 후 설치
//전부 설치 후 파일 - 열기 - 프로젝트/솔루션 - BaekJoon_Answer.sln 선택 - 열기
//솔루션 'BaekJoon_Answer'를 마우스 오른쪽 버튼 클릭 후 - 속성 - 공용 속성 - 시작 프로젝트 - 현재 선택 영역 선택

//솔루션 탐색기에서 문제 번호로 프로젝트 들이 나열되어 있음
//프로젝트 펼쳐서 소스 파일 열어서 .cpp 파일 열기 F5(디버그 모드) 혹은 Ctrl + F5(실행 모드)로 실행
//#define _CRT_SECURE_NO_WARNINGS
//위의 주석을 추가하면 scanf, printf 사용시 경고가 뜨지 않음 (중요!)



