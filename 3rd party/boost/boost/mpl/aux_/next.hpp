//-----------------------------------------------------------------------------
// boost mpl/aux_/next.hpp header file
// See http://www.boost.org for updates, documentation, and revision history.
//-----------------------------------------------------------------------------
//
// Copyright (c) 2001-02
// Aleksey Gurtovoy
//
// Permission to use, copy, modify, distribute and sell this software
// and its documentation for any purpose is hereby granted without fee, 
// provided that the above copyright notice appears in all copies and 
// that both the copyright notice and this permission notice appear in 
// supporting documentation. No representations are made about the 
// suitability of this software for any purpose. It is provided "as is" 
// without express or implied warranty.

#ifndef BOOST_MPL_AUX_NEXT_HPP_INCLUDED
#define BOOST_MPL_AUX_NEXT_HPP_INCLUDED

#if defined(BOOST_MPL_USE_NEXT_INTERNALLY)

#   if !defined(BOOST_MPL_PREPROCESSING_MODE)
#       include "boost/mpl/next.hpp"
#   endif

#   define BOOST_MPL_AUX_NEXT(x) next<x>::type

#else

#   define BOOST_MPL_AUX_NEXT(x) x::next

#endif

#endif // BOOST_MPL_AUX_NEXT_HPP_INCLUDED
