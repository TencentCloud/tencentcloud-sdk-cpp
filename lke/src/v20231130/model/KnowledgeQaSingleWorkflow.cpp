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

#include <tencentcloud/lke/v20231130/model/KnowledgeQaSingleWorkflow.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

KnowledgeQaSingleWorkflow::KnowledgeQaSingleWorkflow() :
    m_workflowIdHasBeenSet(false),
    m_workflowNameHasBeenSet(false),
    m_workflowDescHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_isEnableHasBeenSet(false),
    m_asyncWorkflowHasBeenSet(false)
{
}

CoreInternalOutcome KnowledgeQaSingleWorkflow::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WorkflowId") && !value["WorkflowId"].IsNull())
    {
        if (!value["WorkflowId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeQaSingleWorkflow.WorkflowId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowId = string(value["WorkflowId"].GetString());
        m_workflowIdHasBeenSet = true;
    }

    if (value.HasMember("WorkflowName") && !value["WorkflowName"].IsNull())
    {
        if (!value["WorkflowName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeQaSingleWorkflow.WorkflowName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowName = string(value["WorkflowName"].GetString());
        m_workflowNameHasBeenSet = true;
    }

    if (value.HasMember("WorkflowDesc") && !value["WorkflowDesc"].IsNull())
    {
        if (!value["WorkflowDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeQaSingleWorkflow.WorkflowDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowDesc = string(value["WorkflowDesc"].GetString());
        m_workflowDescHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeQaSingleWorkflow.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("IsEnable") && !value["IsEnable"].IsNull())
    {
        if (!value["IsEnable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeQaSingleWorkflow.IsEnable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isEnable = value["IsEnable"].GetBool();
        m_isEnableHasBeenSet = true;
    }

    if (value.HasMember("AsyncWorkflow") && !value["AsyncWorkflow"].IsNull())
    {
        if (!value["AsyncWorkflow"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeQaSingleWorkflow.AsyncWorkflow` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_asyncWorkflow = value["AsyncWorkflow"].GetBool();
        m_asyncWorkflowHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KnowledgeQaSingleWorkflow::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_asyncWorkflowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AsyncWorkflow";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_asyncWorkflow, allocator);
    }

}


string KnowledgeQaSingleWorkflow::GetWorkflowId() const
{
    return m_workflowId;
}

void KnowledgeQaSingleWorkflow::SetWorkflowId(const string& _workflowId)
{
    m_workflowId = _workflowId;
    m_workflowIdHasBeenSet = true;
}

bool KnowledgeQaSingleWorkflow::WorkflowIdHasBeenSet() const
{
    return m_workflowIdHasBeenSet;
}

string KnowledgeQaSingleWorkflow::GetWorkflowName() const
{
    return m_workflowName;
}

void KnowledgeQaSingleWorkflow::SetWorkflowName(const string& _workflowName)
{
    m_workflowName = _workflowName;
    m_workflowNameHasBeenSet = true;
}

bool KnowledgeQaSingleWorkflow::WorkflowNameHasBeenSet() const
{
    return m_workflowNameHasBeenSet;
}

string KnowledgeQaSingleWorkflow::GetWorkflowDesc() const
{
    return m_workflowDesc;
}

void KnowledgeQaSingleWorkflow::SetWorkflowDesc(const string& _workflowDesc)
{
    m_workflowDesc = _workflowDesc;
    m_workflowDescHasBeenSet = true;
}

bool KnowledgeQaSingleWorkflow::WorkflowDescHasBeenSet() const
{
    return m_workflowDescHasBeenSet;
}

string KnowledgeQaSingleWorkflow::GetStatus() const
{
    return m_status;
}

void KnowledgeQaSingleWorkflow::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool KnowledgeQaSingleWorkflow::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

bool KnowledgeQaSingleWorkflow::GetIsEnable() const
{
    return m_isEnable;
}

void KnowledgeQaSingleWorkflow::SetIsEnable(const bool& _isEnable)
{
    m_isEnable = _isEnable;
    m_isEnableHasBeenSet = true;
}

bool KnowledgeQaSingleWorkflow::IsEnableHasBeenSet() const
{
    return m_isEnableHasBeenSet;
}

bool KnowledgeQaSingleWorkflow::GetAsyncWorkflow() const
{
    return m_asyncWorkflow;
}

void KnowledgeQaSingleWorkflow::SetAsyncWorkflow(const bool& _asyncWorkflow)
{
    m_asyncWorkflow = _asyncWorkflow;
    m_asyncWorkflowHasBeenSet = true;
}

bool KnowledgeQaSingleWorkflow::AsyncWorkflowHasBeenSet() const
{
    return m_asyncWorkflowHasBeenSet;
}

