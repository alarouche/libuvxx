#include "details/_live_common.hpp"
#include "details/_live_rtsp_client.hpp"

using namespace uvxx::rtsp::details;

_live_rtsp_client::_live_rtsp_client(char const* rtsp_url,
                                     void* context,
                                     int verbosity_level,
                                     char const* application_name,
                                     portNumBits tunnel_over_http_port_number) :
    RTSPClient(*(_get_live_environment().get()), rtsp_url, verbosity_level, application_name, tunnel_over_http_port_number, -1), 
    _context(context)
{
        
}


_live_rtsp_client::~_live_rtsp_client(void)
{
}

void* _live_rtsp_client::context()
{
    return _context;
}
