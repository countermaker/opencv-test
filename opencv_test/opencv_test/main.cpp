#include<opencv2\opencv.hpp>
using namespace cv;
int main()
{
	Mat srcImage = imread("test.jpg"); /*get the original picture*/

	imshow("original", srcImage);

	Mat element = getStructuringElement(MORPH_RECT, Size(15, 15));
	Mat dstImage;

	erode(srcImage, dstImage, element);/*erode*/

	imshow("after erode", dstImage);
	waitKey(0);

	return 0;
}