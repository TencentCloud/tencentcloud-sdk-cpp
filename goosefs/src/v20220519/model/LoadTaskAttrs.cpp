/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/goosefs/v20220519/model/LoadTaskAttrs.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Goosefs::V20220519::Model;
using namespace std;

LoadTaskAttrs::LoadTaskAttrs() :
    m_taskIdHasBeenSet(false),
    m_taskTypeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_priorityHasBeenSet(false),
    m_metadataLoadAttrsHasBeenSet(false),
    m_distributedLoadAttrsHasBeenSet(false),
    m_reportPathHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_taskMessageHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_requesterHasBeenSet(false)
{
}

CoreInternalOutcome LoadTaskAttrs::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadTaskAttrs.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("TaskType") && !value["TaskType"].IsNull())
    {
        if (!value["TaskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadTaskAttrs.TaskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskType = string(value["TaskType"].GetString());
        m_taskTypeHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadTaskAttrs.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Priority") && !value["Priority"].IsNull())
    {
        if (!value["Priority"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LoadTaskAttrs.Priority` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_priority = value["Priority"].GetUint64();
        m_priorityHasBeenSet = true;
    }

    if (value.HasMember("MetadataLoadAttrs") && !value["MetadataLoadAttrs"].IsNull())
    {
        if (!value["MetadataLoadAttrs"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LoadTaskAttrs.MetadataLoadAttrs` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_metadataLoadAttrs.Deserialize(value["MetadataLoadAttrs"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_metadataLoadAttrsHasBeenSet = true;
    }

    if (value.HasMember("DistributedLoadAttrs") && !value["DistributedLoadAttrs"].IsNull())
    {
        if (!value["DistributedLoadAttrs"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LoadTaskAttrs.DistributedLoadAttrs` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_distributedLoadAttrs.Deserialize(value["DistributedLoadAttrs"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_distributedLoadAttrsHasBeenSet = true;
    }

    if (value.HasMember("ReportPath") && !value["ReportPath"].IsNull())
    {
        if (!value["ReportPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadTaskAttrs.ReportPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reportPath = string(value["ReportPath"].GetString());
        m_reportPathHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadTaskAttrs.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("TaskMessage") && !value["TaskMessage"].IsNull())
    {
        if (!value["TaskMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadTaskAttrs.TaskMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskMessage = string(value["TaskMessage"].GetString());
        m_taskMessageHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadTaskAttrs.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadTaskAttrs.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }

    if (value.HasMember("Requester") && !value["Requester"].IsNull())
    {
        if (!value["Requester"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadTaskAttrs.Requester` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_requester = string(value["Requester"].GetString());
        m_requesterHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LoadTaskAttrs::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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
        value.AddMember(iKey, rapidjson::Value(m_taskType.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_priorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Priority";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_priority, allocator);
    }

    if (m_metadataLoadAttrsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetadataLoadAttrs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_metadataLoadAttrs.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_distributedLoadAttrsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DistributedLoadAttrs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_distributedLoadAttrs.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_reportPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReportPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reportPath.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_taskMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyTime.c_str(), allocator).Move(), allocator);
    }

    if (m_requesterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Requester";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_requester.c_str(), allocator).Move(), allocator);
    }

}


string LoadTaskAttrs::GetTaskId() const
{
    return m_taskId;
}

void LoadTaskAttrs::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool LoadTaskAttrs::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string LoadTaskAttrs::GetTaskType() const
{
    return m_taskType;
}

void LoadTaskAttrs::SetTaskType(const string& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool LoadTaskAttrs::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

string LoadTaskAttrs::GetDescription() const
{
    return m_description;
}

void LoadTaskAttrs::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool LoadTaskAttrs::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

uint64_t LoadTaskAttrs::GetPriority() const
{
    return m_priority;
}

void LoadTaskAttrs::SetPriority(const uint64_t& _priority)
{
    m_priority = _priority;
    m_priorityHasBeenSet = true;
}

bool LoadTaskAttrs::PriorityHasBeenSet() const
{
    return m_priorityHasBeenSet;
}

MetadataLoadAttrs LoadTaskAttrs::GetMetadataLoadAttrs() const
{
    return m_metadataLoadAttrs;
}

void LoadTaskAttrs::SetMetadataLoadAttrs(const MetadataLoadAttrs& _metadataLoadAttrs)
{
    m_metadataLoadAttrs = _metadataLoadAttrs;
    m_metadataLoadAttrsHasBeenSet = true;
}

bool LoadTaskAttrs::MetadataLoadAttrsHasBeenSet() const
{
    return m_metadataLoadAttrsHasBeenSet;
}

DistributedLoadAttrs LoadTaskAttrs::GetDistributedLoadAttrs() const
{
    return m_distributedLoadAttrs;
}

void LoadTaskAttrs::SetDistributedLoadAttrs(const DistributedLoadAttrs& _distributedLoadAttrs)
{
    m_distributedLoadAttrs = _distributedLoadAttrs;
    m_distributedLoadAttrsHasBeenSet = true;
}

bool LoadTaskAttrs::DistributedLoadAttrsHasBeenSet() const
{
    return m_distributedLoadAttrsHasBeenSet;
}

string LoadTaskAttrs::GetReportPath() const
{
    return m_reportPath;
}

void LoadTaskAttrs::SetReportPath(const string& _reportPath)
{
    m_reportPath = _reportPath;
    m_reportPathHasBeenSet = true;
}

bool LoadTaskAttrs::ReportPathHasBeenSet() const
{
    return m_reportPathHasBeenSet;
}

string LoadTaskAttrs::GetState() const
{
    return m_state;
}

void LoadTaskAttrs::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool LoadTaskAttrs::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string LoadTaskAttrs::GetTaskMessage() const
{
    return m_taskMessage;
}

void LoadTaskAttrs::SetTaskMessage(const string& _taskMessage)
{
    m_taskMessage = _taskMessage;
    m_taskMessageHasBeenSet = true;
}

bool LoadTaskAttrs::TaskMessageHasBeenSet() const
{
    return m_taskMessageHasBeenSet;
}

string LoadTaskAttrs::GetCreateTime() const
{
    return m_createTime;
}

void LoadTaskAttrs::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool LoadTaskAttrs::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string LoadTaskAttrs::GetModifyTime() const
{
    return m_modifyTime;
}

void LoadTaskAttrs::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool LoadTaskAttrs::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

string LoadTaskAttrs::GetRequester() const
{
    return m_requester;
}

void LoadTaskAttrs::SetRequester(const string& _requester)
{
    m_requester = _requester;
    m_requesterHasBeenSet = true;
}

bool LoadTaskAttrs::RequesterHasBeenSet() const
{
    return m_requesterHasBeenSet;
}

