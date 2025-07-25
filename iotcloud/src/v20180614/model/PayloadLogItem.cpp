/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <tencentcloud/iotcloud/v20180614/model/PayloadLogItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotcloud::V20180614::Model;
using namespace std;

PayloadLogItem::PayloadLogItem() :
    m_uinHasBeenSet(false),
    m_productIDHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_srcTypeHasBeenSet(false),
    m_srcNameHasBeenSet(false),
    m_topicHasBeenSet(false),
    m_payloadFmtTypeHasBeenSet(false),
    m_payloadHasBeenSet(false),
    m_requestIDHasBeenSet(false),
    m_dateTimeHasBeenSet(false)
{
}

CoreInternalOutcome PayloadLogItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayloadLogItem.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("ProductID") && !value["ProductID"].IsNull())
    {
        if (!value["ProductID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayloadLogItem.ProductID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productID = string(value["ProductID"].GetString());
        m_productIDHasBeenSet = true;
    }

    if (value.HasMember("DeviceName") && !value["DeviceName"].IsNull())
    {
        if (!value["DeviceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayloadLogItem.DeviceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceName = string(value["DeviceName"].GetString());
        m_deviceNameHasBeenSet = true;
    }

    if (value.HasMember("SrcType") && !value["SrcType"].IsNull())
    {
        if (!value["SrcType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayloadLogItem.SrcType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcType = string(value["SrcType"].GetString());
        m_srcTypeHasBeenSet = true;
    }

    if (value.HasMember("SrcName") && !value["SrcName"].IsNull())
    {
        if (!value["SrcName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayloadLogItem.SrcName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcName = string(value["SrcName"].GetString());
        m_srcNameHasBeenSet = true;
    }

    if (value.HasMember("Topic") && !value["Topic"].IsNull())
    {
        if (!value["Topic"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayloadLogItem.Topic` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topic = string(value["Topic"].GetString());
        m_topicHasBeenSet = true;
    }

    if (value.HasMember("PayloadFmtType") && !value["PayloadFmtType"].IsNull())
    {
        if (!value["PayloadFmtType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayloadLogItem.PayloadFmtType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payloadFmtType = string(value["PayloadFmtType"].GetString());
        m_payloadFmtTypeHasBeenSet = true;
    }

    if (value.HasMember("Payload") && !value["Payload"].IsNull())
    {
        if (!value["Payload"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayloadLogItem.Payload` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payload = string(value["Payload"].GetString());
        m_payloadHasBeenSet = true;
    }

    if (value.HasMember("RequestID") && !value["RequestID"].IsNull())
    {
        if (!value["RequestID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayloadLogItem.RequestID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_requestID = string(value["RequestID"].GetString());
        m_requestIDHasBeenSet = true;
    }

    if (value.HasMember("DateTime") && !value["DateTime"].IsNull())
    {
        if (!value["DateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayloadLogItem.DateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dateTime = string(value["DateTime"].GetString());
        m_dateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PayloadLogItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_productIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productID.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_srcTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_srcType.c_str(), allocator).Move(), allocator);
    }

    if (m_srcNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_srcName.c_str(), allocator).Move(), allocator);
    }

    if (m_topicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Topic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topic.c_str(), allocator).Move(), allocator);
    }

    if (m_payloadFmtTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayloadFmtType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payloadFmtType.c_str(), allocator).Move(), allocator);
    }

    if (m_payloadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Payload";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payload.c_str(), allocator).Move(), allocator);
    }

    if (m_requestIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_requestID.c_str(), allocator).Move(), allocator);
    }

    if (m_dateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dateTime.c_str(), allocator).Move(), allocator);
    }

}


string PayloadLogItem::GetUin() const
{
    return m_uin;
}

void PayloadLogItem::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool PayloadLogItem::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string PayloadLogItem::GetProductID() const
{
    return m_productID;
}

void PayloadLogItem::SetProductID(const string& _productID)
{
    m_productID = _productID;
    m_productIDHasBeenSet = true;
}

bool PayloadLogItem::ProductIDHasBeenSet() const
{
    return m_productIDHasBeenSet;
}

string PayloadLogItem::GetDeviceName() const
{
    return m_deviceName;
}

void PayloadLogItem::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool PayloadLogItem::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

string PayloadLogItem::GetSrcType() const
{
    return m_srcType;
}

void PayloadLogItem::SetSrcType(const string& _srcType)
{
    m_srcType = _srcType;
    m_srcTypeHasBeenSet = true;
}

bool PayloadLogItem::SrcTypeHasBeenSet() const
{
    return m_srcTypeHasBeenSet;
}

string PayloadLogItem::GetSrcName() const
{
    return m_srcName;
}

void PayloadLogItem::SetSrcName(const string& _srcName)
{
    m_srcName = _srcName;
    m_srcNameHasBeenSet = true;
}

bool PayloadLogItem::SrcNameHasBeenSet() const
{
    return m_srcNameHasBeenSet;
}

string PayloadLogItem::GetTopic() const
{
    return m_topic;
}

void PayloadLogItem::SetTopic(const string& _topic)
{
    m_topic = _topic;
    m_topicHasBeenSet = true;
}

bool PayloadLogItem::TopicHasBeenSet() const
{
    return m_topicHasBeenSet;
}

string PayloadLogItem::GetPayloadFmtType() const
{
    return m_payloadFmtType;
}

void PayloadLogItem::SetPayloadFmtType(const string& _payloadFmtType)
{
    m_payloadFmtType = _payloadFmtType;
    m_payloadFmtTypeHasBeenSet = true;
}

bool PayloadLogItem::PayloadFmtTypeHasBeenSet() const
{
    return m_payloadFmtTypeHasBeenSet;
}

string PayloadLogItem::GetPayload() const
{
    return m_payload;
}

void PayloadLogItem::SetPayload(const string& _payload)
{
    m_payload = _payload;
    m_payloadHasBeenSet = true;
}

bool PayloadLogItem::PayloadHasBeenSet() const
{
    return m_payloadHasBeenSet;
}

string PayloadLogItem::GetRequestID() const
{
    return m_requestID;
}

void PayloadLogItem::SetRequestID(const string& _requestID)
{
    m_requestID = _requestID;
    m_requestIDHasBeenSet = true;
}

bool PayloadLogItem::RequestIDHasBeenSet() const
{
    return m_requestIDHasBeenSet;
}

string PayloadLogItem::GetDateTime() const
{
    return m_dateTime;
}

void PayloadLogItem::SetDateTime(const string& _dateTime)
{
    m_dateTime = _dateTime;
    m_dateTimeHasBeenSet = true;
}

bool PayloadLogItem::DateTimeHasBeenSet() const
{
    return m_dateTimeHasBeenSet;
}

