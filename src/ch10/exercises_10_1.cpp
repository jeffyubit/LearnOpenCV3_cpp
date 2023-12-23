#include <opencv2/opencv.hpp>
#include <iostream>

int main(){
    cv::Mat img = cv::imread("../resource/fruits.jpg");
    if(img.empty()){
        std::cerr << "Error: Could not read the image." << std::endl;
        return -1;
    }

    std::vector<int> kernelSize = {3, 5, 9, 11};
    cv::namedWindow("Origin Image", cv::WINDOW_NORMAL);
    cv::imshow("Origin Image", img);

    for(int it : kernelSize){
        cv::Mat newImg;
        //高斯模糊 平滑图像  降低噪声  x和y方向可以设置标准差  为0时则代表根据卷积的大小自动计算  降低高频噪声
       cv::GaussianBlur(img, newImg, cv::Size(it, it), 0);

       std::string winName = "GaussianBlur(" + std::to_string(it) + std::string(")");
       cv::namedWindow(winName, cv::WINDOW_NORMAL);
       cv::imshow(winName, newImg);

        
    }
    cv::waitKey(0);
    cv::destroyAllWindows();

    return 0;
}