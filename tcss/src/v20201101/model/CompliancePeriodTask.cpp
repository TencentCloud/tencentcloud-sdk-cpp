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

#include <tencentcloud/tcss/v20201101/model/CompliancePeriodTask.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

CompliancePeriodTask::CompliancePeriodTask() :
    m_periodTaskIdHasBeenSet(false),
    m_assetTypeHasBeenSet(false),
    m_lastTriggerTimeHasBeenSet(false),
    m_totalPolicyItemCountHasBeenSet(false),
    m_periodRuleHasBeenSet(false),
    m_benchmarkStandardSetHasBeenSet(false)
{
}

CoreInternalOutcome CompliancePeriodTask::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PeriodTaskId") && !value["PeriodTaskId"].IsNull())
    {
        if (!value["PeriodTaskId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CompliancePeriodTask.PeriodTaskId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_periodTaskId = value["PeriodTaskId"].GetUint64();
        m_periodTaskIdHasBeenSet = true;
    }

    if (value.HasMember("AssetType") && !value["AssetType"].IsNull())
    {
        if (!value["AssetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompliancePeriodTask.AssetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetType = string(value["AssetType"].GetString());
        m_assetTypeHasBeenSet = true;
    }

    if (value.HasMember("LastTriggerTime") && !value["LastTriggerTime"].IsNull())
    {
        if (!value["LastTriggerTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompliancePeriodTask.LastTriggerTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastTriggerTime = string(value["LastTriggerTime"].GetString());
        m_lastTriggerTimeHasBeenSet = true;
    }

    if (value.HasMember("TotalPolicyItemCount") && !value["TotalPolicyItemCount"].IsNull())
    {
        if (!value["TotalPolicyItemCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CompliancePeriodTask.TotalPolicyItemCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalPolicyItemCount = value["TotalPolicyItemCount"].GetUint64();
        m_totalPolicyItemCountHasBeenSet = true;
    }

    if (value.HasMember("PeriodRule") && !value["PeriodRule"].IsNull())
    {
        if (!value["PeriodRule"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CompliancePeriodTask.PeriodRule` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_periodRule.Deserialize(value["PeriodRule"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_periodRuleHasBeenSet = true;
    }

    if (value.HasMember("BenchmarkStandardSet") && !value["BenchmarkStandardSet"].IsNull())
    {
        if (!value["BenchmarkStandardSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CompliancePeriodTask.BenchmarkStandardSet` is not array type"));

        const rapidjson::Value &tmpValue = value["BenchmarkStandardSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ComplianceBenchmarkStandard item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_benchmarkStandardSet.push_back(item);
        }
        m_benchmarkStandardSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CompliancePeriodTask::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_periodTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeriodTaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_periodTaskId, allocator);
    }

    if (m_assetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetType.c_str(), allocator).Move(), allocator);
    }

    if (m_lastTriggerTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastTriggerTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastTriggerTime.c_str(), allocator).Move(), allocator);
    }

    if (m_totalPolicyItemCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalPolicyItemCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalPolicyItemCount, allocator);
    }

    if (m_periodRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeriodRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_periodRule.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_benchmarkStandardSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BenchmarkStandardSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_benchmarkStandardSet.begin(); itr != m_benchmarkStandardSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


uint64_t CompliancePeriodTask::GetPeriodTaskId() const
{
    return m_periodTaskId;
}

void CompliancePeriodTask::SetPeriodTaskId(const uint64_t& _periodTaskId)
{
    m_periodTaskId = _periodTaskId;
    m_periodTaskIdHasBeenSet = true;
}

bool CompliancePeriodTask::PeriodTaskIdHasBeenSet() const
{
    return m_periodTaskIdHasBeenSet;
}

string CompliancePeriodTask::GetAssetType() const
{
    return m_assetType;
}

void CompliancePeriodTask::SetAssetType(const string& _assetType)
{
    m_assetType = _assetType;
    m_assetTypeHasBeenSet = true;
}

bool CompliancePeriodTask::AssetTypeHasBeenSet() const
{
    return m_assetTypeHasBeenSet;
}

string CompliancePeriodTask::GetLastTriggerTime() const
{
    return m_lastTriggerTime;
}

void CompliancePeriodTask::SetLastTriggerTime(const string& _lastTriggerTime)
{
    m_lastTriggerTime = _lastTriggerTime;
    m_lastTriggerTimeHasBeenSet = true;
}

bool CompliancePeriodTask::LastTriggerTimeHasBeenSet() const
{
    return m_lastTriggerTimeHasBeenSet;
}

uint64_t CompliancePeriodTask::GetTotalPolicyItemCount() const
{
    return m_totalPolicyItemCount;
}

void CompliancePeriodTask::SetTotalPolicyItemCount(const uint64_t& _totalPolicyItemCount)
{
    m_totalPolicyItemCount = _totalPolicyItemCount;
    m_totalPolicyItemCountHasBeenSet = true;
}

bool CompliancePeriodTask::TotalPolicyItemCountHasBeenSet() const
{
    return m_totalPolicyItemCountHasBeenSet;
}

CompliancePeriodTaskRule CompliancePeriodTask::GetPeriodRule() const
{
    return m_periodRule;
}

void CompliancePeriodTask::SetPeriodRule(const CompliancePeriodTaskRule& _periodRule)
{
    m_periodRule = _periodRule;
    m_periodRuleHasBeenSet = true;
}

bool CompliancePeriodTask::PeriodRuleHasBeenSet() const
{
    return m_periodRuleHasBeenSet;
}

vector<ComplianceBenchmarkStandard> CompliancePeriodTask::GetBenchmarkStandardSet() const
{
    return m_benchmarkStandardSet;
}

void CompliancePeriodTask::SetBenchmarkStandardSet(const vector<ComplianceBenchmarkStandard>& _benchmarkStandardSet)
{
    m_benchmarkStandardSet = _benchmarkStandardSet;
    m_benchmarkStandardSetHasBeenSet = true;
}

bool CompliancePeriodTask::BenchmarkStandardSetHasBeenSet() const
{
    return m_benchmarkStandardSetHasBeenSet;
}

