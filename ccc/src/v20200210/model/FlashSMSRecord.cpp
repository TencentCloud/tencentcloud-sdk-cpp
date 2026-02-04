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

#include <tencentcloud/ccc/v20200210/model/FlashSMSRecord.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

FlashSMSRecord::FlashSMSRecord() :
    m_sessionIdHasBeenSet(false),
    m_deliveryNumberHasBeenSet(false),
    m_servingNumberHasBeenSet(false),
    m_deliveryStatusHasBeenSet(false),
    m_deliveryMessageHasBeenSet(false),
    m_deliveryTimestampHasBeenSet(false),
    m_arriveTimestampHasBeenSet(false)
{
}

CoreInternalOutcome FlashSMSRecord::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SessionId") && !value["SessionId"].IsNull())
    {
        if (!value["SessionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlashSMSRecord.SessionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionId = string(value["SessionId"].GetString());
        m_sessionIdHasBeenSet = true;
    }

    if (value.HasMember("DeliveryNumber") && !value["DeliveryNumber"].IsNull())
    {
        if (!value["DeliveryNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlashSMSRecord.DeliveryNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deliveryNumber = string(value["DeliveryNumber"].GetString());
        m_deliveryNumberHasBeenSet = true;
    }

    if (value.HasMember("ServingNumber") && !value["ServingNumber"].IsNull())
    {
        if (!value["ServingNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlashSMSRecord.ServingNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_servingNumber = string(value["ServingNumber"].GetString());
        m_servingNumberHasBeenSet = true;
    }

    if (value.HasMember("DeliveryStatus") && !value["DeliveryStatus"].IsNull())
    {
        if (!value["DeliveryStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FlashSMSRecord.DeliveryStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_deliveryStatus = value["DeliveryStatus"].GetInt64();
        m_deliveryStatusHasBeenSet = true;
    }

    if (value.HasMember("DeliveryMessage") && !value["DeliveryMessage"].IsNull())
    {
        if (!value["DeliveryMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlashSMSRecord.DeliveryMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deliveryMessage = string(value["DeliveryMessage"].GetString());
        m_deliveryMessageHasBeenSet = true;
    }

    if (value.HasMember("DeliveryTimestamp") && !value["DeliveryTimestamp"].IsNull())
    {
        if (!value["DeliveryTimestamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FlashSMSRecord.DeliveryTimestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_deliveryTimestamp = value["DeliveryTimestamp"].GetInt64();
        m_deliveryTimestampHasBeenSet = true;
    }

    if (value.HasMember("ArriveTimestamp") && !value["ArriveTimestamp"].IsNull())
    {
        if (!value["ArriveTimestamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FlashSMSRecord.ArriveTimestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_arriveTimestamp = value["ArriveTimestamp"].GetInt64();
        m_arriveTimestampHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FlashSMSRecord::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sessionId.c_str(), allocator).Move(), allocator);
    }

    if (m_deliveryNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeliveryNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deliveryNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_servingNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServingNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_servingNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_deliveryStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeliveryStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deliveryStatus, allocator);
    }

    if (m_deliveryMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeliveryMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deliveryMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_deliveryTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeliveryTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deliveryTimestamp, allocator);
    }

    if (m_arriveTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ArriveTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_arriveTimestamp, allocator);
    }

}


string FlashSMSRecord::GetSessionId() const
{
    return m_sessionId;
}

void FlashSMSRecord::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool FlashSMSRecord::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

string FlashSMSRecord::GetDeliveryNumber() const
{
    return m_deliveryNumber;
}

void FlashSMSRecord::SetDeliveryNumber(const string& _deliveryNumber)
{
    m_deliveryNumber = _deliveryNumber;
    m_deliveryNumberHasBeenSet = true;
}

bool FlashSMSRecord::DeliveryNumberHasBeenSet() const
{
    return m_deliveryNumberHasBeenSet;
}

string FlashSMSRecord::GetServingNumber() const
{
    return m_servingNumber;
}

void FlashSMSRecord::SetServingNumber(const string& _servingNumber)
{
    m_servingNumber = _servingNumber;
    m_servingNumberHasBeenSet = true;
}

bool FlashSMSRecord::ServingNumberHasBeenSet() const
{
    return m_servingNumberHasBeenSet;
}

int64_t FlashSMSRecord::GetDeliveryStatus() const
{
    return m_deliveryStatus;
}

void FlashSMSRecord::SetDeliveryStatus(const int64_t& _deliveryStatus)
{
    m_deliveryStatus = _deliveryStatus;
    m_deliveryStatusHasBeenSet = true;
}

bool FlashSMSRecord::DeliveryStatusHasBeenSet() const
{
    return m_deliveryStatusHasBeenSet;
}

string FlashSMSRecord::GetDeliveryMessage() const
{
    return m_deliveryMessage;
}

void FlashSMSRecord::SetDeliveryMessage(const string& _deliveryMessage)
{
    m_deliveryMessage = _deliveryMessage;
    m_deliveryMessageHasBeenSet = true;
}

bool FlashSMSRecord::DeliveryMessageHasBeenSet() const
{
    return m_deliveryMessageHasBeenSet;
}

int64_t FlashSMSRecord::GetDeliveryTimestamp() const
{
    return m_deliveryTimestamp;
}

void FlashSMSRecord::SetDeliveryTimestamp(const int64_t& _deliveryTimestamp)
{
    m_deliveryTimestamp = _deliveryTimestamp;
    m_deliveryTimestampHasBeenSet = true;
}

bool FlashSMSRecord::DeliveryTimestampHasBeenSet() const
{
    return m_deliveryTimestampHasBeenSet;
}

int64_t FlashSMSRecord::GetArriveTimestamp() const
{
    return m_arriveTimestamp;
}

void FlashSMSRecord::SetArriveTimestamp(const int64_t& _arriveTimestamp)
{
    m_arriveTimestamp = _arriveTimestamp;
    m_arriveTimestampHasBeenSet = true;
}

bool FlashSMSRecord::ArriveTimestampHasBeenSet() const
{
    return m_arriveTimestampHasBeenSet;
}

