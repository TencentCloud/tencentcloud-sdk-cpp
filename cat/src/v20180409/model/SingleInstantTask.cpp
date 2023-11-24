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

#include <tencentcloud/cat/v20180409/model/SingleInstantTask.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cat::V20180409::Model;
using namespace std;

SingleInstantTask::SingleInstantTask() :
    m_taskIdHasBeenSet(false),
    m_targetAddressHasBeenSet(false),
    m_taskTypeHasBeenSet(false),
    m_probeTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_successRateHasBeenSet(false),
    m_nodeCountHasBeenSet(false),
    m_taskCategoryHasBeenSet(false)
{
}

CoreInternalOutcome SingleInstantTask::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SingleInstantTask.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("TargetAddress") && !value["TargetAddress"].IsNull())
    {
        if (!value["TargetAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SingleInstantTask.TargetAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetAddress = string(value["TargetAddress"].GetString());
        m_targetAddressHasBeenSet = true;
    }

    if (value.HasMember("TaskType") && !value["TaskType"].IsNull())
    {
        if (!value["TaskType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SingleInstantTask.TaskType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_taskType = value["TaskType"].GetUint64();
        m_taskTypeHasBeenSet = true;
    }

    if (value.HasMember("ProbeTime") && !value["ProbeTime"].IsNull())
    {
        if (!value["ProbeTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SingleInstantTask.ProbeTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_probeTime = value["ProbeTime"].GetUint64();
        m_probeTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SingleInstantTask.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("SuccessRate") && !value["SuccessRate"].IsNull())
    {
        if (!value["SuccessRate"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SingleInstantTask.SuccessRate` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_successRate = value["SuccessRate"].GetDouble();
        m_successRateHasBeenSet = true;
    }

    if (value.HasMember("NodeCount") && !value["NodeCount"].IsNull())
    {
        if (!value["NodeCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SingleInstantTask.NodeCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_nodeCount = value["NodeCount"].GetUint64();
        m_nodeCountHasBeenSet = true;
    }

    if (value.HasMember("TaskCategory") && !value["TaskCategory"].IsNull())
    {
        if (!value["TaskCategory"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SingleInstantTask.TaskCategory` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_taskCategory = value["TaskCategory"].GetUint64();
        m_taskCategoryHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SingleInstantTask::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_targetAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskType, allocator);
    }

    if (m_probeTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProbeTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_probeTime, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_successRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuccessRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_successRate, allocator);
    }

    if (m_nodeCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nodeCount, allocator);
    }

    if (m_taskCategoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskCategory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskCategory, allocator);
    }

}


string SingleInstantTask::GetTaskId() const
{
    return m_taskId;
}

void SingleInstantTask::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool SingleInstantTask::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string SingleInstantTask::GetTargetAddress() const
{
    return m_targetAddress;
}

void SingleInstantTask::SetTargetAddress(const string& _targetAddress)
{
    m_targetAddress = _targetAddress;
    m_targetAddressHasBeenSet = true;
}

bool SingleInstantTask::TargetAddressHasBeenSet() const
{
    return m_targetAddressHasBeenSet;
}

uint64_t SingleInstantTask::GetTaskType() const
{
    return m_taskType;
}

void SingleInstantTask::SetTaskType(const uint64_t& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool SingleInstantTask::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

uint64_t SingleInstantTask::GetProbeTime() const
{
    return m_probeTime;
}

void SingleInstantTask::SetProbeTime(const uint64_t& _probeTime)
{
    m_probeTime = _probeTime;
    m_probeTimeHasBeenSet = true;
}

bool SingleInstantTask::ProbeTimeHasBeenSet() const
{
    return m_probeTimeHasBeenSet;
}

string SingleInstantTask::GetStatus() const
{
    return m_status;
}

void SingleInstantTask::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool SingleInstantTask::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

double SingleInstantTask::GetSuccessRate() const
{
    return m_successRate;
}

void SingleInstantTask::SetSuccessRate(const double& _successRate)
{
    m_successRate = _successRate;
    m_successRateHasBeenSet = true;
}

bool SingleInstantTask::SuccessRateHasBeenSet() const
{
    return m_successRateHasBeenSet;
}

uint64_t SingleInstantTask::GetNodeCount() const
{
    return m_nodeCount;
}

void SingleInstantTask::SetNodeCount(const uint64_t& _nodeCount)
{
    m_nodeCount = _nodeCount;
    m_nodeCountHasBeenSet = true;
}

bool SingleInstantTask::NodeCountHasBeenSet() const
{
    return m_nodeCountHasBeenSet;
}

uint64_t SingleInstantTask::GetTaskCategory() const
{
    return m_taskCategory;
}

void SingleInstantTask::SetTaskCategory(const uint64_t& _taskCategory)
{
    m_taskCategory = _taskCategory;
    m_taskCategoryHasBeenSet = true;
}

bool SingleInstantTask::TaskCategoryHasBeenSet() const
{
    return m_taskCategoryHasBeenSet;
}

