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

#include <tencentcloud/trocket/v20230308/model/DoHealthCheckOnMigratingTopicRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Trocket::V20230308::Model;
using namespace std;

DoHealthCheckOnMigratingTopicRequest::DoHealthCheckOnMigratingTopicRequest() :
    m_taskIdHasBeenSet(false),
    m_topicNameHasBeenSet(false),
    m_ignoreCheckHasBeenSet(false),
    m_namespaceHasBeenSet(false)
{
}

string DoHealthCheckOnMigratingTopicRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_topicNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_topicName.c_str(), allocator).Move(), allocator);
    }

    if (m_ignoreCheckHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IgnoreCheck";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ignoreCheck, allocator);
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


string DoHealthCheckOnMigratingTopicRequest::GetTaskId() const
{
    return m_taskId;
}

void DoHealthCheckOnMigratingTopicRequest::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool DoHealthCheckOnMigratingTopicRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string DoHealthCheckOnMigratingTopicRequest::GetTopicName() const
{
    return m_topicName;
}

void DoHealthCheckOnMigratingTopicRequest::SetTopicName(const string& _topicName)
{
    m_topicName = _topicName;
    m_topicNameHasBeenSet = true;
}

bool DoHealthCheckOnMigratingTopicRequest::TopicNameHasBeenSet() const
{
    return m_topicNameHasBeenSet;
}

bool DoHealthCheckOnMigratingTopicRequest::GetIgnoreCheck() const
{
    return m_ignoreCheck;
}

void DoHealthCheckOnMigratingTopicRequest::SetIgnoreCheck(const bool& _ignoreCheck)
{
    m_ignoreCheck = _ignoreCheck;
    m_ignoreCheckHasBeenSet = true;
}

bool DoHealthCheckOnMigratingTopicRequest::IgnoreCheckHasBeenSet() const
{
    return m_ignoreCheckHasBeenSet;
}

string DoHealthCheckOnMigratingTopicRequest::GetNamespace() const
{
    return m_namespace;
}

void DoHealthCheckOnMigratingTopicRequest::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool DoHealthCheckOnMigratingTopicRequest::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}


