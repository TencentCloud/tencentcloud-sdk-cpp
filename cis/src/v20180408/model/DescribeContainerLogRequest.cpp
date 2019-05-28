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

#include <tencentcloud/cis/v20180408/model/DescribeContainerLogRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cis::V20180408::Model;
using namespace rapidjson;
using namespace std;

DescribeContainerLogRequest::DescribeContainerLogRequest() :
    m_instanceNameHasBeenSet(false),
    m_containerNameHasBeenSet(false),
    m_tailHasBeenSet(false),
    m_sinceTimeHasBeenSet(false)
{
}

string DescribeContainerLogRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_containerNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ContainerName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_containerName.c_str(), allocator).Move(), allocator);
    }

    if (m_tailHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Tail";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_tail, allocator);
    }

    if (m_sinceTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SinceTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_sinceTime.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeContainerLogRequest::GetInstanceName() const
{
    return m_instanceName;
}

void DescribeContainerLogRequest::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool DescribeContainerLogRequest::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string DescribeContainerLogRequest::GetContainerName() const
{
    return m_containerName;
}

void DescribeContainerLogRequest::SetContainerName(const string& _containerName)
{
    m_containerName = _containerName;
    m_containerNameHasBeenSet = true;
}

bool DescribeContainerLogRequest::ContainerNameHasBeenSet() const
{
    return m_containerNameHasBeenSet;
}

uint64_t DescribeContainerLogRequest::GetTail() const
{
    return m_tail;
}

void DescribeContainerLogRequest::SetTail(const uint64_t& _tail)
{
    m_tail = _tail;
    m_tailHasBeenSet = true;
}

bool DescribeContainerLogRequest::TailHasBeenSet() const
{
    return m_tailHasBeenSet;
}

string DescribeContainerLogRequest::GetSinceTime() const
{
    return m_sinceTime;
}

void DescribeContainerLogRequest::SetSinceTime(const string& _sinceTime)
{
    m_sinceTime = _sinceTime;
    m_sinceTimeHasBeenSet = true;
}

bool DescribeContainerLogRequest::SinceTimeHasBeenSet() const
{
    return m_sinceTimeHasBeenSet;
}


