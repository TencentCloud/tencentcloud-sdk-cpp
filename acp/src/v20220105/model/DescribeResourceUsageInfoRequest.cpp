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

#include <tencentcloud/acp/v20220105/model/DescribeResourceUsageInfoRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Acp::V20220105::Model;
using namespace std;

DescribeResourceUsageInfoRequest::DescribeResourceUsageInfoRequest() :
    m_priceNameHasBeenSet(false),
    m_taskTypeHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_sourceHasBeenSet(false)
{
}

string DescribeResourceUsageInfoRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_priceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PriceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_priceName.c_str(), allocator).Move(), allocator);
    }

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_taskType, allocator);
    }

    if (m_platformHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Platform";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_platform, allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_source, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeResourceUsageInfoRequest::GetPriceName() const
{
    return m_priceName;
}

void DescribeResourceUsageInfoRequest::SetPriceName(const string& _priceName)
{
    m_priceName = _priceName;
    m_priceNameHasBeenSet = true;
}

bool DescribeResourceUsageInfoRequest::PriceNameHasBeenSet() const
{
    return m_priceNameHasBeenSet;
}

int64_t DescribeResourceUsageInfoRequest::GetTaskType() const
{
    return m_taskType;
}

void DescribeResourceUsageInfoRequest::SetTaskType(const int64_t& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool DescribeResourceUsageInfoRequest::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

int64_t DescribeResourceUsageInfoRequest::GetPlatform() const
{
    return m_platform;
}

void DescribeResourceUsageInfoRequest::SetPlatform(const int64_t& _platform)
{
    m_platform = _platform;
    m_platformHasBeenSet = true;
}

bool DescribeResourceUsageInfoRequest::PlatformHasBeenSet() const
{
    return m_platformHasBeenSet;
}

int64_t DescribeResourceUsageInfoRequest::GetSource() const
{
    return m_source;
}

void DescribeResourceUsageInfoRequest::SetSource(const int64_t& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool DescribeResourceUsageInfoRequest::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}


