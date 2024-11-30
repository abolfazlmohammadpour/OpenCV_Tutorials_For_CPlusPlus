#include <iostream>
#include <opencv4/opencv2/opencv.hpp>

int main(int argc, const char *argv[])
{
    cv::Mat Image = cv::imread("/home/abolfazlmohammadpour/Temperature/OpenCVTutorials/OpenCV_Tutorials_For_CPlusPlus/Reading And Showing An Image2/Resource/Image.jpg", cv::IMREAD_UNCHANGED);
    if (Image.empty() == (bool)true)
        std::exit((int)1);
    cv::namedWindow("Image", cv::WINDOW_AUTOSIZE);
    cv::imshow("Image", Image);
    std::cout << "Number Of Rows Of The Image : " << Image.rows << std::endl;
    std::cout << "Number Of Columns Of The Image : " << Image.cols << std::endl;
    std::cout << "Number Of Channels Of The Image : " << Image.channels() << std::endl;
    std::cout << "--------------------------------------------------" << std::endl;

    cv::Mat Image_Gray; 
    cv::cvtColor(Image, Image_Gray, cv::COLOR_BGR2GRAY);
    if (Image_Gray.empty() == (bool)true)
        std::exit((int)1);
    cv::namedWindow("Image_Gray", cv::WINDOW_AUTOSIZE);
    cv::imshow("Image_Gray", Image_Gray);
    std::cout << "Number Of Rows Of The Image_Gray : " << Image_Gray.rows << std::endl;
    std::cout << "Number Of Columns Of The Image_Gray : " << Image_Gray.cols << std::endl;
    std::cout << "Number Of Channels Of The Image_Gray : " << Image_Gray.channels() << std::endl;
    std::cout << "--------------------------------------------------" << std::endl;

    cv::Mat Image_HLS;
    cv::cvtColor(Image, Image_HLS, cv::COLOR_BGR2HLS);
    if (Image_HLS.empty() == (bool)true)
        std::exit((int)1);
    cv::namedWindow("Image_HLS", cv::WINDOW_AUTOSIZE);
    cv::imshow("Image_HLS", Image_HLS);
    std::cout << "Number Of Rows Of The Image_HLS : " << Image_HLS.rows << std::endl;
    std::cout << "Number Of Columns Of The Image_HLS : " << Image_HLS.cols << std::endl;
    std::cout << "Number Of Channels Of The Image_HLS : " << Image_HLS.channels() << std::endl;

    cv::waitKey((int)0);
    cv::destroyWindow("Image");
    cv::destroyWindow("Image_Gray");
    cv::destroyWindow("Image_HLS");

    return (int)0;
}