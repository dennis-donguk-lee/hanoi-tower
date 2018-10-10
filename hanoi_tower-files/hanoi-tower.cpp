//#include "hanoi-tower.h"

#include <sstream>      // std::stringstream
#include <iomanip>      // left,right,fill,setw - see handout

template< typename CALLBACK >
void hanoi_tower_1_rec(const int n, int diskTotal, char src, char dest, char aux
  , CALLBACK cb
)
{
    std::stringstream ss;

    if ( n == 1 ) {
      ss << "move disk 1 from " << src << " to " << dest;
      cb( ss.str() ); // callback
    }
    else
    {
      hanoi_tower_1_rec(n - 1, diskTotal, src, aux, dest, cb);
      ss << "move disk " << n << " from " << src << " to "
      << dest;
      cb( ss.str() ); // callback
      hanoi_tower_1_rec(n - 1, diskTotal, aux, dest, src, cb);
    }

    return;
}

template< typename CALLBACK >
void hanoi_tower_1( int n, CALLBACK cb ) 
{
    hanoi_tower_1_rec(n, n, 'A', 'C', 'B', cb);
}

////////////////////////////////////////////////////////////////////////////////
template< typename CALLBACK >
void hanoi_tower_2( int n, CALLBACK cb ) 
{
    hanoi_tower_1( n, cb ); // if not doing extra credit just leave it like this
}

////////////////////////////////////////////////////////////////////////////////
template< typename CALLBACK >
void hanoi_tower_3( int n, CALLBACK cb ) 
{
    hanoi_tower_1( n, cb ); // if not doing extra credit just leave it like this
}
