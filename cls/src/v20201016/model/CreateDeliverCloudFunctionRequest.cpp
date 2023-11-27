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

#include <tencentcloud/cls/v20201016/model/CreateDeliverCloudFunctionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

CreateDeliverCloudFunctionRequest::CreateDeliverCloudFunctionRequest() :
    m_topicIdHasBeenSet(false),
    m_functionNameHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_qualifierHasBeenSet(false),
    m_timeoutHasBeenSet(false),
    m_maxMsgNumHasBeenSet(false)
{
}

string CreateDeliverCloudFunctionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_topicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_topicId.c_str(), allocator).Move(), allocator);
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

    if (m_qualifierHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Qualifier";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_qualifier.c_str(), allocator).Move(), allocator);
    }

    if (m_timeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timeout";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_timeout, allocator);
    }

    if (m_maxMsgNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxMsgNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxMsgNum, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateDeliverCloudFunctionRequest::GetTopicId() const
{
    return m_topicId;
}

void CreateDeliverCloudFunctionRequest::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool CreateDeliverCloudFunctionRequest::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

string CreateDeliverCloudFunctionRequest::GetFunctionName() const
{
    return m_functionName;
}

void CreateDeliverCloudFunctionRequest::SetFunctionName(const string& _functionName)
{
    m_functionName = _functionName;
    m_functionNameHasBeenSet = true;
}

bool CreateDeliverCloudFunctionRequest::FunctionNameHasBeenSet() const
{
    return m_functionNameHasBeenSet;
}

string CreateDeliverCloudFunctionRequest::GetNamespace() const
{
    return m_namespace;
}

void CreateDeliverCloudFunctionRequest::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool CreateDeliverCloudFunctionRequest::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string CreateDeliverCloudFunctionRequest::GetQualifier() const
{
    return m_qualifier;
}

void CreateDeliverCloudFunctionRequest::SetQualifier(const string& _qualifier)
{
    m_qualifier = _qualifier;
    m_qualifierHasBeenSet = true;
}

bool CreateDeliverCloudFunctionRequest::QualifierHasBeenSet() const
{
    return m_qualifierHasBeenSet;
}

uint64_t CreateDeliverCloudFunctionRequest::GetTimeout() const
{
    return m_timeout;
}

void CreateDeliverCloudFunctionRequest::SetTimeout(const uint64_t& _timeout)
{
    m_timeout = _timeout;
    m_timeoutHasBeenSet = true;
}

bool CreateDeliverCloudFunctionRequest::TimeoutHasBeenSet() const
{
    return m_timeoutHasBeenSet;
}

uint64_t CreateDeliverCloudFunctionRequest::GetMaxMsgNum() const
{
    return m_maxMsgNum;
}

void CreateDeliverCloudFunctionRequest::SetMaxMsgNum(const uint64_t& _maxMsgNum)
{
    m_maxMsgNum = _maxMsgNum;
    m_maxMsgNumHasBeenSet = true;
}

bool CreateDeliverCloudFunctionRequest::MaxMsgNumHasBeenSet() const
{
    return m_maxMsgNumHasBeenSet;
}


