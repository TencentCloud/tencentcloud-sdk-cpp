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

#include <tencentcloud/redis/v20180412/model/DescribeInstanceMonitorTookDistRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Redis::V20180412::Model;
using namespace std;

DescribeInstanceMonitorTookDistRequest::DescribeInstanceMonitorTookDistRequest() :
    m_instanceIdHasBeenSet(false),
    m_dateHasBeenSet(false),
    m_spanTypeHasBeenSet(false)
{
}

string DescribeInstanceMonitorTookDistRequest::ToJsonString() const
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

    if (m_dateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Date";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_date.c_str(), allocator).Move(), allocator);
    }

    if (m_spanTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpanType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_spanType, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeInstanceMonitorTookDistRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeInstanceMonitorTookDistRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeInstanceMonitorTookDistRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeInstanceMonitorTookDistRequest::GetDate() const
{
    return m_date;
}

void DescribeInstanceMonitorTookDistRequest::SetDate(const string& _date)
{
    m_date = _date;
    m_dateHasBeenSet = true;
}

bool DescribeInstanceMonitorTookDistRequest::DateHasBeenSet() const
{
    return m_dateHasBeenSet;
}

int64_t DescribeInstanceMonitorTookDistRequest::GetSpanType() const
{
    return m_spanType;
}

void DescribeInstanceMonitorTookDistRequest::SetSpanType(const int64_t& _spanType)
{
    m_spanType = _spanType;
    m_spanTypeHasBeenSet = true;
}

bool DescribeInstanceMonitorTookDistRequest::SpanTypeHasBeenSet() const
{
    return m_spanTypeHasBeenSet;
}


