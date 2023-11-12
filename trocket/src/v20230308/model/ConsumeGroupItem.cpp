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

#include <tencentcloud/trocket/v20230308/model/ConsumeGroupItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trocket::V20230308::Model;
using namespace std;

ConsumeGroupItem::ConsumeGroupItem() :
    m_instanceIdHasBeenSet(false),
    m_consumerGroupHasBeenSet(false),
    m_consumeEnableHasBeenSet(false),
    m_consumeMessageOrderlyHasBeenSet(false),
    m_maxRetryTimesHasBeenSet(false),
    m_remarkHasBeenSet(false)
{
}

CoreInternalOutcome ConsumeGroupItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumeGroupItem.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("ConsumerGroup") && !value["ConsumerGroup"].IsNull())
    {
        if (!value["ConsumerGroup"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumeGroupItem.ConsumerGroup` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_consumerGroup = string(value["ConsumerGroup"].GetString());
        m_consumerGroupHasBeenSet = true;
    }

    if (value.HasMember("ConsumeEnable") && !value["ConsumeEnable"].IsNull())
    {
        if (!value["ConsumeEnable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumeGroupItem.ConsumeEnable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_consumeEnable = value["ConsumeEnable"].GetBool();
        m_consumeEnableHasBeenSet = true;
    }

    if (value.HasMember("ConsumeMessageOrderly") && !value["ConsumeMessageOrderly"].IsNull())
    {
        if (!value["ConsumeMessageOrderly"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumeGroupItem.ConsumeMessageOrderly` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_consumeMessageOrderly = value["ConsumeMessageOrderly"].GetBool();
        m_consumeMessageOrderlyHasBeenSet = true;
    }

    if (value.HasMember("MaxRetryTimes") && !value["MaxRetryTimes"].IsNull())
    {
        if (!value["MaxRetryTimes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumeGroupItem.MaxRetryTimes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxRetryTimes = value["MaxRetryTimes"].GetInt64();
        m_maxRetryTimesHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumeGroupItem.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ConsumeGroupItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_consumerGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumerGroup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_consumerGroup.c_str(), allocator).Move(), allocator);
    }

    if (m_consumeEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumeEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_consumeEnable, allocator);
    }

    if (m_consumeMessageOrderlyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumeMessageOrderly";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_consumeMessageOrderly, allocator);
    }

    if (m_maxRetryTimesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxRetryTimes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxRetryTimes, allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

}


string ConsumeGroupItem::GetInstanceId() const
{
    return m_instanceId;
}

void ConsumeGroupItem::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ConsumeGroupItem::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ConsumeGroupItem::GetConsumerGroup() const
{
    return m_consumerGroup;
}

void ConsumeGroupItem::SetConsumerGroup(const string& _consumerGroup)
{
    m_consumerGroup = _consumerGroup;
    m_consumerGroupHasBeenSet = true;
}

bool ConsumeGroupItem::ConsumerGroupHasBeenSet() const
{
    return m_consumerGroupHasBeenSet;
}

bool ConsumeGroupItem::GetConsumeEnable() const
{
    return m_consumeEnable;
}

void ConsumeGroupItem::SetConsumeEnable(const bool& _consumeEnable)
{
    m_consumeEnable = _consumeEnable;
    m_consumeEnableHasBeenSet = true;
}

bool ConsumeGroupItem::ConsumeEnableHasBeenSet() const
{
    return m_consumeEnableHasBeenSet;
}

bool ConsumeGroupItem::GetConsumeMessageOrderly() const
{
    return m_consumeMessageOrderly;
}

void ConsumeGroupItem::SetConsumeMessageOrderly(const bool& _consumeMessageOrderly)
{
    m_consumeMessageOrderly = _consumeMessageOrderly;
    m_consumeMessageOrderlyHasBeenSet = true;
}

bool ConsumeGroupItem::ConsumeMessageOrderlyHasBeenSet() const
{
    return m_consumeMessageOrderlyHasBeenSet;
}

int64_t ConsumeGroupItem::GetMaxRetryTimes() const
{
    return m_maxRetryTimes;
}

void ConsumeGroupItem::SetMaxRetryTimes(const int64_t& _maxRetryTimes)
{
    m_maxRetryTimes = _maxRetryTimes;
    m_maxRetryTimesHasBeenSet = true;
}

bool ConsumeGroupItem::MaxRetryTimesHasBeenSet() const
{
    return m_maxRetryTimesHasBeenSet;
}

string ConsumeGroupItem::GetRemark() const
{
    return m_remark;
}

void ConsumeGroupItem::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool ConsumeGroupItem::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

