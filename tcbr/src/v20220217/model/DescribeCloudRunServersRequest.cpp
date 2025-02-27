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

#include <tencentcloud/tcbr/v20220217/model/DescribeCloudRunServersRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcbr::V20220217::Model;
using namespace std;

DescribeCloudRunServersRequest::DescribeCloudRunServersRequest() :
    m_envIdHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_pageNumHasBeenSet(false),
    m_serverNameHasBeenSet(false),
    m_serverTypeHasBeenSet(false)
{
}

string DescribeCloudRunServersRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_envIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_envId.c_str(), allocator).Move(), allocator);
    }

    if (m_pageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageSize, allocator);
    }

    if (m_pageNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageNum, allocator);
    }

    if (m_serverNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serverName.c_str(), allocator).Move(), allocator);
    }

    if (m_serverTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serverType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeCloudRunServersRequest::GetEnvId() const
{
    return m_envId;
}

void DescribeCloudRunServersRequest::SetEnvId(const string& _envId)
{
    m_envId = _envId;
    m_envIdHasBeenSet = true;
}

bool DescribeCloudRunServersRequest::EnvIdHasBeenSet() const
{
    return m_envIdHasBeenSet;
}

int64_t DescribeCloudRunServersRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeCloudRunServersRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeCloudRunServersRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

int64_t DescribeCloudRunServersRequest::GetPageNum() const
{
    return m_pageNum;
}

void DescribeCloudRunServersRequest::SetPageNum(const int64_t& _pageNum)
{
    m_pageNum = _pageNum;
    m_pageNumHasBeenSet = true;
}

bool DescribeCloudRunServersRequest::PageNumHasBeenSet() const
{
    return m_pageNumHasBeenSet;
}

string DescribeCloudRunServersRequest::GetServerName() const
{
    return m_serverName;
}

void DescribeCloudRunServersRequest::SetServerName(const string& _serverName)
{
    m_serverName = _serverName;
    m_serverNameHasBeenSet = true;
}

bool DescribeCloudRunServersRequest::ServerNameHasBeenSet() const
{
    return m_serverNameHasBeenSet;
}

string DescribeCloudRunServersRequest::GetServerType() const
{
    return m_serverType;
}

void DescribeCloudRunServersRequest::SetServerType(const string& _serverType)
{
    m_serverType = _serverType;
    m_serverTypeHasBeenSet = true;
}

bool DescribeCloudRunServersRequest::ServerTypeHasBeenSet() const
{
    return m_serverTypeHasBeenSet;
}


