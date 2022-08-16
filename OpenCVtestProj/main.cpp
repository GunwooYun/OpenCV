#include <opencv2/highgui.hpp>

int main(void)
{
	/* make image object 200 constant gray color */
	cv::Mat image(480, 640, CV_8UC1, cv::Scalar(255)); // row 300px, col 400px, 8bit unsigned char channel #1, constant 200 gary color
	cv::imshow("영상보기", image);
	cv::waitKey(0); // wait for key pushed
	return 0;
}