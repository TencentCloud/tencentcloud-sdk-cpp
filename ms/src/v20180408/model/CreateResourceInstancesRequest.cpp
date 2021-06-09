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

#include <tencentcloud/ms/v20180408/model/CreateResourceInstancesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ms::V20180408::Model;
using namespace std;

CreateResourceInstancesRequest::CreateResourceInstancesRequest() :
    m_pidHasBeenSet(false),
    m_timeUnitHasBeenSet(false),
    m_timeSpanHasBeenSet(false),
    m_resourceNumHasBeenSet(false)
{
}

string CreateResourceInstancesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_pidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pid, allocator);
    }

    if (m_timeUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeUnit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_timeUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_timeSpanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeSpan";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_timeSpan, allocator);
    }

    if (m_resourceNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_resourceNum, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t CreateResourceInstancesRequest::GetPid() const
{
    return m_pid;
}

void CreateResourceInstancesRequest::SetPid(const uint64_t& _pid)
{
    m_pid = _pid;
    m_pidHasBeenSet = true;
}

bool CreateResourceInstancesRequest::PidHasBeenSet() const
{
    return m_pidHasBeenSet;
}

string CreateResourceInstancesRequest::GetTimeUnit() const
{
    return m_timeUnit;
}

void CreateResourceInstancesRequest::SetTimeUnit(const string& _timeUnit)
{
    m_timeUnit = _timeUnit;
    m_timeUnitHasBeenSet = true;
}

bool CreateResourceInstancesRequest::TimeUnitHasBeenSet() const
{
    return m_timeUnitHasBeenSet;
}

uint64_t CreateResourceInstancesRequest::GetTimeSpan() const
{
    return m_timeSpan;
}

void CreateResourceInstancesRequest::SetTimeSpan(const uint64_t& _timeSpan)
{
    m_timeSpan = _timeSpan;
    m_timeSpanHasBeenSet = true;
}

bool CreateResourceInstancesRequest::TimeSpanHasBeenSet() const
{
    return m_timeSpanHasBeenSet;
}

uint64_t CreateResourceInstancesRequest::GetResourceNum() const
{
    return m_resourceNum;
}

void CreateResourceInstancesRequest::SetResourceNum(const uint64_t& _resourceNum)
{
    m_resourceNum = _resourceNum;
    m_resourceNumHasBeenSet = true;
}

bool CreateResourceInstancesRequest::ResourceNumHasBeenSet() const
{
    return m_resourceNumHasBeenSet;
}


