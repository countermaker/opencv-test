#include<opencv2\opencv.hpp>
#include"opencv2/imgproc/imgproc.hpp"
#include "opencv2/highgui/highgui.hpp"
using namespace cv;
int main()
{
	Mat srcImage = imread("test.jpg"); /*get the original picture*/

	imshow("original", srcImage);

	Mat dstImage;

	blur(srcImage, dstImage, Size(7, 7));/*blur*/

	imshow("after blur", dstImage);
	waitKey(0);

	return 0;
}