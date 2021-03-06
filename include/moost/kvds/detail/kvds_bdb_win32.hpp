/* vim:set ts=3 sw=3 sts=3 et: */
/**
 * Copyright © 2008-2013 Last.fm Limited
 *
 * This file is part of libmoost.
 *
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without restriction,
 * including without limitation the rights to use, copy, modify, merge,
 * publish, distribute, sublicense, and/or sell copies of the Software,
 * and to permit persons to whom the Software is furnished to do so,
 * subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
 * OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
 * HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 * WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 */

#ifndef MOOST_KVDS_KVDSDBD_WIN32_HPP__
#define MOOST_KVDS_KVDSDBD_WIN32_HPP__

#pragma message ("********************************** WARNING **********************************")
#pragma message ("    Berkley DB is not supported on Windows, memory datastore used instead    ")
#pragma message ("  This MUST only be used for debugging purposes and NOT put into production  ")
#pragma message ("*****************************************************************************")

#include "kvds_mem.hpp"

namespace moost { namespace kvds {

   /// This is a mock class since dbd isn't supported on Windows (yet)

   /// *** This class is NOT thread safe ***

   typedef KvdsMemMap KvdsBht; /// Pretend to be a Berkeley DB Hash Table
   typedef KvdsMemMap KvdsBbt; /// Pretend to be a Berkeley DB B-Tree

}}


#endif // MOOST_KVDS_KVDSDBD_WIN32_HPP__
