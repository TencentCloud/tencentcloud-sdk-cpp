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

#include <tencentcloud/tiw/v20190919/model/DescribeRunningTasksRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tiw::V20190919::Model;
using namespace std;

DescribeRunningTasksRequest::DescribeRunningTasksRequest() :
    m_sdkAppIDHasBeenSet(false),
    m_taskTypeHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false)
{
}

string DescribeRunningTasksRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sdkAppIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdkAppID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sdkAppID, allocator);
    }

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskType.c_str(), allocator).Move(), allocator);
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


int64_t DescribeRunningTasksRequest::GetSdkAppID() const
{
    return m_sdkAppID;
}

void DescribeRunningTasksRequest::SetSdkAppID(const int64_t& _sdkAppID)
{
    m_sdkAppID = _sdkAppID;
    m_sdkAppIDHasBeenSet = true;
}

bool DescribeRunningTasksRequest::SdkAppIDHasBeenSet() const
{
    return m_sdkAppIDHasBeenSet;
}

string DescribeRunningTasksRequest::GetTaskType() const
{
    return m_taskType;
}

void DescribeRunningTasksRequest::SetTaskType(const string& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool DescribeRunningTasksRequest::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

int64_t DescribeRunningTasksRequest::GetOffset() const
{
    return m_offset;
}

void DescribeRunningTasksRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeRunningTasksRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeRunningTasksRequest::GetLimit() const
{
    return m_limit;
}

void DescribeRunningTasksRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeRunningTasksRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}


