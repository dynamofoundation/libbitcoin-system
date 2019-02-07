/**
 * Copyright (c) 2011-2017 libbitcoin developers (see AUTHORS)
 *
 * This file is part of libbitcoin.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef LIBBITCOIN__UTILITY_SOCKET_HPP
#define LIBBITCOIN__UTILITY_SOCKET_HPP

#include <memory>
#include <bitcoin/bitcoin/config/authority.hpp>
#include <bitcoin/bitcoin/define.hpp>
#include <bitcoin/bitcoin/error.hpp>
//#include <bitcoin/bitcoin/utility/asio.hpp>
//#include <bitcoin/bitcoin/utility/noncopyable.hpp>
//#include <bitcoin/bitcoin/utility/thread.hpp>
//#include <bitcoin/bitcoin/utility/threadpool.hpp>
#include <bitcoin/bitcoin/utility/socket.hpp>
#include <bitcoin/config_authority.hpp>
#include <bitcoin/utility_threadpool.hpp>

namespace libbitcoin {
namespace api {

/// This class is thread safe but the socket may not be used concurrently.
class BC_API utility_socket : public socket
//  : private noncopyable
//    /*, public track<socket>*/
{
public:
//    typedef std::shared_ptr<utility_socket> ptr;

    /// Construct an instance.
    utility_socket(utility_threadpool& thread);

    /// Obtain the authority of the remote endpoint.
    libbitcoin::config::api::config_authority authority() const;

    /// The underlying socket.
    utility_socket& get();

    /// Signal cancel of all outstanding work on the socket.
    virtual void stop();

    virtual ~utility_socket();

//private:
//    // This is thread safe.
//    threadpool& thread_;
//
//    // This is protected by mutex.
//    asio::socket socket_;
//    mutable shared_mutex mutex_;
};

} // namespace api
} // namespace libbitcoin

#endif