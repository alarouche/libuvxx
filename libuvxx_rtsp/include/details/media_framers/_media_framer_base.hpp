#pragma once
#include "rtsp_client.hpp"
#include "media_session.hpp"
#include "media_sample.hpp"

namespace uvxx { namespace rtsp { namespace details { namespace media_framers
{
    class _media_framer_base
    {
    public:
        explicit _media_framer_base(const media_subsession& subsession);

        virtual ~_media_framer_base();

    public:
        void begin_reading();
    
        void on_sample_set(read_sample_delegate callback);

        int stream_number();

    protected:
        virtual void sample_receieved(bool packet_marker_bit);

        media_sample working_sample();

        void do_sample_callback();

        media_subsession _subsession;

        void continue_reading();

    private:
        static void on_after_getting_frame(void* client_data, unsigned packet_data_size, unsigned truncated_bytes, struct timeval presentation_time, unsigned duration_in_microseconds);

        static void adjust_buffer_for_trucated_bytes(unsigned truncated_amount, const media_sample& sample);

        static void on_rtcp_bye(void* client_data);

        void on_after_getting_frame(unsigned packet_data_size, unsigned truncated_bytes, struct timeval presentation_time, unsigned duration_in_microseconds);

    private:
        media_sample _sample;

        read_sample_delegate _sample_callback;

        std::chrono::microseconds _lastPresentationTime;

        std::chrono::microseconds _currentPresentationTime;

        bool _was_synced;
    };
}}}}