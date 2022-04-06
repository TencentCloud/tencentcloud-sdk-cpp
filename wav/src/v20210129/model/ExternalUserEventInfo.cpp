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

#include <tencentcloud/wav/v20210129/model/ExternalUserEventInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wav::V20210129::Model;
using namespace std;

ExternalUserEventInfo::ExternalUserEventInfo() :
    m_eventCodeHasBeenSet(false),
    m_externalUserIdHasBeenSet(false),
    m_salesIdHasBeenSet(false),
    m_eventTimeHasBeenSet(false)
{
}

CoreInternalOutcome ExternalUserEventInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EventCode") && !value["EventCode"].IsNull())
    {
        if (!value["EventCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExternalUserEventInfo.EventCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventCode = string(value["EventCode"].GetString());
        m_eventCodeHasBeenSet = true;
    }

    if (value.HasMember("ExternalUserId") && !value["ExternalUserId"].IsNull())
    {
        if (!value["ExternalUserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExternalUserEventInfo.ExternalUserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_externalUserId = string(value["ExternalUserId"].GetString());
        m_externalUserIdHasBeenSet = true;
    }

    if (value.HasMember("SalesId") && !value["SalesId"].IsNull())
    {
        if (!value["SalesId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExternalUserEventInfo.SalesId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_salesId = string(value["SalesId"].GetString());
        m_salesIdHasBeenSet = true;
    }

    if (value.HasMember("EventTime") && !value["EventTime"].IsNull())
    {
        if (!value["EventTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ExternalUserEventInfo.EventTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_eventTime = value["EventTime"].GetUint64();
        m_eventTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExternalUserEventInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_eventCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventCode.c_str(), allocator).Move(), allocator);
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
        value.AddMember(iKey, rapidjson::Value(m_salesId.c_str(), allocator).Move(), allocator);
    }

    if (m_eventTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eventTime, allocator);
    }

}


string ExternalUserEventInfo::GetEventCode() const
{
    return m_eventCode;
}

void ExternalUserEventInfo::SetEventCode(const string& _eventCode)
{
    m_eventCode = _eventCode;
    m_eventCodeHasBeenSet = true;
}

bool ExternalUserEventInfo::EventCodeHasBeenSet() const
{
    return m_eventCodeHasBeenSet;
}

string ExternalUserEventInfo::GetExternalUserId() const
{
    return m_externalUserId;
}

void ExternalUserEventInfo::SetExternalUserId(const string& _externalUserId)
{
    m_externalUserId = _externalUserId;
    m_externalUserIdHasBeenSet = true;
}

bool ExternalUserEventInfo::ExternalUserIdHasBeenSet() const
{
    return m_externalUserIdHasBeenSet;
}

string ExternalUserEventInfo::GetSalesId() const
{
    return m_salesId;
}

void ExternalUserEventInfo::SetSalesId(const string& _salesId)
{
    m_salesId = _salesId;
    m_salesIdHasBeenSet = true;
}

bool ExternalUserEventInfo::SalesIdHasBeenSet() const
{
    return m_salesIdHasBeenSet;
}

uint64_t ExternalUserEventInfo::GetEventTime() const
{
    return m_eventTime;
}

void ExternalUserEventInfo::SetEventTime(const uint64_t& _eventTime)
{
    m_eventTime = _eventTime;
    m_eventTimeHasBeenSet = true;
}

bool ExternalUserEventInfo::EventTimeHasBeenSet() const
{
    return m_eventTimeHasBeenSet;
}

