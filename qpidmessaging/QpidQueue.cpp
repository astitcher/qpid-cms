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

#include "QpidQueue.h"

#include "QpidExceptions.h"

namespace qpid {
namespace cmsimpl {

QpidQueue::QpidQueue(const std::string& queueName) :
    QpidDestination(queueName),
    queueName_(queueName)
{
}

QpidQueue::~QpidQueue()
{
}

std::string QpidQueue::getQueueName() const
{
    return queueName_;
}

const cms::CMSProperties& QpidQueue::getCMSProperties() const
{
    throw NotImplementedYet();
}

bool QpidQueue::equals(const cms::Destination& other) const
{
    throw NotImplementedYet();
}

void QpidQueue::copy(const cms::Destination& source)
{
    throw NotImplementedYet();
}

cms::Destination* QpidQueue::clone() const
{
    return new QpidQueue(queueName_);
}

cms::Destination::DestinationType QpidQueue::getDestinationType() const
{
    return cms::Destination::QUEUE;
}

}
}
