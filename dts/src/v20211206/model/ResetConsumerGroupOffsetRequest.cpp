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

#include <tencentcloud/dts/v20211206/model/ResetConsumerGroupOffsetRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dts::V20211206::Model;
using namespace std;

ResetConsumerGroupOffsetRequest::ResetConsumerGroupOffsetRequest() :
    m_subscribeIdHasBeenSet(false),
    m_topicNameHasBeenSet(false),
    m_consumerGroupNameHasBeenSet(false),
    m_partitionNosHasBeenSet(false),
    m_resetModeHasBeenSet(false),
    m_resetDatetimeHasBeenSet(false)
{
}

string ResetConsumerGroupOffsetRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_subscribeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubscribeId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subscribeId.c_str(), allocator).Move(), allocator);
    }

    if (m_topicNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_topicName.c_str(), allocator).Move(), allocator);
    }

    if (m_consumerGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumerGroupName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_consumerGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_partitionNosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PartitionNos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_partitionNos.begin(); itr != m_partitionNos.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_resetModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResetMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resetMode.c_str(), allocator).Move(), allocator);
    }

    if (m_resetDatetimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResetDatetime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resetDatetime.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ResetConsumerGroupOffsetRequest::GetSubscribeId() const
{
    return m_subscribeId;
}

void ResetConsumerGroupOffsetRequest::SetSubscribeId(const string& _subscribeId)
{
    m_subscribeId = _subscribeId;
    m_subscribeIdHasBeenSet = true;
}

bool ResetConsumerGroupOffsetRequest::SubscribeIdHasBeenSet() const
{
    return m_subscribeIdHasBeenSet;
}

string ResetConsumerGroupOffsetRequest::GetTopicName() const
{
    return m_topicName;
}

void ResetConsumerGroupOffsetRequest::SetTopicName(const string& _topicName)
{
    m_topicName = _topicName;
    m_topicNameHasBeenSet = true;
}

bool ResetConsumerGroupOffsetRequest::TopicNameHasBeenSet() const
{
    return m_topicNameHasBeenSet;
}

string ResetConsumerGroupOffsetRequest::GetConsumerGroupName() const
{
    return m_consumerGroupName;
}

void ResetConsumerGroupOffsetRequest::SetConsumerGroupName(const string& _consumerGroupName)
{
    m_consumerGroupName = _consumerGroupName;
    m_consumerGroupNameHasBeenSet = true;
}

bool ResetConsumerGroupOffsetRequest::ConsumerGroupNameHasBeenSet() const
{
    return m_consumerGroupNameHasBeenSet;
}

vector<int64_t> ResetConsumerGroupOffsetRequest::GetPartitionNos() const
{
    return m_partitionNos;
}

void ResetConsumerGroupOffsetRequest::SetPartitionNos(const vector<int64_t>& _partitionNos)
{
    m_partitionNos = _partitionNos;
    m_partitionNosHasBeenSet = true;
}

bool ResetConsumerGroupOffsetRequest::PartitionNosHasBeenSet() const
{
    return m_partitionNosHasBeenSet;
}

string ResetConsumerGroupOffsetRequest::GetResetMode() const
{
    return m_resetMode;
}

void ResetConsumerGroupOffsetRequest::SetResetMode(const string& _resetMode)
{
    m_resetMode = _resetMode;
    m_resetModeHasBeenSet = true;
}

bool ResetConsumerGroupOffsetRequest::ResetModeHasBeenSet() const
{
    return m_resetModeHasBeenSet;
}

string ResetConsumerGroupOffsetRequest::GetResetDatetime() const
{
    return m_resetDatetime;
}

void ResetConsumerGroupOffsetRequest::SetResetDatetime(const string& _resetDatetime)
{
    m_resetDatetime = _resetDatetime;
    m_resetDatetimeHasBeenSet = true;
}

bool ResetConsumerGroupOffsetRequest::ResetDatetimeHasBeenSet() const
{
    return m_resetDatetimeHasBeenSet;
}


