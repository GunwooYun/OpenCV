#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

using namespace cv;

int main()
{
    Mat image = Mat::zeros(500, 500, CV_8UC3); 		/* 검은색 배경의 이미지를 생성한다. */
    image.setTo(cv::Scalar(255, 255, 255)); 		/* 흰색으로 채운다. */
    Scalar color(0, 255, 0); 				/* 파란색(blue), 초록색(green), 빨간색(red) */
    Point p1(10, 10), p2(100, 100), p3(220, 10); 	/* 사각형을 위한 3개의 점을 설정 */
    Point p4(0, 0), p5(100, 100), p6(200, 200), p7(300, 300); 	/* 사각형을 위한 3개의 점을 설정 */
    Size size(100, 100); 				/* Rect를 위한 크기 */
    Rect rect1(110, 10, 100, 100); 			/* 사각형을 위한 구역(4개의 인자) */
    Rect rect2(p3, size); 				/* 사각형을 위한 구역(점과 크기) */
    Rect rect11(p4, size); 				/* 사각형을 위한 구역(점과 크기) */
    Rect rect22(p5, size); 				/* 사각형을 위한 구역(점과 크기) */
    Rect rect33(p6, size); 				/* 사각형을 위한 구역(점과 크기) */
    Rect rect44(p7, size); 				/* 사각형을 위한 구역(점과 크기) */

    //rectangle(image, p1, p2, color, 2); 		/* 굵기가 2 */
    //rectangle(image, rect1, color, 2);
    //rectangle(image, rect2, color, 2);
    rectangle(image, rect11, color, 2);
    rectangle(image, rect22, color, 2);
    rectangle(image, rect33, color, 2);
    rectangle(image, rect44, color, 2);

    imshow("Draw Rect", image); 			/* "Draw Rect" 창에 이미지 표시 */
    waitKey(0); 					/* 사용자의 키 입력을 대기한다. */

    return 0;
}
