/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#include <tencentcloud/wav/v20210129/model/CustomerActionEventDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wav::V20210129::Model;
using namespace std;

CustomerActionEventDetail::CustomerActionEventDetail() :
    m_eventCodeHasBeenSet(false),
    m_eventTypeHasBeenSet(false),
    m_eventSourceHasBeenSet(false),
    m_externalUserIdHasBeenSet(false),
    m_salesIdHasBeenSet(false),
    m_materialTypeHasBeenSet(false),
    m_materialIdHasBeenSet(false),
    m_eventTimeHasBeenSet(false)
{
}

CoreInternalOutcome CustomerActionEventDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EventCode") && !value["EventCode"].IsNull())
    {
        if (!value["EventCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerActionEventDetail.EventCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventCode = string(value["EventCode"].GetString());
        m_eventCodeHasBeenSet = true;
    }

    if (value.HasMember("EventType") && !value["EventType"].IsNull())
    {
        if (!value["EventType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerActionEventDetail.EventType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_eventType = value["EventType"].GetInt64();
        m_eventTypeHasBeenSet = true;
    }

    if (value.HasMember("EventSource") && !value["EventSource"].IsNull())
    {
        if (!value["EventSource"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerActionEventDetail.EventSource` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_eventSource = value["EventSource"].GetInt64();
        m_eventSourceHasBeenSet = true;
    }

    if (value.HasMember("ExternalUserId") && !value["ExternalUserId"].IsNull())
    {
        if (!value["ExternalUserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerActionEventDetail.ExternalUserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_externalUserId = string(value["ExternalUserId"].GetString());
        m_externalUserIdHasBeenSet = true;
    }

    if (value.HasMember("SalesId") && !value["SalesId"].IsNull())
    {
        if (!value["SalesId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerActionEventDetail.SalesId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_salesId = value["SalesId"].GetUint64();
        m_salesIdHasBeenSet = true;
    }

    if (value.HasMember("MaterialType") && !value["MaterialType"].IsNull())
    {
        if (!value["MaterialType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerActionEventDetail.MaterialType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_materialType = value["MaterialType"].GetInt64();
        m_materialTypeHasBeenSet = true;
    }

    if (value.HasMember("MaterialId") && !value["MaterialId"].IsNull())
    {
        if (!value["MaterialId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerActionEventDetail.MaterialId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_materialId = value["MaterialId"].GetUint64();
        m_materialIdHasBeenSet = true;
    }

    if (value.HasMember("EventTime") && !value["EventTime"].IsNull())
    {
        if (!value["EventTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerActionEventDetail.EventTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_eventTime = value["EventTime"].GetUint64();
        m_eventTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CustomerActionEventDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_eventCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventCode.c_str(), allocator).Move(), allocator);
    }

    if (m_eventTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eventType, allocator);
    }

    if (m_eventSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eventSource, allocator);
    }

    if (m_externalUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExternalUserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_externalUserId.c_str(), allocator).Move(), allocator);
    }

    if (m_salesIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SalesId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_salesId, allocator);
    }

    if (m_materialTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaterialType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_materialType, allocator);
    }

    if (m_materialIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaterialId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_materialId, allocator);
    }

    if (m_eventTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eventTime, allocator);
    }

}


string CustomerActionEventDetail::GetEventCode() const
{
    return m_eventCode;
}

void CustomerActionEventDetail::SetEventCode(const string& _eventCode)
{
    m_eventCode = _eventCode;
    m_eventCodeHasBeenSet = true;
}

bool CustomerActionEventDetail::EventCodeHasBeenSet() const
{
    return m_eventCodeHasBeenSet;
}

int64_t CustomerActionEventDetail::GetEventType() const
{
    return m_eventType;
}

void CustomerActionEventDetail::SetEventType(const int64_t& _eventType)
{
    m_eventType = _eventType;
    m_eventTypeHasBeenSet = true;
}

bool CustomerActionEventDetail::EventTypeHasBeenSet() const
{
    return m_eventTypeHasBeenSet;
}

int64_t CustomerActionEventDetail::GetEventSource() const
{
    return m_eventSource;
}

void CustomerActionEventDetail::SetEventSource(const int64_t& _eventSource)
{
    m_eventSource = _eventSource;
    m_eventSourceHasBeenSet = true;
}

bool CustomerActionEventDetail::EventSourceHasBeenSet() const
{
    return m_eventSourceHasBeenSet;
}

string CustomerActionEventDetail::GetExternalUserId() const
{
    return m_externalUserId;
}

void CustomerActionEventDetail::SetExternalUserId(const string& _externalUserId)
{
    m_externalUserId = _externalUserId;
    m_externalUserIdHasBeenSet = true;
}

bool CustomerActionEventDetail::ExternalUserIdHasBeenSet() const
{
    return m_externalUserIdHasBeenSet;
}

uint64_t CustomerActionEventDetail::GetSalesId() const
{
    return m_salesId;
}

void CustomerActionEventDetail::SetSalesId(const uint64_t& _salesId)
{
    m_salesId = _salesId;
    m_salesIdHasBeenSet = true;
}

bool CustomerActionEventDetail::SalesIdHasBeenSet() const
{
    return m_salesIdHasBeenSet;
}

int64_t CustomerActionEventDetail::GetMaterialType() const
{
    return m_materialType;
}

void CustomerActionEventDetail::SetMaterialType(const int64_t& _materialType)
{
    m_materialType = _materialType;
    m_materialTypeHasBeenSet = true;
}

bool CustomerActionEventDetail::MaterialTypeHasBeenSet() const
{
    return m_materialTypeHasBeenSet;
}

uint64_t CustomerActionEventDetail::GetMaterialId() const
{
    return m_materialId;
}

void CustomerActionEventDetail::SetMaterialId(const uint64_t& _materialId)
{
    m_materialId = _materialId;
    m_materialIdHasBeenSet = true;
}

bool CustomerActionEventDetail::MaterialIdHasBeenSet() const
{
    return m_materialIdHasBeenSet;
}

uint64_t CustomerActionEventDetail::GetEventTime() const
{
    return m_eventTime;
}

void CustomerActionEventDetail::SetEventTime(const uint64_t& _eventTime)
{
    m_eventTime = _eventTime;
    m_eventTimeHasBeenSet = true;
}

bool CustomerActionEventDetail::EventTimeHasBeenSet() const
{
    return m_eventTimeHasBeenSet;
}

