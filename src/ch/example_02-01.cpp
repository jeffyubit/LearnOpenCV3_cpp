//Example 2-1. A simple OpenCV program that loads an image from disk and displays it
//on the screen
#include <opencv2/opencv.hpp>
#include <iostream>


	

int main() {
	

  //cv::Mat img = cv::imread( argv[1], -1 );
  cv::Mat img = cv::imread("../fruits.jpg");

  if( img.empty()){
	printf("无法读取图像文件\n");
    return -1;
  } 

  cv::namedWindow( "Example 2-1", cv::WINDOW_AUTOSIZE );
  cv::imshow( "Example 2-1", img );
  cv::waitKey( 0 );
  cv::destroyWindow( "Example 2-1" );

  return 0;
}
