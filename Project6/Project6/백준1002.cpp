// 파일명.cpp로 변경하여 사용

#include <iostream>

int main() {
    int T=0;


    int x1 = 0, x2 = 0, y1 = 0, y2 = 0, r1 = 0, r2 = 0, RR = 0, r1_minus_r2 = 0, r1_plus_r2 = 0;
    std::cin >> T;
    for (int i = 0; i < T; i++) {
        std::cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

        // 두 점 사이의 거리
        RR = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);

        // 작은 원이 큰 원 안에 있을 떄를 가정 함.
        r1_minus_r2 = (r1 - r2) * (r1 - r2);
        //반대
        r1_plus_r2 = (r1 + r2) * (r1 + r2);

        if (RR == 0) // 원의 중심이 같을 때 
        {
            if (r1_minus_r2 == 0) std::cout << "-1" << std::endl; // 반지름도 같을 때
            else std::cout << "0" << std::endl;
        }
        else if (RR == r1_minus_r2 || RR == r1_plus_r2) std::cout << "1" << std::endl;// 한 점에서 만남.
        else if (r1_minus_r2 < RR && RR < r1_plus_r2) std::cout << "2" << std::endl; // 두 점에서 만남
        else std::cout << "0" << std::endl; // 멀어서 만나지 않음.

    }


}