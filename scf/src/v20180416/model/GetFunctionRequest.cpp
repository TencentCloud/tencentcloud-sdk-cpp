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

#include <tencentcloud/scf/v20180416/model/GetFunctionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Scf::V20180416::Model;
using namespace rapidjson;
using namespace std;

GetFunctionRequest::GetFunctionRequest() :
    m_functionNameHasBeenSet(false),
    m_qualifierHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_showCodeHasBeenSet(false)
{
}

string GetFunctionRequest::ToJsonString() const
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

    if (m_qualifierHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Qualifier";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_qualifier.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_showCodeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ShowCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_showCode.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GetFunctionRequest::GetFunctionName() const
{
    return m_functionName;
}

void GetFunctionRequest::SetFunctionName(const string& _functionName)
{
    m_functionName = _functionName;
    m_functionNameHasBeenSet = true;
}

bool GetFunctionRequest::FunctionNameHasBeenSet() const
{
    return m_functionNameHasBeenSet;
}

string GetFunctionRequest::GetQualifier() const
{
    return m_qualifier;
}

void GetFunctionRequest::SetQualifier(const string& _qualifier)
{
    m_qualifier = _qualifier;
    m_qualifierHasBeenSet = true;
}

bool GetFunctionRequest::QualifierHasBeenSet() const
{
    return m_qualifierHasBeenSet;
}

string GetFunctionRequest::GetNamespace() const
{
    return m_namespace;
}

void GetFunctionRequest::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool GetFunctionRequest::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string GetFunctionRequest::GetShowCode() const
{
    return m_showCode;
}

void GetFunctionRequest::SetShowCode(const string& _showCode)
{
    m_showCode = _showCode;
    m_showCodeHasBeenSet = true;
}

bool GetFunctionRequest::ShowCodeHasBeenSet() const
{
    return m_showCodeHasBeenSet;
}


