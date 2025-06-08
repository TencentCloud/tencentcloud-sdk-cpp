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

#include <tencentcloud/wedata/v20210820/model/ExecutorResourcePackageUsageInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

ExecutorResourcePackageUsageInfo::ExecutorResourcePackageUsageInfo() :
    m_cpuUsagePercentHasBeenSet(false),
    m_memUsagePercentHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_runningTaskNumHasBeenSet(false),
    m_waitingTaskNumHasBeenSet(false),
    m_usageTrendStartTimeHasBeenSet(false),
    m_usageTrendEndTimeHasBeenSet(false),
    m_usageTrendListHasBeenSet(false)
{
}

CoreInternalOutcome ExecutorResourcePackageUsageInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CpuUsagePercent") && !value["CpuUsagePercent"].IsNull())
    {
        if (!value["CpuUsagePercent"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutorResourcePackageUsageInfo.CpuUsagePercent` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_cpuUsagePercent = value["CpuUsagePercent"].GetDouble();
        m_cpuUsagePercentHasBeenSet = true;
    }

    if (value.HasMember("MemUsagePercent") && !value["MemUsagePercent"].IsNull())
    {
        if (!value["MemUsagePercent"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutorResourcePackageUsageInfo.MemUsagePercent` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_memUsagePercent = value["MemUsagePercent"].GetDouble();
        m_memUsagePercentHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutorResourcePackageUsageInfo.Status` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetDouble();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("RunningTaskNum") && !value["RunningTaskNum"].IsNull())
    {
        if (!value["RunningTaskNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutorResourcePackageUsageInfo.RunningTaskNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_runningTaskNum = value["RunningTaskNum"].GetInt64();
        m_runningTaskNumHasBeenSet = true;
    }

    if (value.HasMember("WaitingTaskNum") && !value["WaitingTaskNum"].IsNull())
    {
        if (!value["WaitingTaskNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutorResourcePackageUsageInfo.WaitingTaskNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_waitingTaskNum = value["WaitingTaskNum"].GetInt64();
        m_waitingTaskNumHasBeenSet = true;
    }

    if (value.HasMember("UsageTrendStartTime") && !value["UsageTrendStartTime"].IsNull())
    {
        if (!value["UsageTrendStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutorResourcePackageUsageInfo.UsageTrendStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_usageTrendStartTime = string(value["UsageTrendStartTime"].GetString());
        m_usageTrendStartTimeHasBeenSet = true;
    }

    if (value.HasMember("UsageTrendEndTime") && !value["UsageTrendEndTime"].IsNull())
    {
        if (!value["UsageTrendEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutorResourcePackageUsageInfo.UsageTrendEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_usageTrendEndTime = string(value["UsageTrendEndTime"].GetString());
        m_usageTrendEndTimeHasBeenSet = true;
    }

    if (value.HasMember("UsageTrendList") && !value["UsageTrendList"].IsNull())
    {
        if (!value["UsageTrendList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ExecutorResourcePackageUsageInfo.UsageTrendList` is not array type"));

        const rapidjson::Value &tmpValue = value["UsageTrendList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ExecutorUsageTrendInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_usageTrendList.push_back(item);
        }
        m_usageTrendListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExecutorResourcePackageUsageInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cpuUsagePercentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuUsagePercent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpuUsagePercent, allocator);
    }

    if (m_memUsagePercentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemUsagePercent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memUsagePercent, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_runningTaskNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunningTaskNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_runningTaskNum, allocator);
    }

    if (m_waitingTaskNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WaitingTaskNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_waitingTaskNum, allocator);
    }

    if (m_usageTrendStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsageTrendStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_usageTrendStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_usageTrendEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsageTrendEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_usageTrendEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_usageTrendListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsageTrendList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_usageTrendList.begin(); itr != m_usageTrendList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


double ExecutorResourcePackageUsageInfo::GetCpuUsagePercent() const
{
    return m_cpuUsagePercent;
}

void ExecutorResourcePackageUsageInfo::SetCpuUsagePercent(const double& _cpuUsagePercent)
{
    m_cpuUsagePercent = _cpuUsagePercent;
    m_cpuUsagePercentHasBeenSet = true;
}

bool ExecutorResourcePackageUsageInfo::CpuUsagePercentHasBeenSet() const
{
    return m_cpuUsagePercentHasBeenSet;
}

double ExecutorResourcePackageUsageInfo::GetMemUsagePercent() const
{
    return m_memUsagePercent;
}

void ExecutorResourcePackageUsageInfo::SetMemUsagePercent(const double& _memUsagePercent)
{
    m_memUsagePercent = _memUsagePercent;
    m_memUsagePercentHasBeenSet = true;
}

bool ExecutorResourcePackageUsageInfo::MemUsagePercentHasBeenSet() const
{
    return m_memUsagePercentHasBeenSet;
}

double ExecutorResourcePackageUsageInfo::GetStatus() const
{
    return m_status;
}

void ExecutorResourcePackageUsageInfo::SetStatus(const double& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ExecutorResourcePackageUsageInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t ExecutorResourcePackageUsageInfo::GetRunningTaskNum() const
{
    return m_runningTaskNum;
}

void ExecutorResourcePackageUsageInfo::SetRunningTaskNum(const int64_t& _runningTaskNum)
{
    m_runningTaskNum = _runningTaskNum;
    m_runningTaskNumHasBeenSet = true;
}

bool ExecutorResourcePackageUsageInfo::RunningTaskNumHasBeenSet() const
{
    return m_runningTaskNumHasBeenSet;
}

int64_t ExecutorResourcePackageUsageInfo::GetWaitingTaskNum() const
{
    return m_waitingTaskNum;
}

void ExecutorResourcePackageUsageInfo::SetWaitingTaskNum(const int64_t& _waitingTaskNum)
{
    m_waitingTaskNum = _waitingTaskNum;
    m_waitingTaskNumHasBeenSet = true;
}

bool ExecutorResourcePackageUsageInfo::WaitingTaskNumHasBeenSet() const
{
    return m_waitingTaskNumHasBeenSet;
}

string ExecutorResourcePackageUsageInfo::GetUsageTrendStartTime() const
{
    return m_usageTrendStartTime;
}

void ExecutorResourcePackageUsageInfo::SetUsageTrendStartTime(const string& _usageTrendStartTime)
{
    m_usageTrendStartTime = _usageTrendStartTime;
    m_usageTrendStartTimeHasBeenSet = true;
}

bool ExecutorResourcePackageUsageInfo::UsageTrendStartTimeHasBeenSet() const
{
    return m_usageTrendStartTimeHasBeenSet;
}

string ExecutorResourcePackageUsageInfo::GetUsageTrendEndTime() const
{
    return m_usageTrendEndTime;
}

void ExecutorResourcePackageUsageInfo::SetUsageTrendEndTime(const string& _usageTrendEndTime)
{
    m_usageTrendEndTime = _usageTrendEndTime;
    m_usageTrendEndTimeHasBeenSet = true;
}

bool ExecutorResourcePackageUsageInfo::UsageTrendEndTimeHasBeenSet() const
{
    return m_usageTrendEndTimeHasBeenSet;
}

vector<ExecutorUsageTrendInfo> ExecutorResourcePackageUsageInfo::GetUsageTrendList() const
{
    return m_usageTrendList;
}

void ExecutorResourcePackageUsageInfo::SetUsageTrendList(const vector<ExecutorUsageTrendInfo>& _usageTrendList)
{
    m_usageTrendList = _usageTrendList;
    m_usageTrendListHasBeenSet = true;
}

bool ExecutorResourcePackageUsageInfo::UsageTrendListHasBeenSet() const
{
    return m_usageTrendListHasBeenSet;
}

