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

#include <tencentcloud/trocket/v20230308/model/CreateConsumerGroupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Trocket::V20230308::Model;
using namespace std;

CreateConsumerGroupRequest::CreateConsumerGroupRequest() :
    m_instanceIdHasBeenSet(false),
    m_maxRetryTimesHasBeenSet(false),
    m_consumeEnableHasBeenSet(false),
    m_consumeMessageOrderlyHasBeenSet(false),
    m_consumerGroupHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_tagListHasBeenSet(false)
{
}

string CreateConsumerGroupRequest::ToJsonString() const
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

    if (m_maxRetryTimesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxRetryTimes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxRetryTimes, allocator);
    }

    if (m_consumeEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumeEnable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_consumeEnable, allocator);
    }

    if (m_consumeMessageOrderlyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumeMessageOrderly";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_consumeMessageOrderly, allocator);
    }

    if (m_consumerGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumerGroup";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_consumerGroup.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_tagListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagList.begin(); itr != m_tagList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateConsumerGroupRequest::GetInstanceId() const
{
    return m_instanceId;
}

void CreateConsumerGroupRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CreateConsumerGroupRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t CreateConsumerGroupRequest::GetMaxRetryTimes() const
{
    return m_maxRetryTimes;
}

void CreateConsumerGroupRequest::SetMaxRetryTimes(const int64_t& _maxRetryTimes)
{
    m_maxRetryTimes = _maxRetryTimes;
    m_maxRetryTimesHasBeenSet = true;
}

bool CreateConsumerGroupRequest::MaxRetryTimesHasBeenSet() const
{
    return m_maxRetryTimesHasBeenSet;
}

bool CreateConsumerGroupRequest::GetConsumeEnable() const
{
    return m_consumeEnable;
}

void CreateConsumerGroupRequest::SetConsumeEnable(const bool& _consumeEnable)
{
    m_consumeEnable = _consumeEnable;
    m_consumeEnableHasBeenSet = true;
}

bool CreateConsumerGroupRequest::ConsumeEnableHasBeenSet() const
{
    return m_consumeEnableHasBeenSet;
}

bool CreateConsumerGroupRequest::GetConsumeMessageOrderly() const
{
    return m_consumeMessageOrderly;
}

void CreateConsumerGroupRequest::SetConsumeMessageOrderly(const bool& _consumeMessageOrderly)
{
    m_consumeMessageOrderly = _consumeMessageOrderly;
    m_consumeMessageOrderlyHasBeenSet = true;
}

bool CreateConsumerGroupRequest::ConsumeMessageOrderlyHasBeenSet() const
{
    return m_consumeMessageOrderlyHasBeenSet;
}

string CreateConsumerGroupRequest::GetConsumerGroup() const
{
    return m_consumerGroup;
}

void CreateConsumerGroupRequest::SetConsumerGroup(const string& _consumerGroup)
{
    m_consumerGroup = _consumerGroup;
    m_consumerGroupHasBeenSet = true;
}

bool CreateConsumerGroupRequest::ConsumerGroupHasBeenSet() const
{
    return m_consumerGroupHasBeenSet;
}

string CreateConsumerGroupRequest::GetRemark() const
{
    return m_remark;
}

void CreateConsumerGroupRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool CreateConsumerGroupRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

vector<Tag> CreateConsumerGroupRequest::GetTagList() const
{
    return m_tagList;
}

void CreateConsumerGroupRequest::SetTagList(const vector<Tag>& _tagList)
{
    m_tagList = _tagList;
    m_tagListHasBeenSet = true;
}

bool CreateConsumerGroupRequest::TagListHasBeenSet() const
{
    return m_tagListHasBeenSet;
}


