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

#include <tencentcloud/wedata/v20210820/model/LinkOpsDto.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

LinkOpsDto::LinkOpsDto() :
    m_idHasBeenSet(false),
    m_linkKeyHasBeenSet(false),
    m_taskFromHasBeenSet(false),
    m_taskToHasBeenSet(false),
    m_inChargeHasBeenSet(false),
    m_linkDependencyTypeHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_linkTypeHasBeenSet(false),
    m_workflowIdHasBeenSet(false)
{
}

CoreInternalOutcome LinkOpsDto::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LinkOpsDto.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("LinkKey") && !value["LinkKey"].IsNull())
    {
        if (!value["LinkKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LinkOpsDto.LinkKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_linkKey = string(value["LinkKey"].GetString());
        m_linkKeyHasBeenSet = true;
    }

    if (value.HasMember("TaskFrom") && !value["TaskFrom"].IsNull())
    {
        if (!value["TaskFrom"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LinkOpsDto.TaskFrom` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskFrom = string(value["TaskFrom"].GetString());
        m_taskFromHasBeenSet = true;
    }

    if (value.HasMember("TaskTo") && !value["TaskTo"].IsNull())
    {
        if (!value["TaskTo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LinkOpsDto.TaskTo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskTo = string(value["TaskTo"].GetString());
        m_taskToHasBeenSet = true;
    }

    if (value.HasMember("InCharge") && !value["InCharge"].IsNull())
    {
        if (!value["InCharge"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LinkOpsDto.InCharge` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inCharge = string(value["InCharge"].GetString());
        m_inChargeHasBeenSet = true;
    }

    if (value.HasMember("LinkDependencyType") && !value["LinkDependencyType"].IsNull())
    {
        if (!value["LinkDependencyType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LinkOpsDto.LinkDependencyType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_linkDependencyType = string(value["LinkDependencyType"].GetString());
        m_linkDependencyTypeHasBeenSet = true;
    }

    if (value.HasMember("Offset") && !value["Offset"].IsNull())
    {
        if (!value["Offset"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LinkOpsDto.Offset` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_offset = string(value["Offset"].GetString());
        m_offsetHasBeenSet = true;
    }

    if (value.HasMember("LinkType") && !value["LinkType"].IsNull())
    {
        if (!value["LinkType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LinkOpsDto.LinkType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_linkType = string(value["LinkType"].GetString());
        m_linkTypeHasBeenSet = true;
    }

    if (value.HasMember("WorkflowId") && !value["WorkflowId"].IsNull())
    {
        if (!value["WorkflowId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LinkOpsDto.WorkflowId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowId = string(value["WorkflowId"].GetString());
        m_workflowIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LinkOpsDto::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_linkKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LinkKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_linkKey.c_str(), allocator).Move(), allocator);
    }

    if (m_taskFromHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskFrom";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskFrom.c_str(), allocator).Move(), allocator);
    }

    if (m_taskToHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskTo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskTo.c_str(), allocator).Move(), allocator);
    }

    if (m_inChargeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InCharge";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inCharge.c_str(), allocator).Move(), allocator);
    }

    if (m_linkDependencyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LinkDependencyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_linkDependencyType.c_str(), allocator).Move(), allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_offset.c_str(), allocator).Move(), allocator);
    }

    if (m_linkTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LinkType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_linkType.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowId.c_str(), allocator).Move(), allocator);
    }

}


string LinkOpsDto::GetId() const
{
    return m_id;
}

void LinkOpsDto::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool LinkOpsDto::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string LinkOpsDto::GetLinkKey() const
{
    return m_linkKey;
}

void LinkOpsDto::SetLinkKey(const string& _linkKey)
{
    m_linkKey = _linkKey;
    m_linkKeyHasBeenSet = true;
}

bool LinkOpsDto::LinkKeyHasBeenSet() const
{
    return m_linkKeyHasBeenSet;
}

string LinkOpsDto::GetTaskFrom() const
{
    return m_taskFrom;
}

void LinkOpsDto::SetTaskFrom(const string& _taskFrom)
{
    m_taskFrom = _taskFrom;
    m_taskFromHasBeenSet = true;
}

bool LinkOpsDto::TaskFromHasBeenSet() const
{
    return m_taskFromHasBeenSet;
}

string LinkOpsDto::GetTaskTo() const
{
    return m_taskTo;
}

void LinkOpsDto::SetTaskTo(const string& _taskTo)
{
    m_taskTo = _taskTo;
    m_taskToHasBeenSet = true;
}

bool LinkOpsDto::TaskToHasBeenSet() const
{
    return m_taskToHasBeenSet;
}

string LinkOpsDto::GetInCharge() const
{
    return m_inCharge;
}

void LinkOpsDto::SetInCharge(const string& _inCharge)
{
    m_inCharge = _inCharge;
    m_inChargeHasBeenSet = true;
}

bool LinkOpsDto::InChargeHasBeenSet() const
{
    return m_inChargeHasBeenSet;
}

string LinkOpsDto::GetLinkDependencyType() const
{
    return m_linkDependencyType;
}

void LinkOpsDto::SetLinkDependencyType(const string& _linkDependencyType)
{
    m_linkDependencyType = _linkDependencyType;
    m_linkDependencyTypeHasBeenSet = true;
}

bool LinkOpsDto::LinkDependencyTypeHasBeenSet() const
{
    return m_linkDependencyTypeHasBeenSet;
}

string LinkOpsDto::GetOffset() const
{
    return m_offset;
}

void LinkOpsDto::SetOffset(const string& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool LinkOpsDto::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string LinkOpsDto::GetLinkType() const
{
    return m_linkType;
}

void LinkOpsDto::SetLinkType(const string& _linkType)
{
    m_linkType = _linkType;
    m_linkTypeHasBeenSet = true;
}

bool LinkOpsDto::LinkTypeHasBeenSet() const
{
    return m_linkTypeHasBeenSet;
}

string LinkOpsDto::GetWorkflowId() const
{
    return m_workflowId;
}

void LinkOpsDto::SetWorkflowId(const string& _workflowId)
{
    m_workflowId = _workflowId;
    m_workflowIdHasBeenSet = true;
}

bool LinkOpsDto::WorkflowIdHasBeenSet() const
{
    return m_workflowIdHasBeenSet;
}

