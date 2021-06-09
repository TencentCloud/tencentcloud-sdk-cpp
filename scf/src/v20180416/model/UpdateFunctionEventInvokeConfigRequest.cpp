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

#include <tencentcloud/scf/v20180416/model/UpdateFunctionEventInvokeConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Scf::V20180416::Model;
using namespace std;

UpdateFunctionEventInvokeConfigRequest::UpdateFunctionEventInvokeConfigRequest() :
    m_asyncTriggerConfigHasBeenSet(false),
    m_functionNameHasBeenSet(false),
    m_namespaceHasBeenSet(false)
{
}

string UpdateFunctionEventInvokeConfigRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_asyncTriggerConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AsyncTriggerConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_asyncTriggerConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_functionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FunctionName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_functionName.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


AsyncTriggerConfig UpdateFunctionEventInvokeConfigRequest::GetAsyncTriggerConfig() const
{
    return m_asyncTriggerConfig;
}

void UpdateFunctionEventInvokeConfigRequest::SetAsyncTriggerConfig(const AsyncTriggerConfig& _asyncTriggerConfig)
{
    m_asyncTriggerConfig = _asyncTriggerConfig;
    m_asyncTriggerConfigHasBeenSet = true;
}

bool UpdateFunctionEventInvokeConfigRequest::AsyncTriggerConfigHasBeenSet() const
{
    return m_asyncTriggerConfigHasBeenSet;
}

string UpdateFunctionEventInvokeConfigRequest::GetFunctionName() const
{
    return m_functionName;
}

void UpdateFunctionEventInvokeConfigRequest::SetFunctionName(const string& _functionName)
{
    m_functionName = _functionName;
    m_functionNameHasBeenSet = true;
}

bool UpdateFunctionEventInvokeConfigRequest::FunctionNameHasBeenSet() const
{
    return m_functionNameHasBeenSet;
}

string UpdateFunctionEventInvokeConfigRequest::GetNamespace() const
{
    return m_namespace;
}

void UpdateFunctionEventInvokeConfigRequest::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool UpdateFunctionEventInvokeConfigRequest::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}


