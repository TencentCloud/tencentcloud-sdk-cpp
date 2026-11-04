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

#include <tencentcloud/tione/v20211111/model/DescribeWorkspaceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

DescribeWorkspaceRequest::DescribeWorkspaceRequest() :
    m_tiProjectIdHasBeenSet(false),
    m_withRunningTasksHasBeenSet(false),
    m_withMembersHasBeenSet(false)
{
}

string DescribeWorkspaceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_tiProjectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TiProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tiProjectId.c_str(), allocator).Move(), allocator);
    }

    if (m_withRunningTasksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WithRunningTasks";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_withRunningTasks, allocator);
    }

    if (m_withMembersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WithMembers";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_withMembers, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeWorkspaceRequest::GetTiProjectId() const
{
    return m_tiProjectId;
}

void DescribeWorkspaceRequest::SetTiProjectId(const string& _tiProjectId)
{
    m_tiProjectId = _tiProjectId;
    m_tiProjectIdHasBeenSet = true;
}

bool DescribeWorkspaceRequest::TiProjectIdHasBeenSet() const
{
    return m_tiProjectIdHasBeenSet;
}

bool DescribeWorkspaceRequest::GetWithRunningTasks() const
{
    return m_withRunningTasks;
}

void DescribeWorkspaceRequest::SetWithRunningTasks(const bool& _withRunningTasks)
{
    m_withRunningTasks = _withRunningTasks;
    m_withRunningTasksHasBeenSet = true;
}

bool DescribeWorkspaceRequest::WithRunningTasksHasBeenSet() const
{
    return m_withRunningTasksHasBeenSet;
}

bool DescribeWorkspaceRequest::GetWithMembers() const
{
    return m_withMembers;
}

void DescribeWorkspaceRequest::SetWithMembers(const bool& _withMembers)
{
    m_withMembers = _withMembers;
    m_withMembersHasBeenSet = true;
}

bool DescribeWorkspaceRequest::WithMembersHasBeenSet() const
{
    return m_withMembersHasBeenSet;
}


