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

#ifndef QPID_CMSIMPL_QPIDQUEUE_H
#define QPID_CMSIMPL_QPIDQUEUE_H

#include "cms/Queue.h"

namespace qpid {
namespace cmsimpl {

class QpidQueue : public cms::Queue
{
public:
    QpidQueue();
    QpidQueue(const QpidQueue& other);
    ~QpidQueue();
    QpidQueue& operator=(const QpidQueue& other);
    bool operator==(const QpidQueue& other);

private:
    virtual std::string getQueueName();
    virtual const cms::CMSProperties& getCMSProperties();
    virtual bool equals(const cms::Destination& other);
    virtual void copy(const cms::Destination& source);
    virtual cms::Destination* clone();
    virtual cms::Destination::DestinationType getDestinationType();
};
}
}

#endif // QPID_CMSIMPL_QPIDQUEUE_H