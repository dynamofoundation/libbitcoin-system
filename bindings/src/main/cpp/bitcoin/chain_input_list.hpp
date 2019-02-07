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
#ifndef LIBBITCOIN__CHAIN_INPUT_LIST_HPP
#define LIBBITCOIN__CHAIN_INPUT_LIST_HPP

#include <bitcoin/bitcoin/chain/input.hpp>
#include <bitcoin/bitcoin/define.hpp>
//#include <bitcoin/bitcoin/error.hpp>

namespace libbitcoin {
//namespace chain {
namespace api {

class BC_API chain_input_list : public chain::input::list
{
//public:
//
//  chain_input_list()
//    : inputs(new chain::input::list())
//  {
//  }
//
//  chain::input get(size_t i) {
//    return chain_input_list::inputs[i];
//  }
//
//  void set(size_t i, chain::input *t) {
//    chain_input_list::inputs[i] = *t;
//  }
//
//  chain::input::list getinputs() {
//    return inputs;
//  }
//
//  size_t getSize() {
//    return inputs.size();
//  }
//
//private:
//
//  chain::input::list inputs;

};

} // namespace api
//} // namespace chain
} // namespace libbitcoin

#endif