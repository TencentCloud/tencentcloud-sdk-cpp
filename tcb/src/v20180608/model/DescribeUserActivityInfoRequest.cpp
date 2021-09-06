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

#include <tencentcloud/tcb/v20180608/model/DescribeUserActivityInfoRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

DescribeUserActivityInfoRequest::DescribeUserActivityInfoRequest() :
    m_activityIdHasBeenSet(false),
    m_channelTokenHasBeenSet(false),
    m_channelHasBeenSet(false),
    m_groupIdHasBeenSet(false)
{
}

string DescribeUserActivityInfoRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_activityIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActivityId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_activityId, allocator);
    }

    if (m_channelTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_channelToken.c_str(), allocator).Move(), allocator);
    }

    if (m_channelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Channel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_channel.c_str(), allocator).Move(), allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeUserActivityInfoRequest::GetActivityId() const
{
    return m_activityId;
}

void DescribeUserActivityInfoRequest::SetActivityId(const int64_t& _activityId)
{
    m_activityId = _activityId;
    m_activityIdHasBeenSet = true;
}

bool DescribeUserActivityInfoRequest::ActivityIdHasBeenSet() const
{
    return m_activityIdHasBeenSet;
}

string DescribeUserActivityInfoRequest::GetChannelToken() const
{
    return m_channelToken;
}

void DescribeUserActivityInfoRequest::SetChannelToken(const string& _channelToken)
{
    m_channelToken = _channelToken;
    m_channelTokenHasBeenSet = true;
}

bool DescribeUserActivityInfoRequest::ChannelTokenHasBeenSet() const
{
    return m_channelTokenHasBeenSet;
}

string DescribeUserActivityInfoRequest::GetChannel() const
{
    return m_channel;
}

void DescribeUserActivityInfoRequest::SetChannel(const string& _channel)
{
    m_channel = _channel;
    m_channelHasBeenSet = true;
}

bool DescribeUserActivityInfoRequest::ChannelHasBeenSet() const
{
    return m_channelHasBeenSet;
}

string DescribeUserActivityInfoRequest::GetGroupId() const
{
    return m_groupId;
}

void DescribeUserActivityInfoRequest::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool DescribeUserActivityInfoRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}


