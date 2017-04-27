#include <stdio.h>
#include <iostream>

#include "opencv2\core\mat.hpp"
#include "opencv2\opencv.hpp"

using namespace cv;
using namespace std;

int main(void)
{
	Mat a;

	a = imread("D:\\Master\\Roboti\\Proiect2\\opencv_leo\\sigla.jpg");
	
	namedWindow("imagine", WINDOW_NORMAL);

	imshow("imagine", a);

	waitKey(-1);
}