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

#include <tencentcloud/tcb/v20180608/model/DescribeCloudBaseRunPodListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

DescribeCloudBaseRunPodListRequest::DescribeCloudBaseRunPodListRequest() :
    m_envIdHasBeenSet(false),
    m_serverNameHasBeenSet(false),
    m_versionNameHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_podNameHasBeenSet(false)
{
}

string DescribeCloudBaseRunPodListRequest::ToJsonString() const
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

    if (m_serverNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serverName.c_str(), allocator).Move(), allocator);
    }

    if (m_versionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_versionName.c_str(), allocator).Move(), allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_podNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_podName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeCloudBaseRunPodListRequest::GetEnvId() const
{
    return m_envId;
}

void DescribeCloudBaseRunPodListRequest::SetEnvId(const string& _envId)
{
    m_envId = _envId;
    m_envIdHasBeenSet = true;
}

bool DescribeCloudBaseRunPodListRequest::EnvIdHasBeenSet() const
{
    return m_envIdHasBeenSet;
}

string DescribeCloudBaseRunPodListRequest::GetServerName() const
{
    return m_serverName;
}

void DescribeCloudBaseRunPodListRequest::SetServerName(const string& _serverName)
{
    m_serverName = _serverName;
    m_serverNameHasBeenSet = true;
}

bool DescribeCloudBaseRunPodListRequest::ServerNameHasBeenSet() const
{
    return m_serverNameHasBeenSet;
}

string DescribeCloudBaseRunPodListRequest::GetVersionName() const
{
    return m_versionName;
}

void DescribeCloudBaseRunPodListRequest::SetVersionName(const string& _versionName)
{
    m_versionName = _versionName;
    m_versionNameHasBeenSet = true;
}

bool DescribeCloudBaseRunPodListRequest::VersionNameHasBeenSet() const
{
    return m_versionNameHasBeenSet;
}

int64_t DescribeCloudBaseRunPodListRequest::GetLimit() const
{
    return m_limit;
}

void DescribeCloudBaseRunPodListRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeCloudBaseRunPodListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeCloudBaseRunPodListRequest::GetOffset() const
{
    return m_offset;
}

void DescribeCloudBaseRunPodListRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeCloudBaseRunPodListRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string DescribeCloudBaseRunPodListRequest::GetStatus() const
{
    return m_status;
}

void DescribeCloudBaseRunPodListRequest::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeCloudBaseRunPodListRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeCloudBaseRunPodListRequest::GetPodName() const
{
    return m_podName;
}

void DescribeCloudBaseRunPodListRequest::SetPodName(const string& _podName)
{
    m_podName = _podName;
    m_podNameHasBeenSet = true;
}

bool DescribeCloudBaseRunPodListRequest::PodNameHasBeenSet() const
{
    return m_podNameHasBeenSet;
}


