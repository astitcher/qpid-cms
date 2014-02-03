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

#include "QpidConnection.h"

#include "QpidExceptions.h"

namespace qpid {
namespace cmsimpl {

QpidConnection::QpidConnection()
{

}

QpidConnection::QpidConnection(const QpidConnection& other)
{

}

QpidConnection::~QpidConnection()
{

}

QpidConnection& QpidConnection::operator=(const QpidConnection& other)
{
    throw NotImplementedYet();
}

bool QpidConnection::operator==(const QpidConnection& other)
{
    throw NotImplementedYet();
}

cms::MessageTransformer* QpidConnection::getMessageTransformer()
{
    throw NotImplementedYet();
}

void QpidConnection::setMessageTransformer(cms::MessageTransformer* transformer)
{

}

void QpidConnection::setExceptionListener(cms::ExceptionListener* listener)
{

}

cms::ExceptionListener* QpidConnection::getExceptionListener()
{
    throw NotImplementedYet();
}

void QpidConnection::setClientID(const std::string& clientID)
{

}

std::string QpidConnection::getClientID()
{
    throw NotImplementedYet();
}

cms::Session* QpidConnection::createSession(cms::Session::AcknowledgeMode ackMode)
{
    throw NotImplementedYet();
}

cms::Session* QpidConnection::createSession()
{
    throw NotImplementedYet();
}

const cms::ConnectionMetaData* QpidConnection::getMetaData()
{
    throw NotImplementedYet();
}

void QpidConnection::close()
{

}

void QpidConnection::start()
{

}

void QpidConnection::stop()
{

}

}
}