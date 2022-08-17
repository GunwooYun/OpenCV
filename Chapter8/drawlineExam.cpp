#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

using namespace cv;

int main()
{
	/* 3 Channel, Init 0 */
    Mat image = Mat::zeros(500, 600, CV_8UC3); 	/* 검은색 배경의 이미지를 생성한다. */
    image.setTo(cv::Scalar(255, 255, 255)); 	/* 흰색으로 채운다. */
    Scalar color(255, 128, 128); 			/* 파란색(blue), 초록색(green), 빨간색(red) */
	// (x, y)
    Point p1(0, 500), p2(200, 100); 		/* 선을 위한 2개의 점의 값을 설정 */
    Point p3(400, 100), p4(600, 500); 		/* 선을 위한 2개의 점의 값을 설정 */

    line(image, p1, p2, color, 5); 		/* 선의 굵기는 5 */
    line(image, p3, p4, color, 5); 		/* 선의 굵기는 5 */
    imshow("Draw Line", image); 		/* "Draw Line" 창에 이미지 표시 */
    waitKey(0); 				/* 사용자의 키 입력을 대기한다. */


    return 0;
}
