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

#include <tencentcloud/adp/v20260520/model/AppTriggerWorkflowExecuteConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

AppTriggerWorkflowExecuteConfig::AppTriggerWorkflowExecuteConfig() :
    m_paramBindingsApiHasBeenSet(false),
    m_paramBindingsWorkflowHasBeenSet(false),
    m_workflowIdHasBeenSet(false),
    m_workflowNameHasBeenSet(false)
{
}

CoreInternalOutcome AppTriggerWorkflowExecuteConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ParamBindingsApi") && !value["ParamBindingsApi"].IsNull())
    {
        if (!value["ParamBindingsApi"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AppTriggerWorkflowExecuteConfig.ParamBindingsApi` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_paramBindingsApi.Deserialize(value["ParamBindingsApi"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_paramBindingsApiHasBeenSet = true;
    }

    if (value.HasMember("ParamBindingsWorkflow") && !value["ParamBindingsWorkflow"].IsNull())
    {
        if (!value["ParamBindingsWorkflow"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AppTriggerWorkflowExecuteConfig.ParamBindingsWorkflow` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_paramBindingsWorkflow.Deserialize(value["ParamBindingsWorkflow"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_paramBindingsWorkflowHasBeenSet = true;
    }

    if (value.HasMember("WorkflowId") && !value["WorkflowId"].IsNull())
    {
        if (!value["WorkflowId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppTriggerWorkflowExecuteConfig.WorkflowId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowId = string(value["WorkflowId"].GetString());
        m_workflowIdHasBeenSet = true;
    }

    if (value.HasMember("WorkflowName") && !value["WorkflowName"].IsNull())
    {
        if (!value["WorkflowName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppTriggerWorkflowExecuteConfig.WorkflowName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowName = string(value["WorkflowName"].GetString());
        m_workflowNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AppTriggerWorkflowExecuteConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_paramBindingsApiHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamBindingsApi";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_paramBindingsApi.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_paramBindingsWorkflowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamBindingsWorkflow";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_paramBindingsWorkflow.ToJsonObject(value[key.c_str()], allocator);
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

}


AppTriggerParamBindingConfig AppTriggerWorkflowExecuteConfig::GetParamBindingsApi() const
{
    return m_paramBindingsApi;
}

void AppTriggerWorkflowExecuteConfig::SetParamBindingsApi(const AppTriggerParamBindingConfig& _paramBindingsApi)
{
    m_paramBindingsApi = _paramBindingsApi;
    m_paramBindingsApiHasBeenSet = true;
}

bool AppTriggerWorkflowExecuteConfig::ParamBindingsApiHasBeenSet() const
{
    return m_paramBindingsApiHasBeenSet;
}

AppTriggerParamBindingConfig AppTriggerWorkflowExecuteConfig::GetParamBindingsWorkflow() const
{
    return m_paramBindingsWorkflow;
}

void AppTriggerWorkflowExecuteConfig::SetParamBindingsWorkflow(const AppTriggerParamBindingConfig& _paramBindingsWorkflow)
{
    m_paramBindingsWorkflow = _paramBindingsWorkflow;
    m_paramBindingsWorkflowHasBeenSet = true;
}

bool AppTriggerWorkflowExecuteConfig::ParamBindingsWorkflowHasBeenSet() const
{
    return m_paramBindingsWorkflowHasBeenSet;
}

string AppTriggerWorkflowExecuteConfig::GetWorkflowId() const
{
    return m_workflowId;
}

void AppTriggerWorkflowExecuteConfig::SetWorkflowId(const string& _workflowId)
{
    m_workflowId = _workflowId;
    m_workflowIdHasBeenSet = true;
}

bool AppTriggerWorkflowExecuteConfig::WorkflowIdHasBeenSet() const
{
    return m_workflowIdHasBeenSet;
}

string AppTriggerWorkflowExecuteConfig::GetWorkflowName() const
{
    return m_workflowName;
}

void AppTriggerWorkflowExecuteConfig::SetWorkflowName(const string& _workflowName)
{
    m_workflowName = _workflowName;
    m_workflowNameHasBeenSet = true;
}

bool AppTriggerWorkflowExecuteConfig::WorkflowNameHasBeenSet() const
{
    return m_workflowNameHasBeenSet;
}

