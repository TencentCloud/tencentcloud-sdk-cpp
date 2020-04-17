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

#include <tencentcloud/vod/v20180717/model/DescribeStorageDetailsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vod::V20180717::Model;
using namespace rapidjson;
using namespace std;

DescribeStorageDetailsRequest::DescribeStorageDetailsRequest() :
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_intervalHasBeenSet(false),
    m_storageTypeHasBeenSet(false),
    m_subAppIdHasBeenSet(false)
{
}

string DescribeStorageDetailsRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_startTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_intervalHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Interval";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_interval.c_str(), allocator).Move(), allocator);
    }

    if (m_storageTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StorageType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_storageType.c_str(), allocator).Move(), allocator);
    }

    if (m_subAppIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SubAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_subAppId, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeStorageDetailsRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeStorageDetailsRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeStorageDetailsRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeStorageDetailsRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeStorageDetailsRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeStorageDetailsRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string DescribeStorageDetailsRequest::GetInterval() const
{
    return m_interval;
}

void DescribeStorageDetailsRequest::SetInterval(const string& _interval)
{
    m_interval = _interval;
    m_intervalHasBeenSet = true;
}

bool DescribeStorageDetailsRequest::IntervalHasBeenSet() const
{
    return m_intervalHasBeenSet;
}

string DescribeStorageDetailsRequest::GetStorageType() const
{
    return m_storageType;
}

void DescribeStorageDetailsRequest::SetStorageType(const string& _storageType)
{
    m_storageType = _storageType;
    m_storageTypeHasBeenSet = true;
}

bool DescribeStorageDetailsRequest::StorageTypeHasBeenSet() const
{
    return m_storageTypeHasBeenSet;
}

uint64_t DescribeStorageDetailsRequest::GetSubAppId() const
{
    return m_subAppId;
}

void DescribeStorageDetailsRequest::SetSubAppId(const uint64_t& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool DescribeStorageDetailsRequest::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}


