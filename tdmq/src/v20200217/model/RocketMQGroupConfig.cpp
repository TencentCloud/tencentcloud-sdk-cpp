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

#include <tencentcloud/tdmq/v20200217/model/RocketMQGroupConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

RocketMQGroupConfig::RocketMQGroupConfig() :
    m_namespaceHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_consumeBroadcastEnableHasBeenSet(false),
    m_consumeEnableHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_consumerGroupTypeHasBeenSet(false)
{
}

CoreInternalOutcome RocketMQGroupConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Namespace") && !value["Namespace"].IsNull())
    {
        if (!value["Namespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQGroupConfig.Namespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespace = string(value["Namespace"].GetString());
        m_namespaceHasBeenSet = true;
    }

    if (value.HasMember("GroupName") && !value["GroupName"].IsNull())
    {
        if (!value["GroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQGroupConfig.GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(value["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }

    if (value.HasMember("ConsumeBroadcastEnable") && !value["ConsumeBroadcastEnable"].IsNull())
    {
        if (!value["ConsumeBroadcastEnable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQGroupConfig.ConsumeBroadcastEnable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_consumeBroadcastEnable = value["ConsumeBroadcastEnable"].GetBool();
        m_consumeBroadcastEnableHasBeenSet = true;
    }

    if (value.HasMember("ConsumeEnable") && !value["ConsumeEnable"].IsNull())
    {
        if (!value["ConsumeEnable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQGroupConfig.ConsumeEnable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_consumeEnable = value["ConsumeEnable"].GetBool();
        m_consumeEnableHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQGroupConfig.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("ConsumerGroupType") && !value["ConsumerGroupType"].IsNull())
    {
        if (!value["ConsumerGroupType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQGroupConfig.ConsumerGroupType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_consumerGroupType = string(value["ConsumerGroupType"].GetString());
        m_consumerGroupTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RocketMQGroupConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_consumeBroadcastEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumeBroadcastEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_consumeBroadcastEnable, allocator);
    }

    if (m_consumeEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumeEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_consumeEnable, allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_consumerGroupTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumerGroupType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_consumerGroupType.c_str(), allocator).Move(), allocator);
    }

}


string RocketMQGroupConfig::GetNamespace() const
{
    return m_namespace;
}

void RocketMQGroupConfig::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool RocketMQGroupConfig::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string RocketMQGroupConfig::GetGroupName() const
{
    return m_groupName;
}

void RocketMQGroupConfig::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool RocketMQGroupConfig::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

bool RocketMQGroupConfig::GetConsumeBroadcastEnable() const
{
    return m_consumeBroadcastEnable;
}

void RocketMQGroupConfig::SetConsumeBroadcastEnable(const bool& _consumeBroadcastEnable)
{
    m_consumeBroadcastEnable = _consumeBroadcastEnable;
    m_consumeBroadcastEnableHasBeenSet = true;
}

bool RocketMQGroupConfig::ConsumeBroadcastEnableHasBeenSet() const
{
    return m_consumeBroadcastEnableHasBeenSet;
}

bool RocketMQGroupConfig::GetConsumeEnable() const
{
    return m_consumeEnable;
}

void RocketMQGroupConfig::SetConsumeEnable(const bool& _consumeEnable)
{
    m_consumeEnable = _consumeEnable;
    m_consumeEnableHasBeenSet = true;
}

bool RocketMQGroupConfig::ConsumeEnableHasBeenSet() const
{
    return m_consumeEnableHasBeenSet;
}

string RocketMQGroupConfig::GetRemark() const
{
    return m_remark;
}

void RocketMQGroupConfig::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool RocketMQGroupConfig::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string RocketMQGroupConfig::GetConsumerGroupType() const
{
    return m_consumerGroupType;
}

void RocketMQGroupConfig::SetConsumerGroupType(const string& _consumerGroupType)
{
    m_consumerGroupType = _consumerGroupType;
    m_consumerGroupTypeHasBeenSet = true;
}

bool RocketMQGroupConfig::ConsumerGroupTypeHasBeenSet() const
{
    return m_consumerGroupTypeHasBeenSet;
}

