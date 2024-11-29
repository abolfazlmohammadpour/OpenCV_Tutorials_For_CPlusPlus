#include <iostream>
#include <opencv4/opencv2/opencv.hpp>

int main(int argc, const char *argv[])
{
    cv::namedWindow("Image");
    cv::Mat Image = cv::imread("/home/abolfazlmohammadpour/Temperature/OpenCVTutorials/OpenCV_Tutorials_For_CPlusPlus/Reading And Showing An Image/Resource/Image.jpg");
    if (Image.empty() == (bool)false)
        cv::imshow("Image", Image);
    else
        std::exit((int)1);

    std::cout << "Number Of Rows Of The Image : " << Image.rows << std::endl;
    std::cout << "Number Of Columns Of The Image : " << Image.cols << std::endl;
    std::cout << "Number Of Channels Of The Image : " << Image.channels() << std::endl;

    cv::waitKey((int)0);
    cv::destroyWindow("Image");

    return (int)0;
}