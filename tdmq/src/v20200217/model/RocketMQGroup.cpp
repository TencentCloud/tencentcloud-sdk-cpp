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

#include <tencentcloud/tdmq/v20200217/model/RocketMQGroup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

RocketMQGroup::RocketMQGroup() :
    m_nameHasBeenSet(false),
    m_consumerNumHasBeenSet(false),
    m_tPSHasBeenSet(false),
    m_totalAccumulativeHasBeenSet(false),
    m_consumptionModeHasBeenSet(false),
    m_readEnabledHasBeenSet(false),
    m_retryPartitionNumHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_clientProtocolHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_consumerTypeHasBeenSet(false),
    m_broadcastEnabledHasBeenSet(false),
    m_groupTypeHasBeenSet(false),
    m_retryMaxTimesHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_namespaceHasBeenSet(false)
{
}

CoreInternalOutcome RocketMQGroup::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQGroup.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("ConsumerNum") && !value["ConsumerNum"].IsNull())
    {
        if (!value["ConsumerNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQGroup.ConsumerNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_consumerNum = value["ConsumerNum"].GetUint64();
        m_consumerNumHasBeenSet = true;
    }

    if (value.HasMember("TPS") && !value["TPS"].IsNull())
    {
        if (!value["TPS"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQGroup.TPS` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_tPS = value["TPS"].GetUint64();
        m_tPSHasBeenSet = true;
    }

    if (value.HasMember("TotalAccumulative") && !value["TotalAccumulative"].IsNull())
    {
        if (!value["TotalAccumulative"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQGroup.TotalAccumulative` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalAccumulative = value["TotalAccumulative"].GetInt64();
        m_totalAccumulativeHasBeenSet = true;
    }

    if (value.HasMember("ConsumptionMode") && !value["ConsumptionMode"].IsNull())
    {
        if (!value["ConsumptionMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQGroup.ConsumptionMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_consumptionMode = value["ConsumptionMode"].GetInt64();
        m_consumptionModeHasBeenSet = true;
    }

    if (value.HasMember("ReadEnabled") && !value["ReadEnabled"].IsNull())
    {
        if (!value["ReadEnabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQGroup.ReadEnabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_readEnabled = value["ReadEnabled"].GetBool();
        m_readEnabledHasBeenSet = true;
    }

    if (value.HasMember("RetryPartitionNum") && !value["RetryPartitionNum"].IsNull())
    {
        if (!value["RetryPartitionNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQGroup.RetryPartitionNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_retryPartitionNum = value["RetryPartitionNum"].GetUint64();
        m_retryPartitionNumHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQGroup.CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQGroup.UpdateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetUint64();
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("ClientProtocol") && !value["ClientProtocol"].IsNull())
    {
        if (!value["ClientProtocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQGroup.ClientProtocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientProtocol = string(value["ClientProtocol"].GetString());
        m_clientProtocolHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQGroup.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("ConsumerType") && !value["ConsumerType"].IsNull())
    {
        if (!value["ConsumerType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQGroup.ConsumerType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_consumerType = string(value["ConsumerType"].GetString());
        m_consumerTypeHasBeenSet = true;
    }

    if (value.HasMember("BroadcastEnabled") && !value["BroadcastEnabled"].IsNull())
    {
        if (!value["BroadcastEnabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQGroup.BroadcastEnabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_broadcastEnabled = value["BroadcastEnabled"].GetBool();
        m_broadcastEnabledHasBeenSet = true;
    }

    if (value.HasMember("GroupType") && !value["GroupType"].IsNull())
    {
        if (!value["GroupType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQGroup.GroupType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupType = string(value["GroupType"].GetString());
        m_groupTypeHasBeenSet = true;
    }

    if (value.HasMember("RetryMaxTimes") && !value["RetryMaxTimes"].IsNull())
    {
        if (!value["RetryMaxTimes"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQGroup.RetryMaxTimes` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_retryMaxTimes = value["RetryMaxTimes"].GetUint64();
        m_retryMaxTimesHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQGroup.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("Namespace") && !value["Namespace"].IsNull())
    {
        if (!value["Namespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQGroup.Namespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespace = string(value["Namespace"].GetString());
        m_namespaceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RocketMQGroup::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_consumerNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumerNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_consumerNum, allocator);
    }

    if (m_tPSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TPS";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tPS, allocator);
    }

    if (m_totalAccumulativeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalAccumulative";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalAccumulative, allocator);
    }

    if (m_consumptionModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumptionMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_consumptionMode, allocator);
    }

    if (m_readEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_readEnabled, allocator);
    }

    if (m_retryPartitionNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetryPartitionNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_retryPartitionNum, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

    if (m_clientProtocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientProtocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientProtocol.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_consumerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumerType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_consumerType.c_str(), allocator).Move(), allocator);
    }

    if (m_broadcastEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BroadcastEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_broadcastEnabled, allocator);
    }

    if (m_groupTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupType.c_str(), allocator).Move(), allocator);
    }

    if (m_retryMaxTimesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetryMaxTimes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_retryMaxTimes, allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

}


string RocketMQGroup::GetName() const
{
    return m_name;
}

void RocketMQGroup::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool RocketMQGroup::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t RocketMQGroup::GetConsumerNum() const
{
    return m_consumerNum;
}

void RocketMQGroup::SetConsumerNum(const uint64_t& _consumerNum)
{
    m_consumerNum = _consumerNum;
    m_consumerNumHasBeenSet = true;
}

bool RocketMQGroup::ConsumerNumHasBeenSet() const
{
    return m_consumerNumHasBeenSet;
}

uint64_t RocketMQGroup::GetTPS() const
{
    return m_tPS;
}

void RocketMQGroup::SetTPS(const uint64_t& _tPS)
{
    m_tPS = _tPS;
    m_tPSHasBeenSet = true;
}

bool RocketMQGroup::TPSHasBeenSet() const
{
    return m_tPSHasBeenSet;
}

int64_t RocketMQGroup::GetTotalAccumulative() const
{
    return m_totalAccumulative;
}

void RocketMQGroup::SetTotalAccumulative(const int64_t& _totalAccumulative)
{
    m_totalAccumulative = _totalAccumulative;
    m_totalAccumulativeHasBeenSet = true;
}

bool RocketMQGroup::TotalAccumulativeHasBeenSet() const
{
    return m_totalAccumulativeHasBeenSet;
}

int64_t RocketMQGroup::GetConsumptionMode() const
{
    return m_consumptionMode;
}

void RocketMQGroup::SetConsumptionMode(const int64_t& _consumptionMode)
{
    m_consumptionMode = _consumptionMode;
    m_consumptionModeHasBeenSet = true;
}

bool RocketMQGroup::ConsumptionModeHasBeenSet() const
{
    return m_consumptionModeHasBeenSet;
}

bool RocketMQGroup::GetReadEnabled() const
{
    return m_readEnabled;
}

void RocketMQGroup::SetReadEnabled(const bool& _readEnabled)
{
    m_readEnabled = _readEnabled;
    m_readEnabledHasBeenSet = true;
}

bool RocketMQGroup::ReadEnabledHasBeenSet() const
{
    return m_readEnabledHasBeenSet;
}

uint64_t RocketMQGroup::GetRetryPartitionNum() const
{
    return m_retryPartitionNum;
}

void RocketMQGroup::SetRetryPartitionNum(const uint64_t& _retryPartitionNum)
{
    m_retryPartitionNum = _retryPartitionNum;
    m_retryPartitionNumHasBeenSet = true;
}

bool RocketMQGroup::RetryPartitionNumHasBeenSet() const
{
    return m_retryPartitionNumHasBeenSet;
}

uint64_t RocketMQGroup::GetCreateTime() const
{
    return m_createTime;
}

void RocketMQGroup::SetCreateTime(const uint64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool RocketMQGroup::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t RocketMQGroup::GetUpdateTime() const
{
    return m_updateTime;
}

void RocketMQGroup::SetUpdateTime(const uint64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool RocketMQGroup::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string RocketMQGroup::GetClientProtocol() const
{
    return m_clientProtocol;
}

void RocketMQGroup::SetClientProtocol(const string& _clientProtocol)
{
    m_clientProtocol = _clientProtocol;
    m_clientProtocolHasBeenSet = true;
}

bool RocketMQGroup::ClientProtocolHasBeenSet() const
{
    return m_clientProtocolHasBeenSet;
}

string RocketMQGroup::GetRemark() const
{
    return m_remark;
}

void RocketMQGroup::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool RocketMQGroup::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string RocketMQGroup::GetConsumerType() const
{
    return m_consumerType;
}

void RocketMQGroup::SetConsumerType(const string& _consumerType)
{
    m_consumerType = _consumerType;
    m_consumerTypeHasBeenSet = true;
}

bool RocketMQGroup::ConsumerTypeHasBeenSet() const
{
    return m_consumerTypeHasBeenSet;
}

bool RocketMQGroup::GetBroadcastEnabled() const
{
    return m_broadcastEnabled;
}

void RocketMQGroup::SetBroadcastEnabled(const bool& _broadcastEnabled)
{
    m_broadcastEnabled = _broadcastEnabled;
    m_broadcastEnabledHasBeenSet = true;
}

bool RocketMQGroup::BroadcastEnabledHasBeenSet() const
{
    return m_broadcastEnabledHasBeenSet;
}

string RocketMQGroup::GetGroupType() const
{
    return m_groupType;
}

void RocketMQGroup::SetGroupType(const string& _groupType)
{
    m_groupType = _groupType;
    m_groupTypeHasBeenSet = true;
}

bool RocketMQGroup::GroupTypeHasBeenSet() const
{
    return m_groupTypeHasBeenSet;
}

uint64_t RocketMQGroup::GetRetryMaxTimes() const
{
    return m_retryMaxTimes;
}

void RocketMQGroup::SetRetryMaxTimes(const uint64_t& _retryMaxTimes)
{
    m_retryMaxTimes = _retryMaxTimes;
    m_retryMaxTimesHasBeenSet = true;
}

bool RocketMQGroup::RetryMaxTimesHasBeenSet() const
{
    return m_retryMaxTimesHasBeenSet;
}

string RocketMQGroup::GetInstanceId() const
{
    return m_instanceId;
}

void RocketMQGroup::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool RocketMQGroup::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string RocketMQGroup::GetNamespace() const
{
    return m_namespace;
}

void RocketMQGroup::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool RocketMQGroup::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

