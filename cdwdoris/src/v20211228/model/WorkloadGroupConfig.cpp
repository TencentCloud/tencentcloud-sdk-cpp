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

#include <tencentcloud/cdwdoris/v20211228/model/WorkloadGroupConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdwdoris::V20211228::Model;
using namespace std;

WorkloadGroupConfig::WorkloadGroupConfig() :
    m_workloadGroupNameHasBeenSet(false),
    m_cpuShareHasBeenSet(false),
    m_memoryLimitHasBeenSet(false),
    m_enableMemoryOverCommitHasBeenSet(false),
    m_cpuHardLimitHasBeenSet(false)
{
}

CoreInternalOutcome WorkloadGroupConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WorkloadGroupName") && !value["WorkloadGroupName"].IsNull())
    {
        if (!value["WorkloadGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkloadGroupConfig.WorkloadGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workloadGroupName = string(value["WorkloadGroupName"].GetString());
        m_workloadGroupNameHasBeenSet = true;
    }

    if (value.HasMember("CpuShare") && !value["CpuShare"].IsNull())
    {
        if (!value["CpuShare"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WorkloadGroupConfig.CpuShare` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cpuShare = value["CpuShare"].GetInt64();
        m_cpuShareHasBeenSet = true;
    }

    if (value.HasMember("MemoryLimit") && !value["MemoryLimit"].IsNull())
    {
        if (!value["MemoryLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WorkloadGroupConfig.MemoryLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memoryLimit = value["MemoryLimit"].GetInt64();
        m_memoryLimitHasBeenSet = true;
    }

    if (value.HasMember("EnableMemoryOverCommit") && !value["EnableMemoryOverCommit"].IsNull())
    {
        if (!value["EnableMemoryOverCommit"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `WorkloadGroupConfig.EnableMemoryOverCommit` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableMemoryOverCommit = value["EnableMemoryOverCommit"].GetBool();
        m_enableMemoryOverCommitHasBeenSet = true;
    }

    if (value.HasMember("CpuHardLimit") && !value["CpuHardLimit"].IsNull())
    {
        if (!value["CpuHardLimit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkloadGroupConfig.CpuHardLimit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cpuHardLimit = string(value["CpuHardLimit"].GetString());
        m_cpuHardLimitHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WorkloadGroupConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_workloadGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkloadGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workloadGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_cpuShareHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuShare";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpuShare, allocator);
    }

    if (m_memoryLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemoryLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memoryLimit, allocator);
    }

    if (m_enableMemoryOverCommitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableMemoryOverCommit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableMemoryOverCommit, allocator);
    }

    if (m_cpuHardLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuHardLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cpuHardLimit.c_str(), allocator).Move(), allocator);
    }

}


string WorkloadGroupConfig::GetWorkloadGroupName() const
{
    return m_workloadGroupName;
}

void WorkloadGroupConfig::SetWorkloadGroupName(const string& _workloadGroupName)
{
    m_workloadGroupName = _workloadGroupName;
    m_workloadGroupNameHasBeenSet = true;
}

bool WorkloadGroupConfig::WorkloadGroupNameHasBeenSet() const
{
    return m_workloadGroupNameHasBeenSet;
}

int64_t WorkloadGroupConfig::GetCpuShare() const
{
    return m_cpuShare;
}

void WorkloadGroupConfig::SetCpuShare(const int64_t& _cpuShare)
{
    m_cpuShare = _cpuShare;
    m_cpuShareHasBeenSet = true;
}

bool WorkloadGroupConfig::CpuShareHasBeenSet() const
{
    return m_cpuShareHasBeenSet;
}

int64_t WorkloadGroupConfig::GetMemoryLimit() const
{
    return m_memoryLimit;
}

void WorkloadGroupConfig::SetMemoryLimit(const int64_t& _memoryLimit)
{
    m_memoryLimit = _memoryLimit;
    m_memoryLimitHasBeenSet = true;
}

bool WorkloadGroupConfig::MemoryLimitHasBeenSet() const
{
    return m_memoryLimitHasBeenSet;
}

bool WorkloadGroupConfig::GetEnableMemoryOverCommit() const
{
    return m_enableMemoryOverCommit;
}

void WorkloadGroupConfig::SetEnableMemoryOverCommit(const bool& _enableMemoryOverCommit)
{
    m_enableMemoryOverCommit = _enableMemoryOverCommit;
    m_enableMemoryOverCommitHasBeenSet = true;
}

bool WorkloadGroupConfig::EnableMemoryOverCommitHasBeenSet() const
{
    return m_enableMemoryOverCommitHasBeenSet;
}

string WorkloadGroupConfig::GetCpuHardLimit() const
{
    return m_cpuHardLimit;
}

void WorkloadGroupConfig::SetCpuHardLimit(const string& _cpuHardLimit)
{
    m_cpuHardLimit = _cpuHardLimit;
    m_cpuHardLimitHasBeenSet = true;
}

bool WorkloadGroupConfig::CpuHardLimitHasBeenSet() const
{
    return m_cpuHardLimitHasBeenSet;
}

