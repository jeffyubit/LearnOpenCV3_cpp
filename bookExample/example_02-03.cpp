// Example 2-3. A simple OpenCV program for playing a video file from disk

#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include <iostream>

using namespace std;



int main()
{
    // 打开视频文件
    cv::VideoCapture video("../tree.avi");

    // 检查视频是否成功打开
    if (!video.isOpened())
    {
        printf("无法打开视频文件\n");
        return -1;
    }

    // 创建一个窗口
    cv::namedWindow("Video", cv::WINDOW_NORMAL);

    while (true)
    {
        cv::Mat frame;

        // 读取一帧图像  好像也可以使用  video>>frame;   将视频中的一帧放到图像中去
        if (!video.read(frame))
            break;

        // 显示每一帧图像
        cv::imshow("Video", frame);

        // 按下ESC键退出循环
        if (cv::waitKey(30) == 27)
            break;
    }

    // 释放VideoCapture对象
    video.release();

    return 0;
}
