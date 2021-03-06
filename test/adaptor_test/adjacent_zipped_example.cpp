// Boost.Range 2.0 Extension library
// via PStade Oven Library
//
// Copyright Kohei Takahashi 2014.
// Copyright Akira Takahashi 2011-2012.
// Copyright Shunsuke Sogame 2005-2007.
// Use, modification and distribution is subject to the Boost Software License,
// Version 1.0. (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)
//
//[adjacent_zipped_example
#include <boost/range/adaptor/adjacent_zipped.hpp>
#include <boost/range/algorithm/copy.hpp>
#include <boost/tuple/tuple_io.hpp>
#include <boost/assign.hpp>
#include <iterator>
#include <iostream>
#include <vector>

int main(int argc, const char* argv[])
{
    using namespace boost::assign;
    using namespace boost::adaptors;

    std::vector<int> input;
    input += 1,2,3,4,5;

    boost::copy(
        input | adjacent_zipped,
        std::ostream_iterator<boost::tuple<int, int> >(std::cout, "\n"));
}
//]

/*
output:
(1 2)
(2 3)
(3 4)
(4 5)
*/

