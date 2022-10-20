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

#include <tencentcloud/tcss/v20201101/model/VirusTendencyInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

VirusTendencyInfo::VirusTendencyInfo() :
    m_dateHasBeenSet(false),
    m_pendingEventCountHasBeenSet(false),
    m_riskContainerCountHasBeenSet(false),
    m_eventCountHasBeenSet(false),
    m_isolateEventCountHasBeenSet(false)
{
}

CoreInternalOutcome VirusTendencyInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Date") && !value["Date"].IsNull())
    {
        if (!value["Date"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VirusTendencyInfo.Date` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_date = string(value["Date"].GetString());
        m_dateHasBeenSet = true;
    }

    if (value.HasMember("PendingEventCount") && !value["PendingEventCount"].IsNull())
    {
        if (!value["PendingEventCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VirusTendencyInfo.PendingEventCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_pendingEventCount = value["PendingEventCount"].GetUint64();
        m_pendingEventCountHasBeenSet = true;
    }

    if (value.HasMember("RiskContainerCount") && !value["RiskContainerCount"].IsNull())
    {
        if (!value["RiskContainerCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VirusTendencyInfo.RiskContainerCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_riskContainerCount = value["RiskContainerCount"].GetUint64();
        m_riskContainerCountHasBeenSet = true;
    }

    if (value.HasMember("EventCount") && !value["EventCount"].IsNull())
    {
        if (!value["EventCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VirusTendencyInfo.EventCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_eventCount = value["EventCount"].GetUint64();
        m_eventCountHasBeenSet = true;
    }

    if (value.HasMember("IsolateEventCount") && !value["IsolateEventCount"].IsNull())
    {
        if (!value["IsolateEventCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VirusTendencyInfo.IsolateEventCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isolateEventCount = value["IsolateEventCount"].GetUint64();
        m_isolateEventCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VirusTendencyInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Date";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_date.c_str(), allocator).Move(), allocator);
    }

    if (m_pendingEventCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PendingEventCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pendingEventCount, allocator);
    }

    if (m_riskContainerCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskContainerCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskContainerCount, allocator);
    }

    if (m_eventCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eventCount, allocator);
    }

    if (m_isolateEventCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsolateEventCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isolateEventCount, allocator);
    }

}


string VirusTendencyInfo::GetDate() const
{
    return m_date;
}

void VirusTendencyInfo::SetDate(const string& _date)
{
    m_date = _date;
    m_dateHasBeenSet = true;
}

bool VirusTendencyInfo::DateHasBeenSet() const
{
    return m_dateHasBeenSet;
}

uint64_t VirusTendencyInfo::GetPendingEventCount() const
{
    return m_pendingEventCount;
}

void VirusTendencyInfo::SetPendingEventCount(const uint64_t& _pendingEventCount)
{
    m_pendingEventCount = _pendingEventCount;
    m_pendingEventCountHasBeenSet = true;
}

bool VirusTendencyInfo::PendingEventCountHasBeenSet() const
{
    return m_pendingEventCountHasBeenSet;
}

uint64_t VirusTendencyInfo::GetRiskContainerCount() const
{
    return m_riskContainerCount;
}

void VirusTendencyInfo::SetRiskContainerCount(const uint64_t& _riskContainerCount)
{
    m_riskContainerCount = _riskContainerCount;
    m_riskContainerCountHasBeenSet = true;
}

bool VirusTendencyInfo::RiskContainerCountHasBeenSet() const
{
    return m_riskContainerCountHasBeenSet;
}

uint64_t VirusTendencyInfo::GetEventCount() const
{
    return m_eventCount;
}

void VirusTendencyInfo::SetEventCount(const uint64_t& _eventCount)
{
    m_eventCount = _eventCount;
    m_eventCountHasBeenSet = true;
}

bool VirusTendencyInfo::EventCountHasBeenSet() const
{
    return m_eventCountHasBeenSet;
}

uint64_t VirusTendencyInfo::GetIsolateEventCount() const
{
    return m_isolateEventCount;
}

void VirusTendencyInfo::SetIsolateEventCount(const uint64_t& _isolateEventCount)
{
    m_isolateEventCount = _isolateEventCount;
    m_isolateEventCountHasBeenSet = true;
}

bool VirusTendencyInfo::IsolateEventCountHasBeenSet() const
{
    return m_isolateEventCountHasBeenSet;
}

