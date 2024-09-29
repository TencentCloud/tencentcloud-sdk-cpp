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

#include <tencentcloud/teo/v20220901/model/HandleFunctionRuntimeEnvironmentRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

HandleFunctionRuntimeEnvironmentRequest::HandleFunctionRuntimeEnvironmentRequest() :
    m_zoneIdHasBeenSet(false),
    m_functionIdHasBeenSet(false),
    m_operationHasBeenSet(false),
    m_environmentVariablesHasBeenSet(false)
{
}

string HandleFunctionRuntimeEnvironmentRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_functionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FunctionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_functionId.c_str(), allocator).Move(), allocator);
    }

    if (m_operationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operation";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_operation.c_str(), allocator).Move(), allocator);
    }

    if (m_environmentVariablesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvironmentVariables";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_environmentVariables.begin(); itr != m_environmentVariables.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string HandleFunctionRuntimeEnvironmentRequest::GetZoneId() const
{
    return m_zoneId;
}

void HandleFunctionRuntimeEnvironmentRequest::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool HandleFunctionRuntimeEnvironmentRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string HandleFunctionRuntimeEnvironmentRequest::GetFunctionId() const
{
    return m_functionId;
}

void HandleFunctionRuntimeEnvironmentRequest::SetFunctionId(const string& _functionId)
{
    m_functionId = _functionId;
    m_functionIdHasBeenSet = true;
}

bool HandleFunctionRuntimeEnvironmentRequest::FunctionIdHasBeenSet() const
{
    return m_functionIdHasBeenSet;
}

string HandleFunctionRuntimeEnvironmentRequest::GetOperation() const
{
    return m_operation;
}

void HandleFunctionRuntimeEnvironmentRequest::SetOperation(const string& _operation)
{
    m_operation = _operation;
    m_operationHasBeenSet = true;
}

bool HandleFunctionRuntimeEnvironmentRequest::OperationHasBeenSet() const
{
    return m_operationHasBeenSet;
}

vector<FunctionEnvironmentVariable> HandleFunctionRuntimeEnvironmentRequest::GetEnvironmentVariables() const
{
    return m_environmentVariables;
}

void HandleFunctionRuntimeEnvironmentRequest::SetEnvironmentVariables(const vector<FunctionEnvironmentVariable>& _environmentVariables)
{
    m_environmentVariables = _environmentVariables;
    m_environmentVariablesHasBeenSet = true;
}

bool HandleFunctionRuntimeEnvironmentRequest::EnvironmentVariablesHasBeenSet() const
{
    return m_environmentVariablesHasBeenSet;
}


