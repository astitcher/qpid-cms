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

#ifndef QPID_CMSIMPL_QPIDSTREAMMESSAGE_H
#define QPID_CMSIMPL_QPIDSTREAMMESSAGE_H

#include "cms/StreamMessage.h"

namespace qpid {
namespace cmsimpl {

class QpidStreamMessage :  public cms::StreamMessage
{
public:
    QpidStreamMessage();
    QpidStreamMessage(const QpidStreamMessage& other);
    ~QpidStreamMessage();
    QpidStreamMessage& operator=(const QpidStreamMessage& other);
    bool operator==(const QpidStreamMessage& other);

private:
    virtual void reset();
    virtual void writeString(const std::string& value);
    virtual std::string readString() const;
    virtual void writeLong(long long int value);
    virtual long long int readLong() const;
    virtual void writeInt(int value);
    virtual int readInt() const;
    virtual void writeUnsignedShort(short unsigned int value);
    virtual short unsigned int readUnsignedShort() const;
    virtual void writeShort(short int value);
    virtual short int readShort() const;
    virtual void writeDouble(double value);
    virtual double readDouble() const;
    virtual void writeFloat(float value);
    virtual float readFloat() const;
    virtual void writeChar(char value);
    virtual char readChar() const;
    virtual void writeBytes(const unsigned char* value, int offset, int length);
    virtual int readBytes(unsigned char* buffer, int length) const;
    virtual void writeBytes(const std::vector< unsigned char >& value);
    virtual int readBytes(std::vector< unsigned char >& value) const;
    virtual void writeByte(unsigned char value);
    virtual unsigned char readByte() const;
    virtual void writeBoolean(bool value);
    virtual bool readBoolean() const;
    virtual cms::Message::ValueType getNextValueType() const;
    virtual void setCMSType(const std::string& type);
    virtual std::string getCMSType() const;
    virtual void setCMSTimestamp(long long int timeStamp);
    virtual long long int getCMSTimestamp() const;
    virtual void setCMSReplyTo(const cms::Destination* destination);
    virtual const cms::Destination* getCMSReplyTo() const;
    virtual void setCMSRedelivered(bool redelivered);
    virtual bool getCMSRedelivered() const;
    virtual void setCMSPriority(int priority);
    virtual int getCMSPriority() const;
    virtual void setCMSMessageID(const std::string& id);
    virtual std::string getCMSMessageID() const;
    virtual void setCMSExpiration(long long int expireTime);
    virtual long long int getCMSExpiration() const;
    virtual void setCMSDestination(const cms::Destination* destination);
    virtual const cms::Destination* getCMSDestination() const;
    virtual void setCMSDeliveryMode(int mode);
    virtual int getCMSDeliveryMode() const;
    virtual void setCMSCorrelationID(const std::string& correlationId);
    virtual std::string getCMSCorrelationID() const;
    virtual void setStringProperty(const std::string& name, const std::string& value);
    virtual void setShortProperty(const std::string& name, short int value);
    virtual void setLongProperty(const std::string& name, long long int value);
    virtual void setIntProperty(const std::string& name, int value);
    virtual void setFloatProperty(const std::string& name, float value);
    virtual void setDoubleProperty(const std::string& name, double value);
    virtual void setByteProperty(const std::string& name, unsigned char value);
    virtual void setBooleanProperty(const std::string& name, bool value);
    virtual std::string getStringProperty(const std::string& name) const;
    virtual short int getShortProperty(const std::string& name) const;
    virtual long long int getLongProperty(const std::string& name) const;
    virtual int getIntProperty(const std::string& name) const;
    virtual float getFloatProperty(const std::string& name) const;
    virtual double getDoubleProperty(const std::string& name) const;
    virtual unsigned char getByteProperty(const std::string& name) const;
    virtual bool getBooleanProperty(const std::string& name) const;
    virtual cms::Message::ValueType getPropertyValueType(const std::string& name) const;
    virtual bool propertyExists(const std::string& name) const;
    virtual std::vector< std::string > getPropertyNames() const;
    virtual void clearProperties();
    virtual void clearBody();
    virtual void acknowledge() const;
    virtual cms::Message* clone() const;
};
}
}

#endif // QPID_CMSIMPL_QPIDSTREAMMESSAGE_H
