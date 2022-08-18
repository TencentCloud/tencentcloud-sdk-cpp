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

#include <tencentcloud/monitor/v20180724/model/DescribeGrafanaNotificationChannelsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

DescribeGrafanaNotificationChannelsRequest::DescribeGrafanaNotificationChannelsRequest() :
    m_instanceIdHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_channelNameHasBeenSet(false),
    m_channelIDsHasBeenSet(false),
    m_channelStateHasBeenSet(false)
{
}

string DescribeGrafanaNotificationChannelsRequest::ToJsonString() const
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

    if (m_channelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_channelName.c_str(), allocator).Move(), allocator);
    }

    if (m_channelIDsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelIDs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_channelIDs.begin(); itr != m_channelIDs.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_channelStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelState";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_channelState, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeGrafanaNotificationChannelsRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeGrafanaNotificationChannelsRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeGrafanaNotificationChannelsRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t DescribeGrafanaNotificationChannelsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeGrafanaNotificationChannelsRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeGrafanaNotificationChannelsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeGrafanaNotificationChannelsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeGrafanaNotificationChannelsRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeGrafanaNotificationChannelsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeGrafanaNotificationChannelsRequest::GetChannelName() const
{
    return m_channelName;
}

void DescribeGrafanaNotificationChannelsRequest::SetChannelName(const string& _channelName)
{
    m_channelName = _channelName;
    m_channelNameHasBeenSet = true;
}

bool DescribeGrafanaNotificationChannelsRequest::ChannelNameHasBeenSet() const
{
    return m_channelNameHasBeenSet;
}

vector<string> DescribeGrafanaNotificationChannelsRequest::GetChannelIDs() const
{
    return m_channelIDs;
}

void DescribeGrafanaNotificationChannelsRequest::SetChannelIDs(const vector<string>& _channelIDs)
{
    m_channelIDs = _channelIDs;
    m_channelIDsHasBeenSet = true;
}

bool DescribeGrafanaNotificationChannelsRequest::ChannelIDsHasBeenSet() const
{
    return m_channelIDsHasBeenSet;
}

int64_t DescribeGrafanaNotificationChannelsRequest::GetChannelState() const
{
    return m_channelState;
}

void DescribeGrafanaNotificationChannelsRequest::SetChannelState(const int64_t& _channelState)
{
    m_channelState = _channelState;
    m_channelStateHasBeenSet = true;
}

bool DescribeGrafanaNotificationChannelsRequest::ChannelStateHasBeenSet() const
{
    return m_channelStateHasBeenSet;
}


