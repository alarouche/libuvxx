#pragma once
#include <string>

namespace uvxx { namespace rtsp { namespace sample_attributes {

    struct video_dimensions
    {
        int32_t width; int32_t height;
    };

    enum class sample_major_type
    {
        unknown = 0,
        video = 1,
        audio = 2
    };

    /* common attributes */
    static const std::string ATTRIBUTE_SAMPLE_MAJOR_TYPE = "sample.majortype"; /* sample_major_type */

    /* video attributes */
    static const std::string ATTRIBUTE_VIDEO_DIMENSIONS = "sample.video.dimensions"; /* video_dimensions */
    static const std::string ATTRIBUTE_VIDEO_KEYFRAME = "sample.video.keyframe";     /* bool */

    /* audio attributes */
    static const std::string ATTRIBUTE_AUDIO_BITS_PER_SAMPLE = "sample.audio.bits_per_sample";       /* uint32_t */
    static const std::string ATTRIBUTE_AUDIO_CHANNEL_COUNT = "sample.audio.sample_count";            /* uint32_t */
    static const std::string ATTRIBUTE_AUDIO_SAMPLES_PER_SECOND = "sample.audio.samples_per_second"; /* uint32_t */
    static const std::string ATTRIBUTE_AUDIO_BITRATE = "sample.audio.bitrate";                       /* uint32_t */

    /* h26x attributes */
    static const std::string ATTRIBUTE_H26X_SEQUENCE_PARAMETER_SET = "sample.h26x.sps"; /* blob */
    static const std::string ATTRIBUTE_H26X_PICTURE_PARAMETER_SET = "sample.h26x.pps";  /* blob */

    /* mpeg4es attributes */
    static const std::string ATTRIBUTE_MPEG4_CONFIG_DATA = "sample.config_data"; /* blob */
}}}