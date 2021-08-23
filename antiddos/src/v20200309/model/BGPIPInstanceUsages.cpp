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

#include <tencentcloud/antiddos/v20200309/model/BGPIPInstanceUsages.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Antiddos::V20200309::Model;
using namespace std;

BGPIPInstanceUsages::BGPIPInstanceUsages() :
    m_portRulesUsageHasBeenSet(false),
    m_domainRulesUsageHasBeenSet(false),
    m_last7DayAttackCountHasBeenSet(false)
{
}

CoreInternalOutcome BGPIPInstanceUsages::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PortRulesUsage") && !value["PortRulesUsage"].IsNull())
    {
        if (!value["PortRulesUsage"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BGPIPInstanceUsages.PortRulesUsage` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_portRulesUsage = value["PortRulesUsage"].GetUint64();
        m_portRulesUsageHasBeenSet = true;
    }

    if (value.HasMember("DomainRulesUsage") && !value["DomainRulesUsage"].IsNull())
    {
        if (!value["DomainRulesUsage"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BGPIPInstanceUsages.DomainRulesUsage` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_domainRulesUsage = value["DomainRulesUsage"].GetUint64();
        m_domainRulesUsageHasBeenSet = true;
    }

    if (value.HasMember("Last7DayAttackCount") && !value["Last7DayAttackCount"].IsNull())
    {
        if (!value["Last7DayAttackCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BGPIPInstanceUsages.Last7DayAttackCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_last7DayAttackCount = value["Last7DayAttackCount"].GetUint64();
        m_last7DayAttackCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BGPIPInstanceUsages::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_portRulesUsageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PortRulesUsage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_portRulesUsage, allocator);
    }

    if (m_domainRulesUsageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainRulesUsage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_domainRulesUsage, allocator);
    }

    if (m_last7DayAttackCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Last7DayAttackCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_last7DayAttackCount, allocator);
    }

}


uint64_t BGPIPInstanceUsages::GetPortRulesUsage() const
{
    return m_portRulesUsage;
}

void BGPIPInstanceUsages::SetPortRulesUsage(const uint64_t& _portRulesUsage)
{
    m_portRulesUsage = _portRulesUsage;
    m_portRulesUsageHasBeenSet = true;
}

bool BGPIPInstanceUsages::PortRulesUsageHasBeenSet() const
{
    return m_portRulesUsageHasBeenSet;
}

uint64_t BGPIPInstanceUsages::GetDomainRulesUsage() const
{
    return m_domainRulesUsage;
}

void BGPIPInstanceUsages::SetDomainRulesUsage(const uint64_t& _domainRulesUsage)
{
    m_domainRulesUsage = _domainRulesUsage;
    m_domainRulesUsageHasBeenSet = true;
}

bool BGPIPInstanceUsages::DomainRulesUsageHasBeenSet() const
{
    return m_domainRulesUsageHasBeenSet;
}

uint64_t BGPIPInstanceUsages::GetLast7DayAttackCount() const
{
    return m_last7DayAttackCount;
}

void BGPIPInstanceUsages::SetLast7DayAttackCount(const uint64_t& _last7DayAttackCount)
{
    m_last7DayAttackCount = _last7DayAttackCount;
    m_last7DayAttackCountHasBeenSet = true;
}

bool BGPIPInstanceUsages::Last7DayAttackCountHasBeenSet() const
{
    return m_last7DayAttackCountHasBeenSet;
}

