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

#include <tencentcloud/scf/v20180416/model/CreateFunctionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Scf::V20180416::Model;
using namespace rapidjson;
using namespace std;

CreateFunctionRequest::CreateFunctionRequest() :
    m_functionNameHasBeenSet(false),
    m_codeHasBeenSet(false),
    m_handlerHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_memorySizeHasBeenSet(false),
    m_timeoutHasBeenSet(false),
    m_environmentHasBeenSet(false),
    m_runtimeHasBeenSet(false),
    m_vpcConfigHasBeenSet(false),
    m_clsLogsetIdHasBeenSet(false),
    m_clsTopicIdHasBeenSet(false)
{
}

string CreateFunctionRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_functionNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FunctionName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_functionName.c_str(), allocator).Move(), allocator);
    }

    if (m_codeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Code";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_code.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_handlerHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Handler";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_handler.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_memorySizeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MemorySize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_memorySize, allocator);
    }

    if (m_timeoutHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Timeout";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_timeout, allocator);
    }

    if (m_environmentHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Environment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_environment.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_runtimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Runtime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_runtime.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcConfigHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VpcConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_vpcConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_clsLogsetIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClsLogsetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_clsLogsetId.c_str(), allocator).Move(), allocator);
    }

    if (m_clsTopicIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClsTopicId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_clsTopicId.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateFunctionRequest::GetFunctionName() const
{
    return m_functionName;
}

void CreateFunctionRequest::SetFunctionName(const string& _functionName)
{
    m_functionName = _functionName;
    m_functionNameHasBeenSet = true;
}

bool CreateFunctionRequest::FunctionNameHasBeenSet() const
{
    return m_functionNameHasBeenSet;
}

Code CreateFunctionRequest::GetCode() const
{
    return m_code;
}

void CreateFunctionRequest::SetCode(const Code& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool CreateFunctionRequest::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

string CreateFunctionRequest::GetHandler() const
{
    return m_handler;
}

void CreateFunctionRequest::SetHandler(const string& _handler)
{
    m_handler = _handler;
    m_handlerHasBeenSet = true;
}

bool CreateFunctionRequest::HandlerHasBeenSet() const
{
    return m_handlerHasBeenSet;
}

string CreateFunctionRequest::GetDescription() const
{
    return m_description;
}

void CreateFunctionRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateFunctionRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

int64_t CreateFunctionRequest::GetMemorySize() const
{
    return m_memorySize;
}

void CreateFunctionRequest::SetMemorySize(const int64_t& _memorySize)
{
    m_memorySize = _memorySize;
    m_memorySizeHasBeenSet = true;
}

bool CreateFunctionRequest::MemorySizeHasBeenSet() const
{
    return m_memorySizeHasBeenSet;
}

int64_t CreateFunctionRequest::GetTimeout() const
{
    return m_timeout;
}

void CreateFunctionRequest::SetTimeout(const int64_t& _timeout)
{
    m_timeout = _timeout;
    m_timeoutHasBeenSet = true;
}

bool CreateFunctionRequest::TimeoutHasBeenSet() const
{
    return m_timeoutHasBeenSet;
}

Environment CreateFunctionRequest::GetEnvironment() const
{
    return m_environment;
}

void CreateFunctionRequest::SetEnvironment(const Environment& _environment)
{
    m_environment = _environment;
    m_environmentHasBeenSet = true;
}

bool CreateFunctionRequest::EnvironmentHasBeenSet() const
{
    return m_environmentHasBeenSet;
}

string CreateFunctionRequest::GetRuntime() const
{
    return m_runtime;
}

void CreateFunctionRequest::SetRuntime(const string& _runtime)
{
    m_runtime = _runtime;
    m_runtimeHasBeenSet = true;
}

bool CreateFunctionRequest::RuntimeHasBeenSet() const
{
    return m_runtimeHasBeenSet;
}

VpcConfig CreateFunctionRequest::GetVpcConfig() const
{
    return m_vpcConfig;
}

void CreateFunctionRequest::SetVpcConfig(const VpcConfig& _vpcConfig)
{
    m_vpcConfig = _vpcConfig;
    m_vpcConfigHasBeenSet = true;
}

bool CreateFunctionRequest::VpcConfigHasBeenSet() const
{
    return m_vpcConfigHasBeenSet;
}

string CreateFunctionRequest::GetClsLogsetId() const
{
    return m_clsLogsetId;
}

void CreateFunctionRequest::SetClsLogsetId(const string& _clsLogsetId)
{
    m_clsLogsetId = _clsLogsetId;
    m_clsLogsetIdHasBeenSet = true;
}

bool CreateFunctionRequest::ClsLogsetIdHasBeenSet() const
{
    return m_clsLogsetIdHasBeenSet;
}

string CreateFunctionRequest::GetClsTopicId() const
{
    return m_clsTopicId;
}

void CreateFunctionRequest::SetClsTopicId(const string& _clsTopicId)
{
    m_clsTopicId = _clsTopicId;
    m_clsTopicIdHasBeenSet = true;
}

bool CreateFunctionRequest::ClsTopicIdHasBeenSet() const
{
    return m_clsTopicIdHasBeenSet;
}


