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

#include <tencentcloud/trocket/v20230308/model/ModifyConsumerGroupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Trocket::V20230308::Model;
using namespace std;

ModifyConsumerGroupRequest::ModifyConsumerGroupRequest() :
    m_instanceIdHasBeenSet(false),
    m_consumerGroupHasBeenSet(false),
    m_consumeEnableHasBeenSet(false),
    m_consumeMessageOrderlyHasBeenSet(false),
    m_maxRetryTimesHasBeenSet(false),
    m_remarkHasBeenSet(false)
{
}

string ModifyConsumerGroupRequest::ToJsonString() const
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

    if (m_consumerGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumerGroup";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_consumerGroup.c_str(), allocator).Move(), allocator);
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

    if (m_maxRetryTimesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxRetryTimes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxRetryTimes, allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyConsumerGroupRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyConsumerGroupRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyConsumerGroupRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ModifyConsumerGroupRequest::GetConsumerGroup() const
{
    return m_consumerGroup;
}

void ModifyConsumerGroupRequest::SetConsumerGroup(const string& _consumerGroup)
{
    m_consumerGroup = _consumerGroup;
    m_consumerGroupHasBeenSet = true;
}

bool ModifyConsumerGroupRequest::ConsumerGroupHasBeenSet() const
{
    return m_consumerGroupHasBeenSet;
}

bool ModifyConsumerGroupRequest::GetConsumeEnable() const
{
    return m_consumeEnable;
}

void ModifyConsumerGroupRequest::SetConsumeEnable(const bool& _consumeEnable)
{
    m_consumeEnable = _consumeEnable;
    m_consumeEnableHasBeenSet = true;
}

bool ModifyConsumerGroupRequest::ConsumeEnableHasBeenSet() const
{
    return m_consumeEnableHasBeenSet;
}

bool ModifyConsumerGroupRequest::GetConsumeMessageOrderly() const
{
    return m_consumeMessageOrderly;
}

void ModifyConsumerGroupRequest::SetConsumeMessageOrderly(const bool& _consumeMessageOrderly)
{
    m_consumeMessageOrderly = _consumeMessageOrderly;
    m_consumeMessageOrderlyHasBeenSet = true;
}

bool ModifyConsumerGroupRequest::ConsumeMessageOrderlyHasBeenSet() const
{
    return m_consumeMessageOrderlyHasBeenSet;
}

int64_t ModifyConsumerGroupRequest::GetMaxRetryTimes() const
{
    return m_maxRetryTimes;
}

void ModifyConsumerGroupRequest::SetMaxRetryTimes(const int64_t& _maxRetryTimes)
{
    m_maxRetryTimes = _maxRetryTimes;
    m_maxRetryTimesHasBeenSet = true;
}

bool ModifyConsumerGroupRequest::MaxRetryTimesHasBeenSet() const
{
    return m_maxRetryTimesHasBeenSet;
}

string ModifyConsumerGroupRequest::GetRemark() const
{
    return m_remark;
}

void ModifyConsumerGroupRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool ModifyConsumerGroupRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}


