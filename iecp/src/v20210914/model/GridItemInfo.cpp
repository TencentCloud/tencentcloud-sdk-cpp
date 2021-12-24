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

#include <tencentcloud/iecp/v20210914/model/GridItemInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iecp::V20210914::Model;
using namespace std;

GridItemInfo::GridItemInfo() :
    m_nameHasBeenSet(false),
    m_replicasHasBeenSet(false),
    m_availableReplicasHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_workloadKindHasBeenSet(false)
{
}

CoreInternalOutcome GridItemInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GridItemInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Replicas") && !value["Replicas"].IsNull())
    {
        if (!value["Replicas"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GridItemInfo.Replicas` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_replicas = value["Replicas"].GetInt64();
        m_replicasHasBeenSet = true;
    }

    if (value.HasMember("AvailableReplicas") && !value["AvailableReplicas"].IsNull())
    {
        if (!value["AvailableReplicas"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GridItemInfo.AvailableReplicas` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_availableReplicas = value["AvailableReplicas"].GetInt64();
        m_availableReplicasHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GridItemInfo.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("WorkloadKind") && !value["WorkloadKind"].IsNull())
    {
        if (!value["WorkloadKind"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GridItemInfo.WorkloadKind` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workloadKind = string(value["WorkloadKind"].GetString());
        m_workloadKindHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GridItemInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_replicasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Replicas";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_replicas, allocator);
    }

    if (m_availableReplicasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvailableReplicas";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_availableReplicas, allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_workloadKindHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkloadKind";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workloadKind.c_str(), allocator).Move(), allocator);
    }

}


string GridItemInfo::GetName() const
{
    return m_name;
}

void GridItemInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool GridItemInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t GridItemInfo::GetReplicas() const
{
    return m_replicas;
}

void GridItemInfo::SetReplicas(const int64_t& _replicas)
{
    m_replicas = _replicas;
    m_replicasHasBeenSet = true;
}

bool GridItemInfo::ReplicasHasBeenSet() const
{
    return m_replicasHasBeenSet;
}

int64_t GridItemInfo::GetAvailableReplicas() const
{
    return m_availableReplicas;
}

void GridItemInfo::SetAvailableReplicas(const int64_t& _availableReplicas)
{
    m_availableReplicas = _availableReplicas;
    m_availableReplicasHasBeenSet = true;
}

bool GridItemInfo::AvailableReplicasHasBeenSet() const
{
    return m_availableReplicasHasBeenSet;
}

string GridItemInfo::GetStartTime() const
{
    return m_startTime;
}

void GridItemInfo::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool GridItemInfo::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string GridItemInfo::GetWorkloadKind() const
{
    return m_workloadKind;
}

void GridItemInfo::SetWorkloadKind(const string& _workloadKind)
{
    m_workloadKind = _workloadKind;
    m_workloadKindHasBeenSet = true;
}

bool GridItemInfo::WorkloadKindHasBeenSet() const
{
    return m_workloadKindHasBeenSet;
}

