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

#include <tencentcloud/cfs/v20190719/model/DescribeLifecyclePoliciesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cfs::V20190719::Model;
using namespace std;

DescribeLifecyclePoliciesRequest::DescribeLifecyclePoliciesRequest() :
    m_lifecyclePolicyNameHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_pageNumberHasBeenSet(false),
    m_fileSystemIdHasBeenSet(false),
    m_lifecyclePolicyIDHasBeenSet(false)
{
}

string DescribeLifecyclePoliciesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_lifecyclePolicyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LifecyclePolicyName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_lifecyclePolicyName.c_str(), allocator).Move(), allocator);
    }

    if (m_pageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageSize, allocator);
    }

    if (m_pageNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageNumber, allocator);
    }

    if (m_fileSystemIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSystemId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileSystemId.c_str(), allocator).Move(), allocator);
    }

    if (m_lifecyclePolicyIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LifecyclePolicyID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_lifecyclePolicyID.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeLifecyclePoliciesRequest::GetLifecyclePolicyName() const
{
    return m_lifecyclePolicyName;
}

void DescribeLifecyclePoliciesRequest::SetLifecyclePolicyName(const string& _lifecyclePolicyName)
{
    m_lifecyclePolicyName = _lifecyclePolicyName;
    m_lifecyclePolicyNameHasBeenSet = true;
}

bool DescribeLifecyclePoliciesRequest::LifecyclePolicyNameHasBeenSet() const
{
    return m_lifecyclePolicyNameHasBeenSet;
}

uint64_t DescribeLifecyclePoliciesRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeLifecyclePoliciesRequest::SetPageSize(const uint64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeLifecyclePoliciesRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

uint64_t DescribeLifecyclePoliciesRequest::GetPageNumber() const
{
    return m_pageNumber;
}

void DescribeLifecyclePoliciesRequest::SetPageNumber(const uint64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool DescribeLifecyclePoliciesRequest::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

string DescribeLifecyclePoliciesRequest::GetFileSystemId() const
{
    return m_fileSystemId;
}

void DescribeLifecyclePoliciesRequest::SetFileSystemId(const string& _fileSystemId)
{
    m_fileSystemId = _fileSystemId;
    m_fileSystemIdHasBeenSet = true;
}

bool DescribeLifecyclePoliciesRequest::FileSystemIdHasBeenSet() const
{
    return m_fileSystemIdHasBeenSet;
}

string DescribeLifecyclePoliciesRequest::GetLifecyclePolicyID() const
{
    return m_lifecyclePolicyID;
}

void DescribeLifecyclePoliciesRequest::SetLifecyclePolicyID(const string& _lifecyclePolicyID)
{
    m_lifecyclePolicyID = _lifecyclePolicyID;
    m_lifecyclePolicyIDHasBeenSet = true;
}

bool DescribeLifecyclePoliciesRequest::LifecyclePolicyIDHasBeenSet() const
{
    return m_lifecyclePolicyIDHasBeenSet;
}


