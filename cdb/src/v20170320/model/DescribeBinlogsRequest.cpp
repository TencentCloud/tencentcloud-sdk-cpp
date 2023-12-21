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

#include <tencentcloud/cdb/v20170320/model/DescribeBinlogsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

DescribeBinlogsRequest::DescribeBinlogsRequest() :
    m_instanceIdHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_minStartTimeHasBeenSet(false),
    m_maxStartTimeHasBeenSet(false),
    m_containsMinStartTimeHasBeenSet(false)
{
}

string DescribeBinlogsRequest::ToJsonString() const
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

    if (m_minStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinStartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_minStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_maxStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxStartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_maxStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_containsMinStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainsMinStartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_containsMinStartTime, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeBinlogsRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeBinlogsRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeBinlogsRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t DescribeBinlogsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeBinlogsRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeBinlogsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeBinlogsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeBinlogsRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeBinlogsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeBinlogsRequest::GetMinStartTime() const
{
    return m_minStartTime;
}

void DescribeBinlogsRequest::SetMinStartTime(const string& _minStartTime)
{
    m_minStartTime = _minStartTime;
    m_minStartTimeHasBeenSet = true;
}

bool DescribeBinlogsRequest::MinStartTimeHasBeenSet() const
{
    return m_minStartTimeHasBeenSet;
}

string DescribeBinlogsRequest::GetMaxStartTime() const
{
    return m_maxStartTime;
}

void DescribeBinlogsRequest::SetMaxStartTime(const string& _maxStartTime)
{
    m_maxStartTime = _maxStartTime;
    m_maxStartTimeHasBeenSet = true;
}

bool DescribeBinlogsRequest::MaxStartTimeHasBeenSet() const
{
    return m_maxStartTimeHasBeenSet;
}

bool DescribeBinlogsRequest::GetContainsMinStartTime() const
{
    return m_containsMinStartTime;
}

void DescribeBinlogsRequest::SetContainsMinStartTime(const bool& _containsMinStartTime)
{
    m_containsMinStartTime = _containsMinStartTime;
    m_containsMinStartTimeHasBeenSet = true;
}

bool DescribeBinlogsRequest::ContainsMinStartTimeHasBeenSet() const
{
    return m_containsMinStartTimeHasBeenSet;
}


