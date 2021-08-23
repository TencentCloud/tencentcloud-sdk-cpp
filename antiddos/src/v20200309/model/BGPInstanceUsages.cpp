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

#include <tencentcloud/antiddos/v20200309/model/BGPInstanceUsages.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Antiddos::V20200309::Model;
using namespace std;

BGPInstanceUsages::BGPInstanceUsages() :
    m_protectCountUsageHasBeenSet(false),
    m_protectIPNumberUsageHasBeenSet(false),
    m_last7DayAttackCountHasBeenSet(false)
{
}

CoreInternalOutcome BGPInstanceUsages::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProtectCountUsage") && !value["ProtectCountUsage"].IsNull())
    {
        if (!value["ProtectCountUsage"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BGPInstanceUsages.ProtectCountUsage` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_protectCountUsage = value["ProtectCountUsage"].GetUint64();
        m_protectCountUsageHasBeenSet = true;
    }

    if (value.HasMember("ProtectIPNumberUsage") && !value["ProtectIPNumberUsage"].IsNull())
    {
        if (!value["ProtectIPNumberUsage"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BGPInstanceUsages.ProtectIPNumberUsage` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_protectIPNumberUsage = value["ProtectIPNumberUsage"].GetUint64();
        m_protectIPNumberUsageHasBeenSet = true;
    }

    if (value.HasMember("Last7DayAttackCount") && !value["Last7DayAttackCount"].IsNull())
    {
        if (!value["Last7DayAttackCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BGPInstanceUsages.Last7DayAttackCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_last7DayAttackCount = value["Last7DayAttackCount"].GetUint64();
        m_last7DayAttackCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BGPInstanceUsages::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_protectCountUsageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectCountUsage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_protectCountUsage, allocator);
    }

    if (m_protectIPNumberUsageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectIPNumberUsage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_protectIPNumberUsage, allocator);
    }

    if (m_last7DayAttackCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Last7DayAttackCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_last7DayAttackCount, allocator);
    }

}


uint64_t BGPInstanceUsages::GetProtectCountUsage() const
{
    return m_protectCountUsage;
}

void BGPInstanceUsages::SetProtectCountUsage(const uint64_t& _protectCountUsage)
{
    m_protectCountUsage = _protectCountUsage;
    m_protectCountUsageHasBeenSet = true;
}

bool BGPInstanceUsages::ProtectCountUsageHasBeenSet() const
{
    return m_protectCountUsageHasBeenSet;
}

uint64_t BGPInstanceUsages::GetProtectIPNumberUsage() const
{
    return m_protectIPNumberUsage;
}

void BGPInstanceUsages::SetProtectIPNumberUsage(const uint64_t& _protectIPNumberUsage)
{
    m_protectIPNumberUsage = _protectIPNumberUsage;
    m_protectIPNumberUsageHasBeenSet = true;
}

bool BGPInstanceUsages::ProtectIPNumberUsageHasBeenSet() const
{
    return m_protectIPNumberUsageHasBeenSet;
}

uint64_t BGPInstanceUsages::GetLast7DayAttackCount() const
{
    return m_last7DayAttackCount;
}

void BGPInstanceUsages::SetLast7DayAttackCount(const uint64_t& _last7DayAttackCount)
{
    m_last7DayAttackCount = _last7DayAttackCount;
    m_last7DayAttackCountHasBeenSet = true;
}

bool BGPInstanceUsages::Last7DayAttackCountHasBeenSet() const
{
    return m_last7DayAttackCountHasBeenSet;
}

