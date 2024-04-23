﻿#include "BuildTest.h"

int main(int argc, char** argv)
{
	if(argc != 2)
	{
		std::cout << "usage: BuildTest.out <Image_Path>\n";
		return -1;
	}

	cv::Mat image;
	image = cv::imread(argv[1], cv::IMREAD_COLOR);

	if (!image.data)
	{
		std::cout << "No image data \n";
		return -1;
	}

	cv::namedWindow("Display Image", cv::WINDOW_AUTOSIZE);
	cv::imshow("Display Image", image);

	cv::waitKey(0);

	return 0;
}
