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

#include <tencentcloud/tcb/v20180608/model/DescribeActivityRecordRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

DescribeActivityRecordRequest::DescribeActivityRecordRequest() :
    m_channelTokenHasBeenSet(false),
    m_channelHasBeenSet(false),
    m_activityIdListHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_statusesHasBeenSet(false),
    m_isDeletedListHasBeenSet(false)
{
}

string DescribeActivityRecordRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_activityIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActivityIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_activityIdList.begin(); itr != m_activityIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
    }

    if (m_statusesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Statuses";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_statuses.begin(); itr != m_statuses.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_isDeletedListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDeletedList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_isDeletedList.begin(); itr != m_isDeletedList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeActivityRecordRequest::GetChannelToken() const
{
    return m_channelToken;
}

void DescribeActivityRecordRequest::SetChannelToken(const string& _channelToken)
{
    m_channelToken = _channelToken;
    m_channelTokenHasBeenSet = true;
}

bool DescribeActivityRecordRequest::ChannelTokenHasBeenSet() const
{
    return m_channelTokenHasBeenSet;
}

string DescribeActivityRecordRequest::GetChannel() const
{
    return m_channel;
}

void DescribeActivityRecordRequest::SetChannel(const string& _channel)
{
    m_channel = _channel;
    m_channelHasBeenSet = true;
}

bool DescribeActivityRecordRequest::ChannelHasBeenSet() const
{
    return m_channelHasBeenSet;
}

vector<int64_t> DescribeActivityRecordRequest::GetActivityIdList() const
{
    return m_activityIdList;
}

void DescribeActivityRecordRequest::SetActivityIdList(const vector<int64_t>& _activityIdList)
{
    m_activityIdList = _activityIdList;
    m_activityIdListHasBeenSet = true;
}

bool DescribeActivityRecordRequest::ActivityIdListHasBeenSet() const
{
    return m_activityIdListHasBeenSet;
}

int64_t DescribeActivityRecordRequest::GetStatus() const
{
    return m_status;
}

void DescribeActivityRecordRequest::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeActivityRecordRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<int64_t> DescribeActivityRecordRequest::GetStatuses() const
{
    return m_statuses;
}

void DescribeActivityRecordRequest::SetStatuses(const vector<int64_t>& _statuses)
{
    m_statuses = _statuses;
    m_statusesHasBeenSet = true;
}

bool DescribeActivityRecordRequest::StatusesHasBeenSet() const
{
    return m_statusesHasBeenSet;
}

vector<int64_t> DescribeActivityRecordRequest::GetIsDeletedList() const
{
    return m_isDeletedList;
}

void DescribeActivityRecordRequest::SetIsDeletedList(const vector<int64_t>& _isDeletedList)
{
    m_isDeletedList = _isDeletedList;
    m_isDeletedListHasBeenSet = true;
}

bool DescribeActivityRecordRequest::IsDeletedListHasBeenSet() const
{
    return m_isDeletedListHasBeenSet;
}


