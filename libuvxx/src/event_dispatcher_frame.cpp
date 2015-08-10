#include "details/_event_dispatcher_frame_impl.hpp"
#include "event_dispatcher_frame.hpp"

namespace uvxx
{
    using namespace details;

    event_dispatcher_frame::event_dispatcher_frame() : event_dispatcher_frame(true)
    {

    }

    event_dispatcher_frame::event_dispatcher_frame(bool exitWhenRequested) : 
        __event_dispatcher_frame_impl(std::make_shared<_event_dispatcher_frame_impl>(exitWhenRequested))
    {
       
    }

    event_dispatcher_frame::event_dispatcher_frame(event_dispatcher_frame&& dispatcher_frame) 
    {
        *this = std::move(dispatcher_frame);
    }
    
    event_dispatcher_frame& event_dispatcher_frame::operator=(event_dispatcher_frame&& rhs)
    {
        __event_dispatcher_frame_impl = std::move(rhs.__event_dispatcher_frame_impl);

        return *this;
    }

    bool event_dispatcher_frame::continue_get()
    {
        return __event_dispatcher_frame_impl->get_continue();
    }

    void event_dispatcher_frame::continue_set(bool shouldContinue)
    {
        __event_dispatcher_frame_impl->set_continue(shouldContinue);
    }

    event_dispatcher_frame::operator bool() const
    {
        return __event_dispatcher_frame_impl.operator bool();
    }
}