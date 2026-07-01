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

#include <tencentcloud/adp/v20260520/model/SingleWorkflowConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

SingleWorkflowConfig::SingleWorkflowConfig() :
    m_asyncWorkflowHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_workflowDescriptionHasBeenSet(false),
    m_workflowIdHasBeenSet(false),
    m_workflowNameHasBeenSet(false),
    m_enabledHasBeenSet(false)
{
}

CoreInternalOutcome SingleWorkflowConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AsyncWorkflow") && !value["AsyncWorkflow"].IsNull())
    {
        if (!value["AsyncWorkflow"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SingleWorkflowConfig.AsyncWorkflow` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_asyncWorkflow = value["AsyncWorkflow"].GetBool();
        m_asyncWorkflowHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SingleWorkflowConfig.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("WorkflowDescription") && !value["WorkflowDescription"].IsNull())
    {
        if (!value["WorkflowDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SingleWorkflowConfig.WorkflowDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowDescription = string(value["WorkflowDescription"].GetString());
        m_workflowDescriptionHasBeenSet = true;
    }

    if (value.HasMember("WorkflowId") && !value["WorkflowId"].IsNull())
    {
        if (!value["WorkflowId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SingleWorkflowConfig.WorkflowId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowId = string(value["WorkflowId"].GetString());
        m_workflowIdHasBeenSet = true;
    }

    if (value.HasMember("WorkflowName") && !value["WorkflowName"].IsNull())
    {
        if (!value["WorkflowName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SingleWorkflowConfig.WorkflowName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowName = string(value["WorkflowName"].GetString());
        m_workflowNameHasBeenSet = true;
    }

    if (value.HasMember("Enabled") && !value["Enabled"].IsNull())
    {
        if (!value["Enabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SingleWorkflowConfig.Enabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = value["Enabled"].GetBool();
        m_enabledHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SingleWorkflowConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_asyncWorkflowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AsyncWorkflow";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_asyncWorkflow, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowDescription.c_str(), allocator).Move(), allocator);
    }

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

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enabled, allocator);
    }

}


bool SingleWorkflowConfig::GetAsyncWorkflow() const
{
    return m_asyncWorkflow;
}

void SingleWorkflowConfig::SetAsyncWorkflow(const bool& _asyncWorkflow)
{
    m_asyncWorkflow = _asyncWorkflow;
    m_asyncWorkflowHasBeenSet = true;
}

bool SingleWorkflowConfig::AsyncWorkflowHasBeenSet() const
{
    return m_asyncWorkflowHasBeenSet;
}

string SingleWorkflowConfig::GetStatus() const
{
    return m_status;
}

void SingleWorkflowConfig::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool SingleWorkflowConfig::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string SingleWorkflowConfig::GetWorkflowDescription() const
{
    return m_workflowDescription;
}

void SingleWorkflowConfig::SetWorkflowDescription(const string& _workflowDescription)
{
    m_workflowDescription = _workflowDescription;
    m_workflowDescriptionHasBeenSet = true;
}

bool SingleWorkflowConfig::WorkflowDescriptionHasBeenSet() const
{
    return m_workflowDescriptionHasBeenSet;
}

string SingleWorkflowConfig::GetWorkflowId() const
{
    return m_workflowId;
}

void SingleWorkflowConfig::SetWorkflowId(const string& _workflowId)
{
    m_workflowId = _workflowId;
    m_workflowIdHasBeenSet = true;
}

bool SingleWorkflowConfig::WorkflowIdHasBeenSet() const
{
    return m_workflowIdHasBeenSet;
}

string SingleWorkflowConfig::GetWorkflowName() const
{
    return m_workflowName;
}

void SingleWorkflowConfig::SetWorkflowName(const string& _workflowName)
{
    m_workflowName = _workflowName;
    m_workflowNameHasBeenSet = true;
}

bool SingleWorkflowConfig::WorkflowNameHasBeenSet() const
{
    return m_workflowNameHasBeenSet;
}

bool SingleWorkflowConfig::GetEnabled() const
{
    return m_enabled;
}

void SingleWorkflowConfig::SetEnabled(const bool& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool SingleWorkflowConfig::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

