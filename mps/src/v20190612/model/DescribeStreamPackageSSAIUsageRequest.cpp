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

#include <tencentcloud/mps/v20190612/model/DescribeStreamPackageSSAIUsageRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

DescribeStreamPackageSSAIUsageRequest::DescribeStreamPackageSSAIUsageRequest() :
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_channelIdsHasBeenSet(false),
    m_typesHasBeenSet(false),
    m_dimensionHasBeenSet(false)
{
}

string DescribeStreamPackageSSAIUsageRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_channelIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_channelIds.begin(); itr != m_channelIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_typesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Types";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_types.begin(); itr != m_types.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_dimensionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Dimension";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dimension, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeStreamPackageSSAIUsageRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeStreamPackageSSAIUsageRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeStreamPackageSSAIUsageRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeStreamPackageSSAIUsageRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeStreamPackageSSAIUsageRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeStreamPackageSSAIUsageRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

vector<string> DescribeStreamPackageSSAIUsageRequest::GetChannelIds() const
{
    return m_channelIds;
}

void DescribeStreamPackageSSAIUsageRequest::SetChannelIds(const vector<string>& _channelIds)
{
    m_channelIds = _channelIds;
    m_channelIdsHasBeenSet = true;
}

bool DescribeStreamPackageSSAIUsageRequest::ChannelIdsHasBeenSet() const
{
    return m_channelIdsHasBeenSet;
}

vector<string> DescribeStreamPackageSSAIUsageRequest::GetTypes() const
{
    return m_types;
}

void DescribeStreamPackageSSAIUsageRequest::SetTypes(const vector<string>& _types)
{
    m_types = _types;
    m_typesHasBeenSet = true;
}

bool DescribeStreamPackageSSAIUsageRequest::TypesHasBeenSet() const
{
    return m_typesHasBeenSet;
}

bool DescribeStreamPackageSSAIUsageRequest::GetDimension() const
{
    return m_dimension;
}

void DescribeStreamPackageSSAIUsageRequest::SetDimension(const bool& _dimension)
{
    m_dimension = _dimension;
    m_dimensionHasBeenSet = true;
}

bool DescribeStreamPackageSSAIUsageRequest::DimensionHasBeenSet() const
{
    return m_dimensionHasBeenSet;
}


