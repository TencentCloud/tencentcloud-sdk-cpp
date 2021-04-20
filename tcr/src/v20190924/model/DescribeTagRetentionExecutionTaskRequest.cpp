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

#include <tencentcloud/tcr/v20190924/model/DescribeTagRetentionExecutionTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcr::V20190924::Model;
using namespace rapidjson;
using namespace std;

DescribeTagRetentionExecutionTaskRequest::DescribeTagRetentionExecutionTaskRequest() :
    m_registryIdHasBeenSet(false),
    m_retentionIdHasBeenSet(false),
    m_executionIdHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false)
{
}

string DescribeTagRetentionExecutionTaskRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_registryIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RegistryId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_registryId.c_str(), allocator).Move(), allocator);
    }

    if (m_retentionIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RetentionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_retentionId, allocator);
    }

    if (m_executionIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ExecutionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_executionId, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeTagRetentionExecutionTaskRequest::GetRegistryId() const
{
    return m_registryId;
}

void DescribeTagRetentionExecutionTaskRequest::SetRegistryId(const string& _registryId)
{
    m_registryId = _registryId;
    m_registryIdHasBeenSet = true;
}

bool DescribeTagRetentionExecutionTaskRequest::RegistryIdHasBeenSet() const
{
    return m_registryIdHasBeenSet;
}

int64_t DescribeTagRetentionExecutionTaskRequest::GetRetentionId() const
{
    return m_retentionId;
}

void DescribeTagRetentionExecutionTaskRequest::SetRetentionId(const int64_t& _retentionId)
{
    m_retentionId = _retentionId;
    m_retentionIdHasBeenSet = true;
}

bool DescribeTagRetentionExecutionTaskRequest::RetentionIdHasBeenSet() const
{
    return m_retentionIdHasBeenSet;
}

int64_t DescribeTagRetentionExecutionTaskRequest::GetExecutionId() const
{
    return m_executionId;
}

void DescribeTagRetentionExecutionTaskRequest::SetExecutionId(const int64_t& _executionId)
{
    m_executionId = _executionId;
    m_executionIdHasBeenSet = true;
}

bool DescribeTagRetentionExecutionTaskRequest::ExecutionIdHasBeenSet() const
{
    return m_executionIdHasBeenSet;
}

int64_t DescribeTagRetentionExecutionTaskRequest::GetOffset() const
{
    return m_offset;
}

void DescribeTagRetentionExecutionTaskRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeTagRetentionExecutionTaskRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeTagRetentionExecutionTaskRequest::GetLimit() const
{
    return m_limit;
}

void DescribeTagRetentionExecutionTaskRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeTagRetentionExecutionTaskRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}


