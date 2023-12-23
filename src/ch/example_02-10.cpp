// Example 2-10. The same object can load videos from a camera or a file
// 
#include <opencv2/opencv.hpp>
#include <iostream>

	

int main() {
  cv::namedWindow( "Example 2-10", cv::WINDOW_AUTOSIZE );
  cv::VideoCapture cap;

  // int choice;
  // std::cout<<"请输入操作：";
  // std::cin >> choice;

  // if (choice==1) {
  //   cap.open(0); // open the first camera
  // } else {
  //   cap.open("../tree.avi");
  // }

  cap.open(0);

  if( !cap.isOpened() ) { // check if we succeeded
    std::cerr << "Couldn't open capture." << std::endl;
    return -1;
  }

  cv::Mat frame;

  for(;;) {

    cap >> frame;

    if( frame.empty() ) break; // Ran out of film

    cv::imshow( "Example 2-10", frame );

    if( (char) cv::waitKey(33) >= 0 ) break;

  }

  return 0;

}
