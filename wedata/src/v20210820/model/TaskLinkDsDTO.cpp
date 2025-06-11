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

#include <tencentcloud/wedata/v20210820/model/TaskLinkDsDTO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

TaskLinkDsDTO::TaskLinkDsDTO() :
    m_taskToHasBeenSet(false),
    m_taskFromHasBeenSet(false),
    m_linkTypeHasBeenSet(false),
    m_linkKeyHasBeenSet(false),
    m_idHasBeenSet(false),
    m_inChargeHasBeenSet(false),
    m_linkDependencyTypeHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_workflowIdHasBeenSet(false),
    m_realFromTaskIdHasBeenSet(false),
    m_realFromTaskNameHasBeenSet(false),
    m_realFromWorkflowIdHasBeenSet(false),
    m_realFromWorkflowNameHasBeenSet(false),
    m_realProjectIdHasBeenSet(false),
    m_realProjectIdentHasBeenSet(false),
    m_realProjectNameHasBeenSet(false),
    m_curveTypeHasBeenSet(false)
{
}

CoreInternalOutcome TaskLinkDsDTO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskTo") && !value["TaskTo"].IsNull())
    {
        if (!value["TaskTo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskLinkDsDTO.TaskTo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskTo = string(value["TaskTo"].GetString());
        m_taskToHasBeenSet = true;
    }

    if (value.HasMember("TaskFrom") && !value["TaskFrom"].IsNull())
    {
        if (!value["TaskFrom"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskLinkDsDTO.TaskFrom` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskFrom = string(value["TaskFrom"].GetString());
        m_taskFromHasBeenSet = true;
    }

    if (value.HasMember("LinkType") && !value["LinkType"].IsNull())
    {
        if (!value["LinkType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskLinkDsDTO.LinkType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_linkType = string(value["LinkType"].GetString());
        m_linkTypeHasBeenSet = true;
    }

    if (value.HasMember("LinkKey") && !value["LinkKey"].IsNull())
    {
        if (!value["LinkKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskLinkDsDTO.LinkKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_linkKey = string(value["LinkKey"].GetString());
        m_linkKeyHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskLinkDsDTO.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("InCharge") && !value["InCharge"].IsNull())
    {
        if (!value["InCharge"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskLinkDsDTO.InCharge` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inCharge = string(value["InCharge"].GetString());
        m_inChargeHasBeenSet = true;
    }

    if (value.HasMember("LinkDependencyType") && !value["LinkDependencyType"].IsNull())
    {
        if (!value["LinkDependencyType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskLinkDsDTO.LinkDependencyType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_linkDependencyType = string(value["LinkDependencyType"].GetString());
        m_linkDependencyTypeHasBeenSet = true;
    }

    if (value.HasMember("Offset") && !value["Offset"].IsNull())
    {
        if (!value["Offset"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskLinkDsDTO.Offset` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_offset = value["Offset"].GetInt64();
        m_offsetHasBeenSet = true;
    }

    if (value.HasMember("WorkflowId") && !value["WorkflowId"].IsNull())
    {
        if (!value["WorkflowId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskLinkDsDTO.WorkflowId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowId = string(value["WorkflowId"].GetString());
        m_workflowIdHasBeenSet = true;
    }

    if (value.HasMember("RealFromTaskId") && !value["RealFromTaskId"].IsNull())
    {
        if (!value["RealFromTaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskLinkDsDTO.RealFromTaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_realFromTaskId = string(value["RealFromTaskId"].GetString());
        m_realFromTaskIdHasBeenSet = true;
    }

    if (value.HasMember("RealFromTaskName") && !value["RealFromTaskName"].IsNull())
    {
        if (!value["RealFromTaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskLinkDsDTO.RealFromTaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_realFromTaskName = string(value["RealFromTaskName"].GetString());
        m_realFromTaskNameHasBeenSet = true;
    }

    if (value.HasMember("RealFromWorkflowId") && !value["RealFromWorkflowId"].IsNull())
    {
        if (!value["RealFromWorkflowId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskLinkDsDTO.RealFromWorkflowId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_realFromWorkflowId = string(value["RealFromWorkflowId"].GetString());
        m_realFromWorkflowIdHasBeenSet = true;
    }

    if (value.HasMember("RealFromWorkflowName") && !value["RealFromWorkflowName"].IsNull())
    {
        if (!value["RealFromWorkflowName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskLinkDsDTO.RealFromWorkflowName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_realFromWorkflowName = string(value["RealFromWorkflowName"].GetString());
        m_realFromWorkflowNameHasBeenSet = true;
    }

    if (value.HasMember("RealProjectId") && !value["RealProjectId"].IsNull())
    {
        if (!value["RealProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskLinkDsDTO.RealProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_realProjectId = string(value["RealProjectId"].GetString());
        m_realProjectIdHasBeenSet = true;
    }

    if (value.HasMember("RealProjectIdent") && !value["RealProjectIdent"].IsNull())
    {
        if (!value["RealProjectIdent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskLinkDsDTO.RealProjectIdent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_realProjectIdent = string(value["RealProjectIdent"].GetString());
        m_realProjectIdentHasBeenSet = true;
    }

    if (value.HasMember("RealProjectName") && !value["RealProjectName"].IsNull())
    {
        if (!value["RealProjectName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskLinkDsDTO.RealProjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_realProjectName = string(value["RealProjectName"].GetString());
        m_realProjectNameHasBeenSet = true;
    }

    if (value.HasMember("CurveType") && !value["CurveType"].IsNull())
    {
        if (!value["CurveType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskLinkDsDTO.CurveType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_curveType = string(value["CurveType"].GetString());
        m_curveTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskLinkDsDTO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskToHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskTo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskTo.c_str(), allocator).Move(), allocator);
    }

    if (m_taskFromHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskFrom";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskFrom.c_str(), allocator).Move(), allocator);
    }

    if (m_linkTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LinkType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_linkType.c_str(), allocator).Move(), allocator);
    }

    if (m_linkKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LinkKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_linkKey.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
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
        value.AddMember(iKey, m_offset, allocator);
    }

    if (m_workflowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowId.c_str(), allocator).Move(), allocator);
    }

    if (m_realFromTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealFromTaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_realFromTaskId.c_str(), allocator).Move(), allocator);
    }

    if (m_realFromTaskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealFromTaskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_realFromTaskName.c_str(), allocator).Move(), allocator);
    }

    if (m_realFromWorkflowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealFromWorkflowId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_realFromWorkflowId.c_str(), allocator).Move(), allocator);
    }

    if (m_realFromWorkflowNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealFromWorkflowName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_realFromWorkflowName.c_str(), allocator).Move(), allocator);
    }

    if (m_realProjectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_realProjectId.c_str(), allocator).Move(), allocator);
    }

    if (m_realProjectIdentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealProjectIdent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_realProjectIdent.c_str(), allocator).Move(), allocator);
    }

    if (m_realProjectNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealProjectName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_realProjectName.c_str(), allocator).Move(), allocator);
    }

    if (m_curveTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurveType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_curveType.c_str(), allocator).Move(), allocator);
    }

}


string TaskLinkDsDTO::GetTaskTo() const
{
    return m_taskTo;
}

void TaskLinkDsDTO::SetTaskTo(const string& _taskTo)
{
    m_taskTo = _taskTo;
    m_taskToHasBeenSet = true;
}

bool TaskLinkDsDTO::TaskToHasBeenSet() const
{
    return m_taskToHasBeenSet;
}

string TaskLinkDsDTO::GetTaskFrom() const
{
    return m_taskFrom;
}

void TaskLinkDsDTO::SetTaskFrom(const string& _taskFrom)
{
    m_taskFrom = _taskFrom;
    m_taskFromHasBeenSet = true;
}

bool TaskLinkDsDTO::TaskFromHasBeenSet() const
{
    return m_taskFromHasBeenSet;
}

string TaskLinkDsDTO::GetLinkType() const
{
    return m_linkType;
}

void TaskLinkDsDTO::SetLinkType(const string& _linkType)
{
    m_linkType = _linkType;
    m_linkTypeHasBeenSet = true;
}

bool TaskLinkDsDTO::LinkTypeHasBeenSet() const
{
    return m_linkTypeHasBeenSet;
}

string TaskLinkDsDTO::GetLinkKey() const
{
    return m_linkKey;
}

void TaskLinkDsDTO::SetLinkKey(const string& _linkKey)
{
    m_linkKey = _linkKey;
    m_linkKeyHasBeenSet = true;
}

bool TaskLinkDsDTO::LinkKeyHasBeenSet() const
{
    return m_linkKeyHasBeenSet;
}

string TaskLinkDsDTO::GetId() const
{
    return m_id;
}

void TaskLinkDsDTO::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool TaskLinkDsDTO::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string TaskLinkDsDTO::GetInCharge() const
{
    return m_inCharge;
}

void TaskLinkDsDTO::SetInCharge(const string& _inCharge)
{
    m_inCharge = _inCharge;
    m_inChargeHasBeenSet = true;
}

bool TaskLinkDsDTO::InChargeHasBeenSet() const
{
    return m_inChargeHasBeenSet;
}

string TaskLinkDsDTO::GetLinkDependencyType() const
{
    return m_linkDependencyType;
}

void TaskLinkDsDTO::SetLinkDependencyType(const string& _linkDependencyType)
{
    m_linkDependencyType = _linkDependencyType;
    m_linkDependencyTypeHasBeenSet = true;
}

bool TaskLinkDsDTO::LinkDependencyTypeHasBeenSet() const
{
    return m_linkDependencyTypeHasBeenSet;
}

int64_t TaskLinkDsDTO::GetOffset() const
{
    return m_offset;
}

void TaskLinkDsDTO::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool TaskLinkDsDTO::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string TaskLinkDsDTO::GetWorkflowId() const
{
    return m_workflowId;
}

void TaskLinkDsDTO::SetWorkflowId(const string& _workflowId)
{
    m_workflowId = _workflowId;
    m_workflowIdHasBeenSet = true;
}

bool TaskLinkDsDTO::WorkflowIdHasBeenSet() const
{
    return m_workflowIdHasBeenSet;
}

string TaskLinkDsDTO::GetRealFromTaskId() const
{
    return m_realFromTaskId;
}

void TaskLinkDsDTO::SetRealFromTaskId(const string& _realFromTaskId)
{
    m_realFromTaskId = _realFromTaskId;
    m_realFromTaskIdHasBeenSet = true;
}

bool TaskLinkDsDTO::RealFromTaskIdHasBeenSet() const
{
    return m_realFromTaskIdHasBeenSet;
}

string TaskLinkDsDTO::GetRealFromTaskName() const
{
    return m_realFromTaskName;
}

void TaskLinkDsDTO::SetRealFromTaskName(const string& _realFromTaskName)
{
    m_realFromTaskName = _realFromTaskName;
    m_realFromTaskNameHasBeenSet = true;
}

bool TaskLinkDsDTO::RealFromTaskNameHasBeenSet() const
{
    return m_realFromTaskNameHasBeenSet;
}

string TaskLinkDsDTO::GetRealFromWorkflowId() const
{
    return m_realFromWorkflowId;
}

void TaskLinkDsDTO::SetRealFromWorkflowId(const string& _realFromWorkflowId)
{
    m_realFromWorkflowId = _realFromWorkflowId;
    m_realFromWorkflowIdHasBeenSet = true;
}

bool TaskLinkDsDTO::RealFromWorkflowIdHasBeenSet() const
{
    return m_realFromWorkflowIdHasBeenSet;
}

string TaskLinkDsDTO::GetRealFromWorkflowName() const
{
    return m_realFromWorkflowName;
}

void TaskLinkDsDTO::SetRealFromWorkflowName(const string& _realFromWorkflowName)
{
    m_realFromWorkflowName = _realFromWorkflowName;
    m_realFromWorkflowNameHasBeenSet = true;
}

bool TaskLinkDsDTO::RealFromWorkflowNameHasBeenSet() const
{
    return m_realFromWorkflowNameHasBeenSet;
}

string TaskLinkDsDTO::GetRealProjectId() const
{
    return m_realProjectId;
}

void TaskLinkDsDTO::SetRealProjectId(const string& _realProjectId)
{
    m_realProjectId = _realProjectId;
    m_realProjectIdHasBeenSet = true;
}

bool TaskLinkDsDTO::RealProjectIdHasBeenSet() const
{
    return m_realProjectIdHasBeenSet;
}

string TaskLinkDsDTO::GetRealProjectIdent() const
{
    return m_realProjectIdent;
}

void TaskLinkDsDTO::SetRealProjectIdent(const string& _realProjectIdent)
{
    m_realProjectIdent = _realProjectIdent;
    m_realProjectIdentHasBeenSet = true;
}

bool TaskLinkDsDTO::RealProjectIdentHasBeenSet() const
{
    return m_realProjectIdentHasBeenSet;
}

string TaskLinkDsDTO::GetRealProjectName() const
{
    return m_realProjectName;
}

void TaskLinkDsDTO::SetRealProjectName(const string& _realProjectName)
{
    m_realProjectName = _realProjectName;
    m_realProjectNameHasBeenSet = true;
}

bool TaskLinkDsDTO::RealProjectNameHasBeenSet() const
{
    return m_realProjectNameHasBeenSet;
}

string TaskLinkDsDTO::GetCurveType() const
{
    return m_curveType;
}

void TaskLinkDsDTO::SetCurveType(const string& _curveType)
{
    m_curveType = _curveType;
    m_curveTypeHasBeenSet = true;
}

bool TaskLinkDsDTO::CurveTypeHasBeenSet() const
{
    return m_curveTypeHasBeenSet;
}

