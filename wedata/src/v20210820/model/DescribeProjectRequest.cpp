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

#include <tencentcloud/wedata/v20210820/model/DescribeProjectRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DescribeProjectRequest::DescribeProjectRequest() :
    m_projectIdHasBeenSet(false),
    m_describeClustersHasBeenSet(false),
    m_describeExecutorsHasBeenSet(false),
    m_describeAdminUsersHasBeenSet(false),
    m_describeMemberCountHasBeenSet(false),
    m_describeCreatorHasBeenSet(false),
    m_projectNameHasBeenSet(false)
{
}

string DescribeProjectRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_describeClustersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DescribeClusters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_describeClusters, allocator);
    }

    if (m_describeExecutorsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DescribeExecutors";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_describeExecutors, allocator);
    }

    if (m_describeAdminUsersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DescribeAdminUsers";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_describeAdminUsers, allocator);
    }

    if (m_describeMemberCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DescribeMemberCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_describeMemberCount, allocator);
    }

    if (m_describeCreatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DescribeCreator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_describeCreator, allocator);
    }

    if (m_projectNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeProjectRequest::GetProjectId() const
{
    return m_projectId;
}

void DescribeProjectRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DescribeProjectRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

bool DescribeProjectRequest::GetDescribeClusters() const
{
    return m_describeClusters;
}

void DescribeProjectRequest::SetDescribeClusters(const bool& _describeClusters)
{
    m_describeClusters = _describeClusters;
    m_describeClustersHasBeenSet = true;
}

bool DescribeProjectRequest::DescribeClustersHasBeenSet() const
{
    return m_describeClustersHasBeenSet;
}

bool DescribeProjectRequest::GetDescribeExecutors() const
{
    return m_describeExecutors;
}

void DescribeProjectRequest::SetDescribeExecutors(const bool& _describeExecutors)
{
    m_describeExecutors = _describeExecutors;
    m_describeExecutorsHasBeenSet = true;
}

bool DescribeProjectRequest::DescribeExecutorsHasBeenSet() const
{
    return m_describeExecutorsHasBeenSet;
}

bool DescribeProjectRequest::GetDescribeAdminUsers() const
{
    return m_describeAdminUsers;
}

void DescribeProjectRequest::SetDescribeAdminUsers(const bool& _describeAdminUsers)
{
    m_describeAdminUsers = _describeAdminUsers;
    m_describeAdminUsersHasBeenSet = true;
}

bool DescribeProjectRequest::DescribeAdminUsersHasBeenSet() const
{
    return m_describeAdminUsersHasBeenSet;
}

bool DescribeProjectRequest::GetDescribeMemberCount() const
{
    return m_describeMemberCount;
}

void DescribeProjectRequest::SetDescribeMemberCount(const bool& _describeMemberCount)
{
    m_describeMemberCount = _describeMemberCount;
    m_describeMemberCountHasBeenSet = true;
}

bool DescribeProjectRequest::DescribeMemberCountHasBeenSet() const
{
    return m_describeMemberCountHasBeenSet;
}

bool DescribeProjectRequest::GetDescribeCreator() const
{
    return m_describeCreator;
}

void DescribeProjectRequest::SetDescribeCreator(const bool& _describeCreator)
{
    m_describeCreator = _describeCreator;
    m_describeCreatorHasBeenSet = true;
}

bool DescribeProjectRequest::DescribeCreatorHasBeenSet() const
{
    return m_describeCreatorHasBeenSet;
}

string DescribeProjectRequest::GetProjectName() const
{
    return m_projectName;
}

void DescribeProjectRequest::SetProjectName(const string& _projectName)
{
    m_projectName = _projectName;
    m_projectNameHasBeenSet = true;
}

bool DescribeProjectRequest::ProjectNameHasBeenSet() const
{
    return m_projectNameHasBeenSet;
}


