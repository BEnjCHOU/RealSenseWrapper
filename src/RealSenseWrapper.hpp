#include <iostream>
// Real Sense
#include <librealsense2/rs.hpp>
#include <librealsense2/rsutil.h>

class RealSenseWrapper {
    // Realsense settings
    rs2::pipeline pipe;
    rs2::config cfg;
    const uint RGB_FPS;
    const uint RGB_FRAME_WIDTH;
    const uint RGB_FRAME_HEIGHT;
    public:
        RealSenseWrapper();
        ~RealSenseWrapper();
        void init(RGB_FPS, RGB_FRAME_WIDTH, RGB_FRAME_HEIGHT, pipe, cfg);
};
