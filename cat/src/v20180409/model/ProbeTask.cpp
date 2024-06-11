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

#include <tencentcloud/cat/v20180409/model/ProbeTask.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cat::V20180409::Model;
using namespace std;

ProbeTask::ProbeTask() :
    m_nameHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_taskTypeHasBeenSet(false),
    m_nodesHasBeenSet(false),
    m_nodeIpTypeHasBeenSet(false),
    m_intervalHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_targetAddressHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_orderStateHasBeenSet(false),
    m_taskCategoryHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_cronHasBeenSet(false),
    m_cronStateHasBeenSet(false),
    m_tagInfoListHasBeenSet(false),
    m_subSyncFlagHasBeenSet(false)
{
}

CoreInternalOutcome ProbeTask::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProbeTask.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProbeTask.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("TaskType") && !value["TaskType"].IsNull())
    {
        if (!value["TaskType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProbeTask.TaskType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskType = value["TaskType"].GetInt64();
        m_taskTypeHasBeenSet = true;
    }

    if (value.HasMember("Nodes") && !value["Nodes"].IsNull())
    {
        if (!value["Nodes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ProbeTask.Nodes` is not array type"));

        const rapidjson::Value &tmpValue = value["Nodes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_nodes.push_back((*itr).GetString());
        }
        m_nodesHasBeenSet = true;
    }

    if (value.HasMember("NodeIpType") && !value["NodeIpType"].IsNull())
    {
        if (!value["NodeIpType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProbeTask.NodeIpType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_nodeIpType = value["NodeIpType"].GetInt64();
        m_nodeIpTypeHasBeenSet = true;
    }

    if (value.HasMember("Interval") && !value["Interval"].IsNull())
    {
        if (!value["Interval"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProbeTask.Interval` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_interval = value["Interval"].GetInt64();
        m_intervalHasBeenSet = true;
    }

    if (value.HasMember("Parameters") && !value["Parameters"].IsNull())
    {
        if (!value["Parameters"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProbeTask.Parameters` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parameters = string(value["Parameters"].GetString());
        m_parametersHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProbeTask.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("TargetAddress") && !value["TargetAddress"].IsNull())
    {
        if (!value["TargetAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProbeTask.TargetAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetAddress = string(value["TargetAddress"].GetString());
        m_targetAddressHasBeenSet = true;
    }

    if (value.HasMember("PayMode") && !value["PayMode"].IsNull())
    {
        if (!value["PayMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProbeTask.PayMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_payMode = value["PayMode"].GetInt64();
        m_payModeHasBeenSet = true;
    }

    if (value.HasMember("OrderState") && !value["OrderState"].IsNull())
    {
        if (!value["OrderState"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProbeTask.OrderState` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_orderState = value["OrderState"].GetInt64();
        m_orderStateHasBeenSet = true;
    }

    if (value.HasMember("TaskCategory") && !value["TaskCategory"].IsNull())
    {
        if (!value["TaskCategory"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProbeTask.TaskCategory` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskCategory = value["TaskCategory"].GetInt64();
        m_taskCategoryHasBeenSet = true;
    }

    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProbeTask.CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(value["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
    }

    if (value.HasMember("Cron") && !value["Cron"].IsNull())
    {
        if (!value["Cron"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProbeTask.Cron` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cron = string(value["Cron"].GetString());
        m_cronHasBeenSet = true;
    }

    if (value.HasMember("CronState") && !value["CronState"].IsNull())
    {
        if (!value["CronState"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProbeTask.CronState` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cronState = value["CronState"].GetInt64();
        m_cronStateHasBeenSet = true;
    }

    if (value.HasMember("TagInfoList") && !value["TagInfoList"].IsNull())
    {
        if (!value["TagInfoList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ProbeTask.TagInfoList` is not array type"));

        const rapidjson::Value &tmpValue = value["TagInfoList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            KeyValuePair item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tagInfoList.push_back(item);
        }
        m_tagInfoListHasBeenSet = true;
    }

    if (value.HasMember("SubSyncFlag") && !value["SubSyncFlag"].IsNull())
    {
        if (!value["SubSyncFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProbeTask.SubSyncFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_subSyncFlag = value["SubSyncFlag"].GetInt64();
        m_subSyncFlagHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProbeTask::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskType, allocator);
    }

    if (m_nodesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Nodes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_nodes.begin(); itr != m_nodes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_nodeIpTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeIpType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nodeIpType, allocator);
    }

    if (m_intervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Interval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_interval, allocator);
    }

    if (m_parametersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Parameters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_parameters.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_targetAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_payMode, allocator);
    }

    if (m_orderStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_orderState, allocator);
    }

    if (m_taskCategoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskCategory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskCategory, allocator);
    }

    if (m_createdAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdAt.c_str(), allocator).Move(), allocator);
    }

    if (m_cronHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cron";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cron.c_str(), allocator).Move(), allocator);
    }

    if (m_cronStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CronState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cronState, allocator);
    }

    if (m_tagInfoListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagInfoList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagInfoList.begin(); itr != m_tagInfoList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_subSyncFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubSyncFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_subSyncFlag, allocator);
    }

}


string ProbeTask::GetName() const
{
    return m_name;
}

void ProbeTask::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ProbeTask::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ProbeTask::GetTaskId() const
{
    return m_taskId;
}

void ProbeTask::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool ProbeTask::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

int64_t ProbeTask::GetTaskType() const
{
    return m_taskType;
}

void ProbeTask::SetTaskType(const int64_t& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool ProbeTask::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

vector<string> ProbeTask::GetNodes() const
{
    return m_nodes;
}

void ProbeTask::SetNodes(const vector<string>& _nodes)
{
    m_nodes = _nodes;
    m_nodesHasBeenSet = true;
}

bool ProbeTask::NodesHasBeenSet() const
{
    return m_nodesHasBeenSet;
}

int64_t ProbeTask::GetNodeIpType() const
{
    return m_nodeIpType;
}

void ProbeTask::SetNodeIpType(const int64_t& _nodeIpType)
{
    m_nodeIpType = _nodeIpType;
    m_nodeIpTypeHasBeenSet = true;
}

bool ProbeTask::NodeIpTypeHasBeenSet() const
{
    return m_nodeIpTypeHasBeenSet;
}

int64_t ProbeTask::GetInterval() const
{
    return m_interval;
}

void ProbeTask::SetInterval(const int64_t& _interval)
{
    m_interval = _interval;
    m_intervalHasBeenSet = true;
}

bool ProbeTask::IntervalHasBeenSet() const
{
    return m_intervalHasBeenSet;
}

string ProbeTask::GetParameters() const
{
    return m_parameters;
}

void ProbeTask::SetParameters(const string& _parameters)
{
    m_parameters = _parameters;
    m_parametersHasBeenSet = true;
}

bool ProbeTask::ParametersHasBeenSet() const
{
    return m_parametersHasBeenSet;
}

int64_t ProbeTask::GetStatus() const
{
    return m_status;
}

void ProbeTask::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ProbeTask::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ProbeTask::GetTargetAddress() const
{
    return m_targetAddress;
}

void ProbeTask::SetTargetAddress(const string& _targetAddress)
{
    m_targetAddress = _targetAddress;
    m_targetAddressHasBeenSet = true;
}

bool ProbeTask::TargetAddressHasBeenSet() const
{
    return m_targetAddressHasBeenSet;
}

int64_t ProbeTask::GetPayMode() const
{
    return m_payMode;
}

void ProbeTask::SetPayMode(const int64_t& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool ProbeTask::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

int64_t ProbeTask::GetOrderState() const
{
    return m_orderState;
}

void ProbeTask::SetOrderState(const int64_t& _orderState)
{
    m_orderState = _orderState;
    m_orderStateHasBeenSet = true;
}

bool ProbeTask::OrderStateHasBeenSet() const
{
    return m_orderStateHasBeenSet;
}

int64_t ProbeTask::GetTaskCategory() const
{
    return m_taskCategory;
}

void ProbeTask::SetTaskCategory(const int64_t& _taskCategory)
{
    m_taskCategory = _taskCategory;
    m_taskCategoryHasBeenSet = true;
}

bool ProbeTask::TaskCategoryHasBeenSet() const
{
    return m_taskCategoryHasBeenSet;
}

string ProbeTask::GetCreatedAt() const
{
    return m_createdAt;
}

void ProbeTask::SetCreatedAt(const string& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool ProbeTask::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

string ProbeTask::GetCron() const
{
    return m_cron;
}

void ProbeTask::SetCron(const string& _cron)
{
    m_cron = _cron;
    m_cronHasBeenSet = true;
}

bool ProbeTask::CronHasBeenSet() const
{
    return m_cronHasBeenSet;
}

int64_t ProbeTask::GetCronState() const
{
    return m_cronState;
}

void ProbeTask::SetCronState(const int64_t& _cronState)
{
    m_cronState = _cronState;
    m_cronStateHasBeenSet = true;
}

bool ProbeTask::CronStateHasBeenSet() const
{
    return m_cronStateHasBeenSet;
}

vector<KeyValuePair> ProbeTask::GetTagInfoList() const
{
    return m_tagInfoList;
}

void ProbeTask::SetTagInfoList(const vector<KeyValuePair>& _tagInfoList)
{
    m_tagInfoList = _tagInfoList;
    m_tagInfoListHasBeenSet = true;
}

bool ProbeTask::TagInfoListHasBeenSet() const
{
    return m_tagInfoListHasBeenSet;
}

int64_t ProbeTask::GetSubSyncFlag() const
{
    return m_subSyncFlag;
}

void ProbeTask::SetSubSyncFlag(const int64_t& _subSyncFlag)
{
    m_subSyncFlag = _subSyncFlag;
    m_subSyncFlagHasBeenSet = true;
}

bool ProbeTask::SubSyncFlagHasBeenSet() const
{
    return m_subSyncFlagHasBeenSet;
}

