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

#include <tencentcloud/tcb/v20180608/model/DescribeCloudBaseProjectLatestVersionListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

DescribeCloudBaseProjectLatestVersionListRequest::DescribeCloudBaseProjectLatestVersionListRequest() :
    m_offsetHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_envIdHasBeenSet(false),
    m_projectNameHasBeenSet(false),
    m_projectTypeHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_ciIdHasBeenSet(false)
{
}

string DescribeCloudBaseProjectLatestVersionListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_pageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageSize, allocator);
    }

    if (m_envIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_envId.c_str(), allocator).Move(), allocator);
    }

    if (m_projectNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectName.c_str(), allocator).Move(), allocator);
    }

    if (m_projectTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectType.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_ciIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CiId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ciId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeCloudBaseProjectLatestVersionListRequest::GetOffset() const
{
    return m_offset;
}

void DescribeCloudBaseProjectLatestVersionListRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeCloudBaseProjectLatestVersionListRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeCloudBaseProjectLatestVersionListRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeCloudBaseProjectLatestVersionListRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeCloudBaseProjectLatestVersionListRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

string DescribeCloudBaseProjectLatestVersionListRequest::GetEnvId() const
{
    return m_envId;
}

void DescribeCloudBaseProjectLatestVersionListRequest::SetEnvId(const string& _envId)
{
    m_envId = _envId;
    m_envIdHasBeenSet = true;
}

bool DescribeCloudBaseProjectLatestVersionListRequest::EnvIdHasBeenSet() const
{
    return m_envIdHasBeenSet;
}

string DescribeCloudBaseProjectLatestVersionListRequest::GetProjectName() const
{
    return m_projectName;
}

void DescribeCloudBaseProjectLatestVersionListRequest::SetProjectName(const string& _projectName)
{
    m_projectName = _projectName;
    m_projectNameHasBeenSet = true;
}

bool DescribeCloudBaseProjectLatestVersionListRequest::ProjectNameHasBeenSet() const
{
    return m_projectNameHasBeenSet;
}

string DescribeCloudBaseProjectLatestVersionListRequest::GetProjectType() const
{
    return m_projectType;
}

void DescribeCloudBaseProjectLatestVersionListRequest::SetProjectType(const string& _projectType)
{
    m_projectType = _projectType;
    m_projectTypeHasBeenSet = true;
}

bool DescribeCloudBaseProjectLatestVersionListRequest::ProjectTypeHasBeenSet() const
{
    return m_projectTypeHasBeenSet;
}

vector<string> DescribeCloudBaseProjectLatestVersionListRequest::GetTags() const
{
    return m_tags;
}

void DescribeCloudBaseProjectLatestVersionListRequest::SetTags(const vector<string>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool DescribeCloudBaseProjectLatestVersionListRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string DescribeCloudBaseProjectLatestVersionListRequest::GetCiId() const
{
    return m_ciId;
}

void DescribeCloudBaseProjectLatestVersionListRequest::SetCiId(const string& _ciId)
{
    m_ciId = _ciId;
    m_ciIdHasBeenSet = true;
}

bool DescribeCloudBaseProjectLatestVersionListRequest::CiIdHasBeenSet() const
{
    return m_ciIdHasBeenSet;
}


