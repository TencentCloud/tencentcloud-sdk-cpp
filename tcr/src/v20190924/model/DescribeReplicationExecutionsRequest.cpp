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

#include <tencentcloud/tcr/v20190924/model/DescribeReplicationExecutionsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcr::V20190924::Model;
using namespace std;

DescribeReplicationExecutionsRequest::DescribeReplicationExecutionsRequest() :
    m_registryIdHasBeenSet(false),
    m_policyIdHasBeenSet(false),
    m_replicationInstanceIdHasBeenSet(false),
    m_pageHasBeenSet(false),
    m_pageSizeHasBeenSet(false)
{
}

string DescribeReplicationExecutionsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_registryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_registryId.c_str(), allocator).Move(), allocator);
    }

    if (m_policyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_policyId, allocator);
    }

    if (m_replicationInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplicationInstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_replicationInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_pageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Page";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_page, allocator);
    }

    if (m_pageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageSize, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeReplicationExecutionsRequest::GetRegistryId() const
{
    return m_registryId;
}

void DescribeReplicationExecutionsRequest::SetRegistryId(const string& _registryId)
{
    m_registryId = _registryId;
    m_registryIdHasBeenSet = true;
}

bool DescribeReplicationExecutionsRequest::RegistryIdHasBeenSet() const
{
    return m_registryIdHasBeenSet;
}

int64_t DescribeReplicationExecutionsRequest::GetPolicyId() const
{
    return m_policyId;
}

void DescribeReplicationExecutionsRequest::SetPolicyId(const int64_t& _policyId)
{
    m_policyId = _policyId;
    m_policyIdHasBeenSet = true;
}

bool DescribeReplicationExecutionsRequest::PolicyIdHasBeenSet() const
{
    return m_policyIdHasBeenSet;
}

string DescribeReplicationExecutionsRequest::GetReplicationInstanceId() const
{
    return m_replicationInstanceId;
}

void DescribeReplicationExecutionsRequest::SetReplicationInstanceId(const string& _replicationInstanceId)
{
    m_replicationInstanceId = _replicationInstanceId;
    m_replicationInstanceIdHasBeenSet = true;
}

bool DescribeReplicationExecutionsRequest::ReplicationInstanceIdHasBeenSet() const
{
    return m_replicationInstanceIdHasBeenSet;
}

int64_t DescribeReplicationExecutionsRequest::GetPage() const
{
    return m_page;
}

void DescribeReplicationExecutionsRequest::SetPage(const int64_t& _page)
{
    m_page = _page;
    m_pageHasBeenSet = true;
}

bool DescribeReplicationExecutionsRequest::PageHasBeenSet() const
{
    return m_pageHasBeenSet;
}

int64_t DescribeReplicationExecutionsRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeReplicationExecutionsRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeReplicationExecutionsRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}


