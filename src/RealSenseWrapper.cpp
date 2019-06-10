#include "RealSenseWrapper.hpp"

// Realsense Wrapper statements
RealSenseWrapper::RealSenseWrapper()
{
    RGB_FPS = 30;
    RGB_FRAME_WIDTH = 720;
    RGB_FRAME_HEIGHT = 480;
}

RealSenseWrapper::~RealSenseWrapper()
{
    pipe.stop();
}

int main()
{
    return 0;
}
