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

#include <tencentcloud/cme/v20191029/model/HandleStreamConnectProjectRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cme::V20191029::Model;
using namespace std;

HandleStreamConnectProjectRequest::HandleStreamConnectProjectRequest() :
    m_platformHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_operationHasBeenSet(false),
    m_inputInfoHasBeenSet(false),
    m_inputEndpointHasBeenSet(false),
    m_outputInfoHasBeenSet(false),
    m_currentStopTimeHasBeenSet(false),
    m_operatorHasBeenSet(false)
{
}

string HandleStreamConnectProjectRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_platformHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Platform";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_platform.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_operationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operation";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_operation.c_str(), allocator).Move(), allocator);
    }

    if (m_inputInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_inputInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_inputEndpointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputEndpoint";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_inputEndpoint.c_str(), allocator).Move(), allocator);
    }

    if (m_outputInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_outputInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_currentStopTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentStopTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_currentStopTime.c_str(), allocator).Move(), allocator);
    }

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_operator.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string HandleStreamConnectProjectRequest::GetPlatform() const
{
    return m_platform;
}

void HandleStreamConnectProjectRequest::SetPlatform(const string& _platform)
{
    m_platform = _platform;
    m_platformHasBeenSet = true;
}

bool HandleStreamConnectProjectRequest::PlatformHasBeenSet() const
{
    return m_platformHasBeenSet;
}

string HandleStreamConnectProjectRequest::GetProjectId() const
{
    return m_projectId;
}

void HandleStreamConnectProjectRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool HandleStreamConnectProjectRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string HandleStreamConnectProjectRequest::GetOperation() const
{
    return m_operation;
}

void HandleStreamConnectProjectRequest::SetOperation(const string& _operation)
{
    m_operation = _operation;
    m_operationHasBeenSet = true;
}

bool HandleStreamConnectProjectRequest::OperationHasBeenSet() const
{
    return m_operationHasBeenSet;
}

StreamInputInfo HandleStreamConnectProjectRequest::GetInputInfo() const
{
    return m_inputInfo;
}

void HandleStreamConnectProjectRequest::SetInputInfo(const StreamInputInfo& _inputInfo)
{
    m_inputInfo = _inputInfo;
    m_inputInfoHasBeenSet = true;
}

bool HandleStreamConnectProjectRequest::InputInfoHasBeenSet() const
{
    return m_inputInfoHasBeenSet;
}

string HandleStreamConnectProjectRequest::GetInputEndpoint() const
{
    return m_inputEndpoint;
}

void HandleStreamConnectProjectRequest::SetInputEndpoint(const string& _inputEndpoint)
{
    m_inputEndpoint = _inputEndpoint;
    m_inputEndpointHasBeenSet = true;
}

bool HandleStreamConnectProjectRequest::InputEndpointHasBeenSet() const
{
    return m_inputEndpointHasBeenSet;
}

StreamConnectOutput HandleStreamConnectProjectRequest::GetOutputInfo() const
{
    return m_outputInfo;
}

void HandleStreamConnectProjectRequest::SetOutputInfo(const StreamConnectOutput& _outputInfo)
{
    m_outputInfo = _outputInfo;
    m_outputInfoHasBeenSet = true;
}

bool HandleStreamConnectProjectRequest::OutputInfoHasBeenSet() const
{
    return m_outputInfoHasBeenSet;
}

string HandleStreamConnectProjectRequest::GetCurrentStopTime() const
{
    return m_currentStopTime;
}

void HandleStreamConnectProjectRequest::SetCurrentStopTime(const string& _currentStopTime)
{
    m_currentStopTime = _currentStopTime;
    m_currentStopTimeHasBeenSet = true;
}

bool HandleStreamConnectProjectRequest::CurrentStopTimeHasBeenSet() const
{
    return m_currentStopTimeHasBeenSet;
}

string HandleStreamConnectProjectRequest::GetOperator() const
{
    return m_operator;
}

void HandleStreamConnectProjectRequest::SetOperator(const string& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool HandleStreamConnectProjectRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}


