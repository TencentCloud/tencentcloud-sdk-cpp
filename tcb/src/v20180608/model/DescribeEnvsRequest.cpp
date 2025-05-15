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

#include <tencentcloud/tcb/v20180608/model/DescribeEnvsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

DescribeEnvsRequest::DescribeEnvsRequest() :
    m_envIdHasBeenSet(false),
    m_isVisibleHasBeenSet(false),
    m_channelsHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false)
{
}

string DescribeEnvsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_envIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_envId.c_str(), allocator).Move(), allocator);
    }

    if (m_isVisibleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsVisible";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isVisible, allocator);
    }

    if (m_channelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Channels";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_channels.begin(); itr != m_channels.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeEnvsRequest::GetEnvId() const
{
    return m_envId;
}

void DescribeEnvsRequest::SetEnvId(const string& _envId)
{
    m_envId = _envId;
    m_envIdHasBeenSet = true;
}

bool DescribeEnvsRequest::EnvIdHasBeenSet() const
{
    return m_envIdHasBeenSet;
}

bool DescribeEnvsRequest::GetIsVisible() const
{
    return m_isVisible;
}

void DescribeEnvsRequest::SetIsVisible(const bool& _isVisible)
{
    m_isVisible = _isVisible;
    m_isVisibleHasBeenSet = true;
}

bool DescribeEnvsRequest::IsVisibleHasBeenSet() const
{
    return m_isVisibleHasBeenSet;
}

vector<string> DescribeEnvsRequest::GetChannels() const
{
    return m_channels;
}

void DescribeEnvsRequest::SetChannels(const vector<string>& _channels)
{
    m_channels = _channels;
    m_channelsHasBeenSet = true;
}

bool DescribeEnvsRequest::ChannelsHasBeenSet() const
{
    return m_channelsHasBeenSet;
}

int64_t DescribeEnvsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeEnvsRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeEnvsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeEnvsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeEnvsRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeEnvsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}


