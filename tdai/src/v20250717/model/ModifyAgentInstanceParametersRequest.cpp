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

#include <tencentcloud/tdai/v20250717/model/ModifyAgentInstanceParametersRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdai::V20250717::Model;
using namespace std;

ModifyAgentInstanceParametersRequest::ModifyAgentInstanceParametersRequest() :
    m_instanceIdHasBeenSet(false),
    m_taskTypeHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_sqlAgentParameterHasBeenSet(false)
{
}

string ModifyAgentInstanceParametersRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskType.c_str(), allocator).Move(), allocator);
    }

    if (m_parametersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Parameters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_parameters.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_sqlAgentParameterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SqlAgentParameter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sqlAgentParameter.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyAgentInstanceParametersRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyAgentInstanceParametersRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyAgentInstanceParametersRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ModifyAgentInstanceParametersRequest::GetTaskType() const
{
    return m_taskType;
}

void ModifyAgentInstanceParametersRequest::SetTaskType(const string& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool ModifyAgentInstanceParametersRequest::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

Parameter ModifyAgentInstanceParametersRequest::GetParameters() const
{
    return m_parameters;
}

void ModifyAgentInstanceParametersRequest::SetParameters(const Parameter& _parameters)
{
    m_parameters = _parameters;
    m_parametersHasBeenSet = true;
}

bool ModifyAgentInstanceParametersRequest::ParametersHasBeenSet() const
{
    return m_parametersHasBeenSet;
}

SqlAgentParameter ModifyAgentInstanceParametersRequest::GetSqlAgentParameter() const
{
    return m_sqlAgentParameter;
}

void ModifyAgentInstanceParametersRequest::SetSqlAgentParameter(const SqlAgentParameter& _sqlAgentParameter)
{
    m_sqlAgentParameter = _sqlAgentParameter;
    m_sqlAgentParameterHasBeenSet = true;
}

bool ModifyAgentInstanceParametersRequest::SqlAgentParameterHasBeenSet() const
{
    return m_sqlAgentParameterHasBeenSet;
}


