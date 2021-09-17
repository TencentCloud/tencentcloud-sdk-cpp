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

#include <tencentcloud/tke/v20180525/model/DescribeEksContainerInstanceLogRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

DescribeEksContainerInstanceLogRequest::DescribeEksContainerInstanceLogRequest() :
    m_eksCiIdHasBeenSet(false),
    m_containerNameHasBeenSet(false),
    m_tailHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_previousHasBeenSet(false),
    m_sinceSecondsHasBeenSet(false),
    m_limitBytesHasBeenSet(false)
{
}

string DescribeEksContainerInstanceLogRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_eksCiIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EksCiId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_eksCiId.c_str(), allocator).Move(), allocator);
    }

    if (m_containerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_containerName.c_str(), allocator).Move(), allocator);
    }

    if (m_tailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tail";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_tail, allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_previousHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Previous";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_previous, allocator);
    }

    if (m_sinceSecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SinceSeconds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sinceSeconds, allocator);
    }

    if (m_limitBytesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LimitBytes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limitBytes, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeEksContainerInstanceLogRequest::GetEksCiId() const
{
    return m_eksCiId;
}

void DescribeEksContainerInstanceLogRequest::SetEksCiId(const string& _eksCiId)
{
    m_eksCiId = _eksCiId;
    m_eksCiIdHasBeenSet = true;
}

bool DescribeEksContainerInstanceLogRequest::EksCiIdHasBeenSet() const
{
    return m_eksCiIdHasBeenSet;
}

string DescribeEksContainerInstanceLogRequest::GetContainerName() const
{
    return m_containerName;
}

void DescribeEksContainerInstanceLogRequest::SetContainerName(const string& _containerName)
{
    m_containerName = _containerName;
    m_containerNameHasBeenSet = true;
}

bool DescribeEksContainerInstanceLogRequest::ContainerNameHasBeenSet() const
{
    return m_containerNameHasBeenSet;
}

uint64_t DescribeEksContainerInstanceLogRequest::GetTail() const
{
    return m_tail;
}

void DescribeEksContainerInstanceLogRequest::SetTail(const uint64_t& _tail)
{
    m_tail = _tail;
    m_tailHasBeenSet = true;
}

bool DescribeEksContainerInstanceLogRequest::TailHasBeenSet() const
{
    return m_tailHasBeenSet;
}

string DescribeEksContainerInstanceLogRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeEksContainerInstanceLogRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeEksContainerInstanceLogRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

bool DescribeEksContainerInstanceLogRequest::GetPrevious() const
{
    return m_previous;
}

void DescribeEksContainerInstanceLogRequest::SetPrevious(const bool& _previous)
{
    m_previous = _previous;
    m_previousHasBeenSet = true;
}

bool DescribeEksContainerInstanceLogRequest::PreviousHasBeenSet() const
{
    return m_previousHasBeenSet;
}

uint64_t DescribeEksContainerInstanceLogRequest::GetSinceSeconds() const
{
    return m_sinceSeconds;
}

void DescribeEksContainerInstanceLogRequest::SetSinceSeconds(const uint64_t& _sinceSeconds)
{
    m_sinceSeconds = _sinceSeconds;
    m_sinceSecondsHasBeenSet = true;
}

bool DescribeEksContainerInstanceLogRequest::SinceSecondsHasBeenSet() const
{
    return m_sinceSecondsHasBeenSet;
}

uint64_t DescribeEksContainerInstanceLogRequest::GetLimitBytes() const
{
    return m_limitBytes;
}

void DescribeEksContainerInstanceLogRequest::SetLimitBytes(const uint64_t& _limitBytes)
{
    m_limitBytes = _limitBytes;
    m_limitBytesHasBeenSet = true;
}

bool DescribeEksContainerInstanceLogRequest::LimitBytesHasBeenSet() const
{
    return m_limitBytesHasBeenSet;
}


