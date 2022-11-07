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

#include <tencentcloud/wedata/v20210820/model/DescribeIntegrationVersionNodesInfoRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DescribeIntegrationVersionNodesInfoRequest::DescribeIntegrationVersionNodesInfoRequest() :
    m_taskIdHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_taskVersionPathHasBeenSet(false),
    m_taskVersionHasBeenSet(false)
{
}

string DescribeIntegrationVersionNodesInfoRequest::ToJsonString() const
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

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskVersionPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskVersionPath";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskVersionPath.c_str(), allocator).Move(), allocator);
    }

    if (m_taskVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskVersion.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeIntegrationVersionNodesInfoRequest::GetTaskId() const
{
    return m_taskId;
}

void DescribeIntegrationVersionNodesInfoRequest::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool DescribeIntegrationVersionNodesInfoRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string DescribeIntegrationVersionNodesInfoRequest::GetProjectId() const
{
    return m_projectId;
}

void DescribeIntegrationVersionNodesInfoRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DescribeIntegrationVersionNodesInfoRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string DescribeIntegrationVersionNodesInfoRequest::GetTaskVersionPath() const
{
    return m_taskVersionPath;
}

void DescribeIntegrationVersionNodesInfoRequest::SetTaskVersionPath(const string& _taskVersionPath)
{
    m_taskVersionPath = _taskVersionPath;
    m_taskVersionPathHasBeenSet = true;
}

bool DescribeIntegrationVersionNodesInfoRequest::TaskVersionPathHasBeenSet() const
{
    return m_taskVersionPathHasBeenSet;
}

string DescribeIntegrationVersionNodesInfoRequest::GetTaskVersion() const
{
    return m_taskVersion;
}

void DescribeIntegrationVersionNodesInfoRequest::SetTaskVersion(const string& _taskVersion)
{
    m_taskVersion = _taskVersion;
    m_taskVersionHasBeenSet = true;
}

bool DescribeIntegrationVersionNodesInfoRequest::TaskVersionHasBeenSet() const
{
    return m_taskVersionHasBeenSet;
}


