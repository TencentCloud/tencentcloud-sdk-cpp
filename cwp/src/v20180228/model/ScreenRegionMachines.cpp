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

#include <tencentcloud/cwp/v20180228/model/ScreenRegionMachines.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

ScreenRegionMachines::ScreenRegionMachines() :
    m_regionHasBeenSet(false),
    m_regionNameHasBeenSet(false),
    m_machinesHasBeenSet(false),
    m_totalCountHasBeenSet(false),
    m_riskCntHasBeenSet(false),
    m_attackCntHasBeenSet(false),
    m_safetyCntHasBeenSet(false),
    m_unAgentOfflineCntHasBeenSet(false),
    m_ignoreCntHasBeenSet(false)
{
}

CoreInternalOutcome ScreenRegionMachines::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScreenRegionMachines.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("RegionName") && !value["RegionName"].IsNull())
    {
        if (!value["RegionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScreenRegionMachines.RegionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionName = string(value["RegionName"].GetString());
        m_regionNameHasBeenSet = true;
    }

    if (value.HasMember("Machines") && !value["Machines"].IsNull())
    {
        if (!value["Machines"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ScreenRegionMachines.Machines` is not array type"));

        const rapidjson::Value &tmpValue = value["Machines"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ScreenMachine item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_machines.push_back(item);
        }
        m_machinesHasBeenSet = true;
    }

    if (value.HasMember("TotalCount") && !value["TotalCount"].IsNull())
    {
        if (!value["TotalCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ScreenRegionMachines.TotalCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = value["TotalCount"].GetUint64();
        m_totalCountHasBeenSet = true;
    }

    if (value.HasMember("RiskCnt") && !value["RiskCnt"].IsNull())
    {
        if (!value["RiskCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ScreenRegionMachines.RiskCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_riskCnt = value["RiskCnt"].GetUint64();
        m_riskCntHasBeenSet = true;
    }

    if (value.HasMember("AttackCnt") && !value["AttackCnt"].IsNull())
    {
        if (!value["AttackCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ScreenRegionMachines.AttackCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_attackCnt = value["AttackCnt"].GetUint64();
        m_attackCntHasBeenSet = true;
    }

    if (value.HasMember("SafetyCnt") && !value["SafetyCnt"].IsNull())
    {
        if (!value["SafetyCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ScreenRegionMachines.SafetyCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_safetyCnt = value["SafetyCnt"].GetUint64();
        m_safetyCntHasBeenSet = true;
    }

    if (value.HasMember("UnAgentOfflineCnt") && !value["UnAgentOfflineCnt"].IsNull())
    {
        if (!value["UnAgentOfflineCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ScreenRegionMachines.UnAgentOfflineCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_unAgentOfflineCnt = value["UnAgentOfflineCnt"].GetUint64();
        m_unAgentOfflineCntHasBeenSet = true;
    }

    if (value.HasMember("IgnoreCnt") && !value["IgnoreCnt"].IsNull())
    {
        if (!value["IgnoreCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ScreenRegionMachines.IgnoreCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ignoreCnt = value["IgnoreCnt"].GetUint64();
        m_ignoreCntHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ScreenRegionMachines::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_regionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionName.c_str(), allocator).Move(), allocator);
    }

    if (m_machinesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Machines";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_machines.begin(); itr != m_machines.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

    if (m_riskCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskCnt, allocator);
    }

    if (m_attackCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_attackCnt, allocator);
    }

    if (m_safetyCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SafetyCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_safetyCnt, allocator);
    }

    if (m_unAgentOfflineCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnAgentOfflineCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unAgentOfflineCnt, allocator);
    }

    if (m_ignoreCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IgnoreCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ignoreCnt, allocator);
    }

}


string ScreenRegionMachines::GetRegion() const
{
    return m_region;
}

void ScreenRegionMachines::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool ScreenRegionMachines::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string ScreenRegionMachines::GetRegionName() const
{
    return m_regionName;
}

void ScreenRegionMachines::SetRegionName(const string& _regionName)
{
    m_regionName = _regionName;
    m_regionNameHasBeenSet = true;
}

bool ScreenRegionMachines::RegionNameHasBeenSet() const
{
    return m_regionNameHasBeenSet;
}

vector<ScreenMachine> ScreenRegionMachines::GetMachines() const
{
    return m_machines;
}

void ScreenRegionMachines::SetMachines(const vector<ScreenMachine>& _machines)
{
    m_machines = _machines;
    m_machinesHasBeenSet = true;
}

bool ScreenRegionMachines::MachinesHasBeenSet() const
{
    return m_machinesHasBeenSet;
}

uint64_t ScreenRegionMachines::GetTotalCount() const
{
    return m_totalCount;
}

void ScreenRegionMachines::SetTotalCount(const uint64_t& _totalCount)
{
    m_totalCount = _totalCount;
    m_totalCountHasBeenSet = true;
}

bool ScreenRegionMachines::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

uint64_t ScreenRegionMachines::GetRiskCnt() const
{
    return m_riskCnt;
}

void ScreenRegionMachines::SetRiskCnt(const uint64_t& _riskCnt)
{
    m_riskCnt = _riskCnt;
    m_riskCntHasBeenSet = true;
}

bool ScreenRegionMachines::RiskCntHasBeenSet() const
{
    return m_riskCntHasBeenSet;
}

uint64_t ScreenRegionMachines::GetAttackCnt() const
{
    return m_attackCnt;
}

void ScreenRegionMachines::SetAttackCnt(const uint64_t& _attackCnt)
{
    m_attackCnt = _attackCnt;
    m_attackCntHasBeenSet = true;
}

bool ScreenRegionMachines::AttackCntHasBeenSet() const
{
    return m_attackCntHasBeenSet;
}

uint64_t ScreenRegionMachines::GetSafetyCnt() const
{
    return m_safetyCnt;
}

void ScreenRegionMachines::SetSafetyCnt(const uint64_t& _safetyCnt)
{
    m_safetyCnt = _safetyCnt;
    m_safetyCntHasBeenSet = true;
}

bool ScreenRegionMachines::SafetyCntHasBeenSet() const
{
    return m_safetyCntHasBeenSet;
}

uint64_t ScreenRegionMachines::GetUnAgentOfflineCnt() const
{
    return m_unAgentOfflineCnt;
}

void ScreenRegionMachines::SetUnAgentOfflineCnt(const uint64_t& _unAgentOfflineCnt)
{
    m_unAgentOfflineCnt = _unAgentOfflineCnt;
    m_unAgentOfflineCntHasBeenSet = true;
}

bool ScreenRegionMachines::UnAgentOfflineCntHasBeenSet() const
{
    return m_unAgentOfflineCntHasBeenSet;
}

uint64_t ScreenRegionMachines::GetIgnoreCnt() const
{
    return m_ignoreCnt;
}

void ScreenRegionMachines::SetIgnoreCnt(const uint64_t& _ignoreCnt)
{
    m_ignoreCnt = _ignoreCnt;
    m_ignoreCntHasBeenSet = true;
}

bool ScreenRegionMachines::IgnoreCntHasBeenSet() const
{
    return m_ignoreCntHasBeenSet;
}

