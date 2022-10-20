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

#include <tencentcloud/tcss/v20201101/model/EscapeEventTendencyInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

EscapeEventTendencyInfo::EscapeEventTendencyInfo() :
    m_riskContainerEventCountHasBeenSet(false),
    m_processPrivilegeEventCountHasBeenSet(false),
    m_containerEscapeEventCountHasBeenSet(false),
    m_dateHasBeenSet(false)
{
}

CoreInternalOutcome EscapeEventTendencyInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RiskContainerEventCount") && !value["RiskContainerEventCount"].IsNull())
    {
        if (!value["RiskContainerEventCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EscapeEventTendencyInfo.RiskContainerEventCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_riskContainerEventCount = value["RiskContainerEventCount"].GetInt64();
        m_riskContainerEventCountHasBeenSet = true;
    }

    if (value.HasMember("ProcessPrivilegeEventCount") && !value["ProcessPrivilegeEventCount"].IsNull())
    {
        if (!value["ProcessPrivilegeEventCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EscapeEventTendencyInfo.ProcessPrivilegeEventCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_processPrivilegeEventCount = value["ProcessPrivilegeEventCount"].GetInt64();
        m_processPrivilegeEventCountHasBeenSet = true;
    }

    if (value.HasMember("ContainerEscapeEventCount") && !value["ContainerEscapeEventCount"].IsNull())
    {
        if (!value["ContainerEscapeEventCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EscapeEventTendencyInfo.ContainerEscapeEventCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_containerEscapeEventCount = value["ContainerEscapeEventCount"].GetInt64();
        m_containerEscapeEventCountHasBeenSet = true;
    }

    if (value.HasMember("Date") && !value["Date"].IsNull())
    {
        if (!value["Date"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EscapeEventTendencyInfo.Date` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_date = string(value["Date"].GetString());
        m_dateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EscapeEventTendencyInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_riskContainerEventCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskContainerEventCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskContainerEventCount, allocator);
    }

    if (m_processPrivilegeEventCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessPrivilegeEventCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_processPrivilegeEventCount, allocator);
    }

    if (m_containerEscapeEventCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerEscapeEventCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_containerEscapeEventCount, allocator);
    }

    if (m_dateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Date";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_date.c_str(), allocator).Move(), allocator);
    }

}


int64_t EscapeEventTendencyInfo::GetRiskContainerEventCount() const
{
    return m_riskContainerEventCount;
}

void EscapeEventTendencyInfo::SetRiskContainerEventCount(const int64_t& _riskContainerEventCount)
{
    m_riskContainerEventCount = _riskContainerEventCount;
    m_riskContainerEventCountHasBeenSet = true;
}

bool EscapeEventTendencyInfo::RiskContainerEventCountHasBeenSet() const
{
    return m_riskContainerEventCountHasBeenSet;
}

int64_t EscapeEventTendencyInfo::GetProcessPrivilegeEventCount() const
{
    return m_processPrivilegeEventCount;
}

void EscapeEventTendencyInfo::SetProcessPrivilegeEventCount(const int64_t& _processPrivilegeEventCount)
{
    m_processPrivilegeEventCount = _processPrivilegeEventCount;
    m_processPrivilegeEventCountHasBeenSet = true;
}

bool EscapeEventTendencyInfo::ProcessPrivilegeEventCountHasBeenSet() const
{
    return m_processPrivilegeEventCountHasBeenSet;
}

int64_t EscapeEventTendencyInfo::GetContainerEscapeEventCount() const
{
    return m_containerEscapeEventCount;
}

void EscapeEventTendencyInfo::SetContainerEscapeEventCount(const int64_t& _containerEscapeEventCount)
{
    m_containerEscapeEventCount = _containerEscapeEventCount;
    m_containerEscapeEventCountHasBeenSet = true;
}

bool EscapeEventTendencyInfo::ContainerEscapeEventCountHasBeenSet() const
{
    return m_containerEscapeEventCountHasBeenSet;
}

string EscapeEventTendencyInfo::GetDate() const
{
    return m_date;
}

void EscapeEventTendencyInfo::SetDate(const string& _date)
{
    m_date = _date;
    m_dateHasBeenSet = true;
}

bool EscapeEventTendencyInfo::DateHasBeenSet() const
{
    return m_dateHasBeenSet;
}

