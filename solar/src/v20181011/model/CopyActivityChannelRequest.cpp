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

#include <tencentcloud/solar/v20181011/model/CopyActivityChannelRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Solar::V20181011::Model;
using namespace std;

CopyActivityChannelRequest::CopyActivityChannelRequest() :
    m_activityIdHasBeenSet(false),
    m_channelFromHasBeenSet(false),
    m_channelToHasBeenSet(false)
{
}

string CopyActivityChannelRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_activityIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActivityId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_activityId.c_str(), allocator).Move(), allocator);
    }

    if (m_channelFromHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelFrom";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_channelFrom.c_str(), allocator).Move(), allocator);
    }

    if (m_channelToHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelTo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_channelTo.begin(); itr != m_channelTo.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CopyActivityChannelRequest::GetActivityId() const
{
    return m_activityId;
}

void CopyActivityChannelRequest::SetActivityId(const string& _activityId)
{
    m_activityId = _activityId;
    m_activityIdHasBeenSet = true;
}

bool CopyActivityChannelRequest::ActivityIdHasBeenSet() const
{
    return m_activityIdHasBeenSet;
}

string CopyActivityChannelRequest::GetChannelFrom() const
{
    return m_channelFrom;
}

void CopyActivityChannelRequest::SetChannelFrom(const string& _channelFrom)
{
    m_channelFrom = _channelFrom;
    m_channelFromHasBeenSet = true;
}

bool CopyActivityChannelRequest::ChannelFromHasBeenSet() const
{
    return m_channelFromHasBeenSet;
}

vector<string> CopyActivityChannelRequest::GetChannelTo() const
{
    return m_channelTo;
}

void CopyActivityChannelRequest::SetChannelTo(const vector<string>& _channelTo)
{
    m_channelTo = _channelTo;
    m_channelToHasBeenSet = true;
}

bool CopyActivityChannelRequest::ChannelToHasBeenSet() const
{
    return m_channelToHasBeenSet;
}


