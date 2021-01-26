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

#include <tencentcloud/scf/v20180416/model/TerminateAsyncEventRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Scf::V20180416::Model;
using namespace rapidjson;
using namespace std;

TerminateAsyncEventRequest::TerminateAsyncEventRequest() :
    m_functionNameHasBeenSet(false),
    m_invokeRequestIdHasBeenSet(false),
    m_namespaceHasBeenSet(false)
{
}

string TerminateAsyncEventRequest::ToJsonString() const
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

    if (m_invokeRequestIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InvokeRequestId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_invokeRequestId.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_namespace.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string TerminateAsyncEventRequest::GetFunctionName() const
{
    return m_functionName;
}

void TerminateAsyncEventRequest::SetFunctionName(const string& _functionName)
{
    m_functionName = _functionName;
    m_functionNameHasBeenSet = true;
}

bool TerminateAsyncEventRequest::FunctionNameHasBeenSet() const
{
    return m_functionNameHasBeenSet;
}

string TerminateAsyncEventRequest::GetInvokeRequestId() const
{
    return m_invokeRequestId;
}

void TerminateAsyncEventRequest::SetInvokeRequestId(const string& _invokeRequestId)
{
    m_invokeRequestId = _invokeRequestId;
    m_invokeRequestIdHasBeenSet = true;
}

bool TerminateAsyncEventRequest::InvokeRequestIdHasBeenSet() const
{
    return m_invokeRequestIdHasBeenSet;
}

string TerminateAsyncEventRequest::GetNamespace() const
{
    return m_namespace;
}

void TerminateAsyncEventRequest::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool TerminateAsyncEventRequest::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}


