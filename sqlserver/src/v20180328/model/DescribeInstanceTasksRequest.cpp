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

#include <tencentcloud/sqlserver/v20180328/model/DescribeInstanceTasksRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace std;

DescribeInstanceTasksRequest::DescribeInstanceTasksRequest() :
    m_instanceIdHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_offsetHasBeenSet(false)
{
}

string DescribeInstanceTasksRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeInstanceTasksRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeInstanceTasksRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeInstanceTasksRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t DescribeInstanceTasksRequest::GetLimit() const
{
    return m_limit;
}

void DescribeInstanceTasksRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeInstanceTasksRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeInstanceTasksRequest::GetStatus() const
{
    return m_status;
}

void DescribeInstanceTasksRequest::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeInstanceTasksRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t DescribeInstanceTasksRequest::GetOffset() const
{
    return m_offset;
}

void DescribeInstanceTasksRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeInstanceTasksRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}


