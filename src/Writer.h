/*
 * Copyright Justin Tennant <justin.tennant@sjsu.edu> 2017.
 * Distributed under the Boost Software License, Version 1.0.
 *    (See accompanying file LICENSE or copy at
 *          http://www.boost.org/LICENSE_1_0.txt)
 */

/* 
 * File:   Writer.h
 * Author: Justin Tennant <justin.tennant@sjsu.edu>
 *
 * Created on February 2, 2017, 11:31 AM
 */

#ifndef WRITER_H
#define WRITER_H

#include "FrameData.h"
#include "Mutex.h"

namespace Stringless {

class Writer {
public:
    Writer(FrameData *data_address, 
           int camera_number, 
           char *face_landmarks_location);
    Writer(const Writer& orig);
    virtual ~Writer();
    
    int start();
    int stop();
private:
    FrameData *data_address;
    Mutex mutex;
    int camera_number;
    char *face_landmarks_location;
};

} // namespace Stringless

#endif /* WRITER_H */

