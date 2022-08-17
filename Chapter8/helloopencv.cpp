#include <opencv2/highgui/highgui.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int main()
{
	/* Row : 300px, Col : 400px, unsigned 8bit channel 1, Scalar <- Initialize */
    Mat image(10, 10, CV_8UC1, Scalar(255)); 	/* 흰색 배경의 행렬을 생성한다. */
	//cout << image << endl;
	cout << image.rows << endl;
	cout << image.cols << endl;
	cout << image.size() << endl;
    imshow("Hello World", image); 		/* "Hello World" 창에 이미지를 표시한다. */
    waitKey(0); 				/* 사용자의 키 입력을 대기한다. */

    return 0;
}
