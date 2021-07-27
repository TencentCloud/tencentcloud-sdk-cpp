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

#include <tencentcloud/tcb/v20180608/model/ReplaceActivityRecordRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

ReplaceActivityRecordRequest::ReplaceActivityRecordRequest() :
    m_activityIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_subStatusHasBeenSet(false),
    m_channelTokenHasBeenSet(false),
    m_channelHasBeenSet(false)
{
}

string ReplaceActivityRecordRequest::ToJsonString() const
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

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
    }

    if (m_subStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subStatus.c_str(), allocator).Move(), allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t ReplaceActivityRecordRequest::GetActivityId() const
{
    return m_activityId;
}

void ReplaceActivityRecordRequest::SetActivityId(const int64_t& _activityId)
{
    m_activityId = _activityId;
    m_activityIdHasBeenSet = true;
}

bool ReplaceActivityRecordRequest::ActivityIdHasBeenSet() const
{
    return m_activityIdHasBeenSet;
}

int64_t ReplaceActivityRecordRequest::GetStatus() const
{
    return m_status;
}

void ReplaceActivityRecordRequest::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ReplaceActivityRecordRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ReplaceActivityRecordRequest::GetSubStatus() const
{
    return m_subStatus;
}

void ReplaceActivityRecordRequest::SetSubStatus(const string& _subStatus)
{
    m_subStatus = _subStatus;
    m_subStatusHasBeenSet = true;
}

bool ReplaceActivityRecordRequest::SubStatusHasBeenSet() const
{
    return m_subStatusHasBeenSet;
}

string ReplaceActivityRecordRequest::GetChannelToken() const
{
    return m_channelToken;
}

void ReplaceActivityRecordRequest::SetChannelToken(const string& _channelToken)
{
    m_channelToken = _channelToken;
    m_channelTokenHasBeenSet = true;
}

bool ReplaceActivityRecordRequest::ChannelTokenHasBeenSet() const
{
    return m_channelTokenHasBeenSet;
}

string ReplaceActivityRecordRequest::GetChannel() const
{
    return m_channel;
}

void ReplaceActivityRecordRequest::SetChannel(const string& _channel)
{
    m_channel = _channel;
    m_channelHasBeenSet = true;
}

bool ReplaceActivityRecordRequest::ChannelHasBeenSet() const
{
    return m_channelHasBeenSet;
}


