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

#include <tencentcloud/lke/v20231130/model/KnowledgeQaWorkflowInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

KnowledgeQaWorkflowInfo::KnowledgeQaWorkflowInfo() :
    m_workflowIdHasBeenSet(false),
    m_workflowNameHasBeenSet(false),
    m_workflowDescHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_isEnableHasBeenSet(false)
{
}

CoreInternalOutcome KnowledgeQaWorkflowInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WorkflowId") && !value["WorkflowId"].IsNull())
    {
        if (!value["WorkflowId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeQaWorkflowInfo.WorkflowId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowId = string(value["WorkflowId"].GetString());
        m_workflowIdHasBeenSet = true;
    }

    if (value.HasMember("WorkflowName") && !value["WorkflowName"].IsNull())
    {
        if (!value["WorkflowName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeQaWorkflowInfo.WorkflowName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowName = string(value["WorkflowName"].GetString());
        m_workflowNameHasBeenSet = true;
    }

    if (value.HasMember("WorkflowDesc") && !value["WorkflowDesc"].IsNull())
    {
        if (!value["WorkflowDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeQaWorkflowInfo.WorkflowDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowDesc = string(value["WorkflowDesc"].GetString());
        m_workflowDescHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeQaWorkflowInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("IsEnable") && !value["IsEnable"].IsNull())
    {
        if (!value["IsEnable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeQaWorkflowInfo.IsEnable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isEnable = value["IsEnable"].GetBool();
        m_isEnableHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KnowledgeQaWorkflowInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_workflowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowId.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowName.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_isEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isEnable, allocator);
    }

}


string KnowledgeQaWorkflowInfo::GetWorkflowId() const
{
    return m_workflowId;
}

void KnowledgeQaWorkflowInfo::SetWorkflowId(const string& _workflowId)
{
    m_workflowId = _workflowId;
    m_workflowIdHasBeenSet = true;
}

bool KnowledgeQaWorkflowInfo::WorkflowIdHasBeenSet() const
{
    return m_workflowIdHasBeenSet;
}

string KnowledgeQaWorkflowInfo::GetWorkflowName() const
{
    return m_workflowName;
}

void KnowledgeQaWorkflowInfo::SetWorkflowName(const string& _workflowName)
{
    m_workflowName = _workflowName;
    m_workflowNameHasBeenSet = true;
}

bool KnowledgeQaWorkflowInfo::WorkflowNameHasBeenSet() const
{
    return m_workflowNameHasBeenSet;
}

string KnowledgeQaWorkflowInfo::GetWorkflowDesc() const
{
    return m_workflowDesc;
}

void KnowledgeQaWorkflowInfo::SetWorkflowDesc(const string& _workflowDesc)
{
    m_workflowDesc = _workflowDesc;
    m_workflowDescHasBeenSet = true;
}

bool KnowledgeQaWorkflowInfo::WorkflowDescHasBeenSet() const
{
    return m_workflowDescHasBeenSet;
}

string KnowledgeQaWorkflowInfo::GetStatus() const
{
    return m_status;
}

void KnowledgeQaWorkflowInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool KnowledgeQaWorkflowInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

bool KnowledgeQaWorkflowInfo::GetIsEnable() const
{
    return m_isEnable;
}

void KnowledgeQaWorkflowInfo::SetIsEnable(const bool& _isEnable)
{
    m_isEnable = _isEnable;
    m_isEnableHasBeenSet = true;
}

bool KnowledgeQaWorkflowInfo::IsEnableHasBeenSet() const
{
    return m_isEnableHasBeenSet;
}

