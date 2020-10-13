#include <boost/lambda/lambda.hpp>
#include <iostream>
#include <iterator>
#include <algorithm>


// run at linux ubuntu
// sudo apt-get install libboost-all-dev
// g++ test.cpp
// multiple 3 for each inputed num
int main()
{
    using namespace boost::lambda;
    typedef std::istream_iterator<int> in;

    std::for_each(
        in(std::cin), in(), std::cout << (_1 * 3) << " " );
}

