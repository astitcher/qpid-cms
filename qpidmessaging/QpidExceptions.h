/*
 * Copyright 2014 <copyright holder> <email>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

#ifndef QPIDEXCEPTIONS_H
#define QPIDEXCEPTIONS_H

#include <cms/UnsupportedOperationException.h>

namespace qpid {
namespace cmsimpl {

class NotImplementedYet :  public cms::UnsupportedOperationException
{
public:
    NotImplementedYet();
};

// Call this in the context of catching an exception in the qpid::types::Exception tree
// It will rethrow a suitable cms::CMSException tree exception
void rethrowTranslatedException();

}
}

#endif // QPIDEXCEPTIONS_H
