/*#include <opencv2/core/core.hpp>
#include <opencv2/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/xfeatures2d/nonfree.hpp> //Thanks to Alessandro

using namespace cv;

int main(int argc, const char* argv[])
{
    const Mat input = cv::imread("Millennium House 2010.JPG", 0); //Load as grayscale
    Ptr<xfeatures2d::SIFT> detector = xfeatures2d::SIFT::create( 10000 );
    std::vector<cv::KeyPoint> keypoints;
    detector->detect(input, keypoints);

    // Add results to image and save.
    Mat output;
    drawKeypoints(input, keypoints, output);
    imwrite("sift_result.jpg", output);

    return 0;
}*/

/* *** SURF *** */

#include <opencv2/core/core.hpp>
#include <opencv2/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/xfeatures2d/nonfree.hpp> //Thanks to Alessandro

using namespace cv;

int main(int argc, const char* argv[])
{
    const Mat input = cv::imread("Millennium House 2010.JPG", 0); //Load as grayscale
    Ptr<xfeatures2d::SURF> detector = xfeatures2d::SURF::create( 100 );
    //cv::SiftFeatureDetector detector;
    std::vector<cv::KeyPoint> keypoints;
    detector->detect(input, keypoints);

    // Add results to image and save.
    Mat output;
    drawKeypoints(input, keypoints, output);
    imwrite("sift_result.jpg", output);

    return 0;
}