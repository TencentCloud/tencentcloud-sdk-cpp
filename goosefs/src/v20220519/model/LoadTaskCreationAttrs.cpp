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

#include <tencentcloud/goosefs/v20220519/model/LoadTaskCreationAttrs.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Goosefs::V20220519::Model;
using namespace std;

LoadTaskCreationAttrs::LoadTaskCreationAttrs() :
    m_taskTypeHasBeenSet(false),
    m_priorityHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_metadataLoadAttrsHasBeenSet(false),
    m_distributedLoadAttrsHasBeenSet(false),
    m_reportPathHasBeenSet(false)
{
}

CoreInternalOutcome LoadTaskCreationAttrs::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskType") && !value["TaskType"].IsNull())
    {
        if (!value["TaskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadTaskCreationAttrs.TaskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskType = string(value["TaskType"].GetString());
        m_taskTypeHasBeenSet = true;
    }

    if (value.HasMember("Priority") && !value["Priority"].IsNull())
    {
        if (!value["Priority"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LoadTaskCreationAttrs.Priority` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_priority = value["Priority"].GetUint64();
        m_priorityHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadTaskCreationAttrs.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("MetadataLoadAttrs") && !value["MetadataLoadAttrs"].IsNull())
    {
        if (!value["MetadataLoadAttrs"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LoadTaskCreationAttrs.MetadataLoadAttrs` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `LoadTaskCreationAttrs.DistributedLoadAttrs` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `LoadTaskCreationAttrs.ReportPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reportPath = string(value["ReportPath"].GetString());
        m_reportPathHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LoadTaskCreationAttrs::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskType.c_str(), allocator).Move(), allocator);
    }

    if (m_priorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Priority";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_priority, allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
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

}


string LoadTaskCreationAttrs::GetTaskType() const
{
    return m_taskType;
}

void LoadTaskCreationAttrs::SetTaskType(const string& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool LoadTaskCreationAttrs::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

uint64_t LoadTaskCreationAttrs::GetPriority() const
{
    return m_priority;
}

void LoadTaskCreationAttrs::SetPriority(const uint64_t& _priority)
{
    m_priority = _priority;
    m_priorityHasBeenSet = true;
}

bool LoadTaskCreationAttrs::PriorityHasBeenSet() const
{
    return m_priorityHasBeenSet;
}

string LoadTaskCreationAttrs::GetDescription() const
{
    return m_description;
}

void LoadTaskCreationAttrs::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool LoadTaskCreationAttrs::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

MetadataLoadAttrs LoadTaskCreationAttrs::GetMetadataLoadAttrs() const
{
    return m_metadataLoadAttrs;
}

void LoadTaskCreationAttrs::SetMetadataLoadAttrs(const MetadataLoadAttrs& _metadataLoadAttrs)
{
    m_metadataLoadAttrs = _metadataLoadAttrs;
    m_metadataLoadAttrsHasBeenSet = true;
}

bool LoadTaskCreationAttrs::MetadataLoadAttrsHasBeenSet() const
{
    return m_metadataLoadAttrsHasBeenSet;
}

DistributedLoadAttrs LoadTaskCreationAttrs::GetDistributedLoadAttrs() const
{
    return m_distributedLoadAttrs;
}

void LoadTaskCreationAttrs::SetDistributedLoadAttrs(const DistributedLoadAttrs& _distributedLoadAttrs)
{
    m_distributedLoadAttrs = _distributedLoadAttrs;
    m_distributedLoadAttrsHasBeenSet = true;
}

bool LoadTaskCreationAttrs::DistributedLoadAttrsHasBeenSet() const
{
    return m_distributedLoadAttrsHasBeenSet;
}

string LoadTaskCreationAttrs::GetReportPath() const
{
    return m_reportPath;
}

void LoadTaskCreationAttrs::SetReportPath(const string& _reportPath)
{
    m_reportPath = _reportPath;
    m_reportPathHasBeenSet = true;
}

bool LoadTaskCreationAttrs::ReportPathHasBeenSet() const
{
    return m_reportPathHasBeenSet;
}

