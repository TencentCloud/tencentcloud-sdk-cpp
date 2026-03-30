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

#include <tencentcloud/monitor/v20230616/model/DescribeAIWorkbenchSREDigitalTwinTaskListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Monitor::V20230616::Model;
using namespace std;

DescribeAIWorkbenchSREDigitalTwinTaskListRequest::DescribeAIWorkbenchSREDigitalTwinTaskListRequest() :
    m_twinIDHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false)
{
}

string DescribeAIWorkbenchSREDigitalTwinTaskListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_twinIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TwinID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_twinID, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeAIWorkbenchSREDigitalTwinTaskListRequest::GetTwinID() const
{
    return m_twinID;
}

void DescribeAIWorkbenchSREDigitalTwinTaskListRequest::SetTwinID(const uint64_t& _twinID)
{
    m_twinID = _twinID;
    m_twinIDHasBeenSet = true;
}

bool DescribeAIWorkbenchSREDigitalTwinTaskListRequest::TwinIDHasBeenSet() const
{
    return m_twinIDHasBeenSet;
}

uint64_t DescribeAIWorkbenchSREDigitalTwinTaskListRequest::GetOffset() const
{
    return m_offset;
}

void DescribeAIWorkbenchSREDigitalTwinTaskListRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeAIWorkbenchSREDigitalTwinTaskListRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeAIWorkbenchSREDigitalTwinTaskListRequest::GetLimit() const
{
    return m_limit;
}

void DescribeAIWorkbenchSREDigitalTwinTaskListRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeAIWorkbenchSREDigitalTwinTaskListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}


