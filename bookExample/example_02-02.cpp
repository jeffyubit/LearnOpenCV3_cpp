// Example 2-2. Same as Example 2-1 but employing the “using namespace” directive

#include "opencv2/highgui/highgui.hpp"
#include <iostream>

using namespace cv;
using namespace std;


int main() {

  
  Mat img = imread("../fruits.jpg");

  if(img.empty()) return -1;

  namedWindow("Example 2-2", cv::WINDOW_AUTOSIZE);

  imshow("Example 2-2", img);

  waitKey(0);

  destroyWindow("Example 2-2");
}
