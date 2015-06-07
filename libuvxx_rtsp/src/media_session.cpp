#include "media_session.hpp"
#include "details/_media_session_impl.hpp"

using namespace uvxx::rtsp;
using namespace uvxx::rtsp::details;

media_subsession::media_subsession(const std::shared_ptr<_media_subsession>& _media_subsession)
{
    __media_subsession = _media_subsession;
}

media_subsession::media_subsession(media_subsession&& rhs)
{
    *this = std::move(rhs);
}

media_subsession& media_subsession::operator=(media_subsession&& rhs)
{
    __media_subsession = std::move(rhs.__media_subsession);
    return *this;
}

const std::string media_subsession::codec_name_get() const
{
    return __media_subsession->codec_name_get();
}

media_session::media_session(media_session&& rhs)
{
    *this = std::move(rhs);
}

media_session::media_session()
{

}

media_session::media_session(const std::shared_ptr<_media_session>& _media_session) : __media_session(_media_session)
{

}

media_session& media_session::operator=(media_session&& rhs)
{
    __media_session = std::move(rhs.__media_session);
    return *this;
}

const size_t media_session::subsession_count() const
{
    return __media_session->subsessions().size();
}

const media_subsession media_session::subsession_get(size_t index) const
{
    return media_subsession(__media_session->subsessions().at(index));
}