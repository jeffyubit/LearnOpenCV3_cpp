// Example 2-5. Loading and then smoothing an image before it is displayed on the screen

#include <opencv2/opencv.hpp>


int main() {
  cv::Mat image = cv::imread("../box.png");
  cv::namedWindow("Example2_5-in", cv::WINDOW_AUTOSIZE);
  cv::namedWindow("Example2_5-out", cv::WINDOW_AUTOSIZE);

  cv::imshow("Example2_5-in", image);

  cv::Mat out;
  cv::GaussianBlur(image, out, cv::Size(5, 5), 3, 3);
  cv::GaussianBlur(out, out, cv::Size(5, 5), 3, 3);
  cv::imshow("Example2_5-out", out);
  cv::waitKey(0);

  return 0;
}
