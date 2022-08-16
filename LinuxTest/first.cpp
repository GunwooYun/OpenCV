#include <opencv2/highgui.hpp>

using namespace cv;

int main(void)
{
	/* make image object 200 constant gray color */
	Mat image(480, 640, CV_8UC1, Scalar(127)); // row 300px, col 400px, 8bit unsigned char channel #1, constant 200 gary color
	imshow("Image", image);
	waitKey(0); // wait for key pushed
	return 0;
}
