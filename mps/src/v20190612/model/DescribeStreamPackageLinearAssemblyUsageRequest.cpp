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

#include <tencentcloud/mps/v20190612/model/DescribeStreamPackageLinearAssemblyUsageRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

DescribeStreamPackageLinearAssemblyUsageRequest::DescribeStreamPackageLinearAssemblyUsageRequest() :
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_dimensionHasBeenSet(false),
    m_channelIdsHasBeenSet(false),
    m_channelTiersHasBeenSet(false)
{
}

string DescribeStreamPackageLinearAssemblyUsageRequest::ToJsonString() const
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

    if (m_dimensionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Dimension";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dimension, allocator);
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

    if (m_channelTiersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelTiers";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_channelTiers.begin(); itr != m_channelTiers.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeStreamPackageLinearAssemblyUsageRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeStreamPackageLinearAssemblyUsageRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeStreamPackageLinearAssemblyUsageRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeStreamPackageLinearAssemblyUsageRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeStreamPackageLinearAssemblyUsageRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeStreamPackageLinearAssemblyUsageRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

bool DescribeStreamPackageLinearAssemblyUsageRequest::GetDimension() const
{
    return m_dimension;
}

void DescribeStreamPackageLinearAssemblyUsageRequest::SetDimension(const bool& _dimension)
{
    m_dimension = _dimension;
    m_dimensionHasBeenSet = true;
}

bool DescribeStreamPackageLinearAssemblyUsageRequest::DimensionHasBeenSet() const
{
    return m_dimensionHasBeenSet;
}

vector<string> DescribeStreamPackageLinearAssemblyUsageRequest::GetChannelIds() const
{
    return m_channelIds;
}

void DescribeStreamPackageLinearAssemblyUsageRequest::SetChannelIds(const vector<string>& _channelIds)
{
    m_channelIds = _channelIds;
    m_channelIdsHasBeenSet = true;
}

bool DescribeStreamPackageLinearAssemblyUsageRequest::ChannelIdsHasBeenSet() const
{
    return m_channelIdsHasBeenSet;
}

vector<string> DescribeStreamPackageLinearAssemblyUsageRequest::GetChannelTiers() const
{
    return m_channelTiers;
}

void DescribeStreamPackageLinearAssemblyUsageRequest::SetChannelTiers(const vector<string>& _channelTiers)
{
    m_channelTiers = _channelTiers;
    m_channelTiersHasBeenSet = true;
}

bool DescribeStreamPackageLinearAssemblyUsageRequest::ChannelTiersHasBeenSet() const
{
    return m_channelTiersHasBeenSet;
}


