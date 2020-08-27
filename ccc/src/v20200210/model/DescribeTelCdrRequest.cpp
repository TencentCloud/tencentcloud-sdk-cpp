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

#include <tencentcloud/ccc/v20200210/model/DescribeTelCdrRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ccc::V20200210::Model;
using namespace rapidjson;
using namespace std;

DescribeTelCdrRequest::DescribeTelCdrRequest() :
    m_instanceIdHasBeenSet(false),
    m_startTimeStampHasBeenSet(false),
    m_endTimeStampHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false)
{
}

string DescribeTelCdrRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_instanceId, allocator);
    }

    if (m_startTimeStampHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StartTimeStamp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_startTimeStamp, allocator);
    }

    if (m_endTimeStampHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EndTimeStamp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_endTimeStamp, allocator);
    }

    if (m_limitHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeTelCdrRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeTelCdrRequest::SetInstanceId(const int64_t& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeTelCdrRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t DescribeTelCdrRequest::GetStartTimeStamp() const
{
    return m_startTimeStamp;
}

void DescribeTelCdrRequest::SetStartTimeStamp(const int64_t& _startTimeStamp)
{
    m_startTimeStamp = _startTimeStamp;
    m_startTimeStampHasBeenSet = true;
}

bool DescribeTelCdrRequest::StartTimeStampHasBeenSet() const
{
    return m_startTimeStampHasBeenSet;
}

int64_t DescribeTelCdrRequest::GetEndTimeStamp() const
{
    return m_endTimeStamp;
}

void DescribeTelCdrRequest::SetEndTimeStamp(const int64_t& _endTimeStamp)
{
    m_endTimeStamp = _endTimeStamp;
    m_endTimeStampHasBeenSet = true;
}

bool DescribeTelCdrRequest::EndTimeStampHasBeenSet() const
{
    return m_endTimeStampHasBeenSet;
}

int64_t DescribeTelCdrRequest::GetLimit() const
{
    return m_limit;
}

void DescribeTelCdrRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeTelCdrRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeTelCdrRequest::GetOffset() const
{
    return m_offset;
}

void DescribeTelCdrRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeTelCdrRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}


