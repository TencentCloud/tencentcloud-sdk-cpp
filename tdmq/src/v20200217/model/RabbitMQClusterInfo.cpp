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

#include <tencentcloud/tdmq/v20200217/model/RabbitMQClusterInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

RabbitMQClusterInfo::RabbitMQClusterInfo() :
    m_clusterIdHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_vpcsHasBeenSet(false),
    m_zoneIdsHasBeenSet(false),
    m_virtualHostNumberHasBeenSet(false),
    m_queueNumberHasBeenSet(false),
    m_messagePublishRateHasBeenSet(false),
    m_messageStackNumberHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_channelNumberHasBeenSet(false),
    m_connectionNumberHasBeenSet(false),
    m_consumerNumberHasBeenSet(false),
    m_exchangeNumberHasBeenSet(false),
    m_exceptionInformationHasBeenSet(false),
    m_clusterStatusHasBeenSet(false),
    m_autoRenewFlagHasBeenSet(false),
    m_mirrorQueuePolicyFlagHasBeenSet(false),
    m_messageConsumeRateHasBeenSet(false),
    m_clusterVersionHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_isolatedTimeHasBeenSet(false),
    m_containerHasBeenSet(false)
{
}

CoreInternalOutcome RabbitMQClusterInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQClusterInfo.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQClusterInfo.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQClusterInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQClusterInfo.CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQClusterInfo.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("Vpcs") && !value["Vpcs"].IsNull())
    {
        if (!value["Vpcs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RabbitMQClusterInfo.Vpcs` is not array type"));

        const rapidjson::Value &tmpValue = value["Vpcs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VpcEndpointInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_vpcs.push_back(item);
        }
        m_vpcsHasBeenSet = true;
    }

    if (value.HasMember("ZoneIds") && !value["ZoneIds"].IsNull())
    {
        if (!value["ZoneIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RabbitMQClusterInfo.ZoneIds` is not array type"));

        const rapidjson::Value &tmpValue = value["ZoneIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_zoneIds.push_back((*itr).GetInt64());
        }
        m_zoneIdsHasBeenSet = true;
    }

    if (value.HasMember("VirtualHostNumber") && !value["VirtualHostNumber"].IsNull())
    {
        if (!value["VirtualHostNumber"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQClusterInfo.VirtualHostNumber` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_virtualHostNumber = value["VirtualHostNumber"].GetInt64();
        m_virtualHostNumberHasBeenSet = true;
    }

    if (value.HasMember("QueueNumber") && !value["QueueNumber"].IsNull())
    {
        if (!value["QueueNumber"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQClusterInfo.QueueNumber` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_queueNumber = value["QueueNumber"].GetInt64();
        m_queueNumberHasBeenSet = true;
    }

    if (value.HasMember("MessagePublishRate") && !value["MessagePublishRate"].IsNull())
    {
        if (!value["MessagePublishRate"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQClusterInfo.MessagePublishRate` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_messagePublishRate = value["MessagePublishRate"].GetDouble();
        m_messagePublishRateHasBeenSet = true;
    }

    if (value.HasMember("MessageStackNumber") && !value["MessageStackNumber"].IsNull())
    {
        if (!value["MessageStackNumber"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQClusterInfo.MessageStackNumber` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_messageStackNumber = value["MessageStackNumber"].GetInt64();
        m_messageStackNumberHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQClusterInfo.ExpireTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = value["ExpireTime"].GetInt64();
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("ChannelNumber") && !value["ChannelNumber"].IsNull())
    {
        if (!value["ChannelNumber"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQClusterInfo.ChannelNumber` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_channelNumber = value["ChannelNumber"].GetInt64();
        m_channelNumberHasBeenSet = true;
    }

    if (value.HasMember("ConnectionNumber") && !value["ConnectionNumber"].IsNull())
    {
        if (!value["ConnectionNumber"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQClusterInfo.ConnectionNumber` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_connectionNumber = value["ConnectionNumber"].GetInt64();
        m_connectionNumberHasBeenSet = true;
    }

    if (value.HasMember("ConsumerNumber") && !value["ConsumerNumber"].IsNull())
    {
        if (!value["ConsumerNumber"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQClusterInfo.ConsumerNumber` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_consumerNumber = value["ConsumerNumber"].GetInt64();
        m_consumerNumberHasBeenSet = true;
    }

    if (value.HasMember("ExchangeNumber") && !value["ExchangeNumber"].IsNull())
    {
        if (!value["ExchangeNumber"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQClusterInfo.ExchangeNumber` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_exchangeNumber = value["ExchangeNumber"].GetInt64();
        m_exchangeNumberHasBeenSet = true;
    }

    if (value.HasMember("ExceptionInformation") && !value["ExceptionInformation"].IsNull())
    {
        if (!value["ExceptionInformation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQClusterInfo.ExceptionInformation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_exceptionInformation = string(value["ExceptionInformation"].GetString());
        m_exceptionInformationHasBeenSet = true;
    }

    if (value.HasMember("ClusterStatus") && !value["ClusterStatus"].IsNull())
    {
        if (!value["ClusterStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQClusterInfo.ClusterStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_clusterStatus = value["ClusterStatus"].GetInt64();
        m_clusterStatusHasBeenSet = true;
    }

    if (value.HasMember("AutoRenewFlag") && !value["AutoRenewFlag"].IsNull())
    {
        if (!value["AutoRenewFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQClusterInfo.AutoRenewFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_autoRenewFlag = value["AutoRenewFlag"].GetInt64();
        m_autoRenewFlagHasBeenSet = true;
    }

    if (value.HasMember("MirrorQueuePolicyFlag") && !value["MirrorQueuePolicyFlag"].IsNull())
    {
        if (!value["MirrorQueuePolicyFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQClusterInfo.MirrorQueuePolicyFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_mirrorQueuePolicyFlag = value["MirrorQueuePolicyFlag"].GetInt64();
        m_mirrorQueuePolicyFlagHasBeenSet = true;
    }

    if (value.HasMember("MessageConsumeRate") && !value["MessageConsumeRate"].IsNull())
    {
        if (!value["MessageConsumeRate"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQClusterInfo.MessageConsumeRate` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_messageConsumeRate = value["MessageConsumeRate"].GetDouble();
        m_messageConsumeRateHasBeenSet = true;
    }

    if (value.HasMember("ClusterVersion") && !value["ClusterVersion"].IsNull())
    {
        if (!value["ClusterVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQClusterInfo.ClusterVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterVersion = string(value["ClusterVersion"].GetString());
        m_clusterVersionHasBeenSet = true;
    }

    if (value.HasMember("PayMode") && !value["PayMode"].IsNull())
    {
        if (!value["PayMode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQClusterInfo.PayMode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_payMode = value["PayMode"].GetUint64();
        m_payModeHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQClusterInfo.InstanceType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = value["InstanceType"].GetUint64();
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("IsolatedTime") && !value["IsolatedTime"].IsNull())
    {
        if (!value["IsolatedTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQClusterInfo.IsolatedTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isolatedTime = value["IsolatedTime"].GetInt64();
        m_isolatedTimeHasBeenSet = true;
    }

    if (value.HasMember("Container") && !value["Container"].IsNull())
    {
        if (!value["Container"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQClusterInfo.Container` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_container = value["Container"].GetBool();
        m_containerHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RabbitMQClusterInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vpcs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_vpcs.begin(); itr != m_vpcs.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_zoneIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_zoneIds.begin(); itr != m_zoneIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_virtualHostNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VirtualHostNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_virtualHostNumber, allocator);
    }

    if (m_queueNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueueNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_queueNumber, allocator);
    }

    if (m_messagePublishRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MessagePublishRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_messagePublishRate, allocator);
    }

    if (m_messageStackNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MessageStackNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_messageStackNumber, allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expireTime, allocator);
    }

    if (m_channelNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_channelNumber, allocator);
    }

    if (m_connectionNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectionNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_connectionNumber, allocator);
    }

    if (m_consumerNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumerNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_consumerNumber, allocator);
    }

    if (m_exchangeNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExchangeNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_exchangeNumber, allocator);
    }

    if (m_exceptionInformationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExceptionInformation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_exceptionInformation.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_clusterStatus, allocator);
    }

    if (m_autoRenewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoRenewFlag, allocator);
    }

    if (m_mirrorQueuePolicyFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MirrorQueuePolicyFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mirrorQueuePolicyFlag, allocator);
    }

    if (m_messageConsumeRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MessageConsumeRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_messageConsumeRate, allocator);
    }

    if (m_clusterVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_payMode, allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceType, allocator);
    }

    if (m_isolatedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsolatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isolatedTime, allocator);
    }

    if (m_containerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Container";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_container, allocator);
    }

}


string RabbitMQClusterInfo::GetClusterId() const
{
    return m_clusterId;
}

void RabbitMQClusterInfo::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool RabbitMQClusterInfo::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string RabbitMQClusterInfo::GetClusterName() const
{
    return m_clusterName;
}

void RabbitMQClusterInfo::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool RabbitMQClusterInfo::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string RabbitMQClusterInfo::GetRegion() const
{
    return m_region;
}

void RabbitMQClusterInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool RabbitMQClusterInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

uint64_t RabbitMQClusterInfo::GetCreateTime() const
{
    return m_createTime;
}

void RabbitMQClusterInfo::SetCreateTime(const uint64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool RabbitMQClusterInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string RabbitMQClusterInfo::GetRemark() const
{
    return m_remark;
}

void RabbitMQClusterInfo::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool RabbitMQClusterInfo::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

vector<VpcEndpointInfo> RabbitMQClusterInfo::GetVpcs() const
{
    return m_vpcs;
}

void RabbitMQClusterInfo::SetVpcs(const vector<VpcEndpointInfo>& _vpcs)
{
    m_vpcs = _vpcs;
    m_vpcsHasBeenSet = true;
}

bool RabbitMQClusterInfo::VpcsHasBeenSet() const
{
    return m_vpcsHasBeenSet;
}

vector<int64_t> RabbitMQClusterInfo::GetZoneIds() const
{
    return m_zoneIds;
}

void RabbitMQClusterInfo::SetZoneIds(const vector<int64_t>& _zoneIds)
{
    m_zoneIds = _zoneIds;
    m_zoneIdsHasBeenSet = true;
}

bool RabbitMQClusterInfo::ZoneIdsHasBeenSet() const
{
    return m_zoneIdsHasBeenSet;
}

int64_t RabbitMQClusterInfo::GetVirtualHostNumber() const
{
    return m_virtualHostNumber;
}

void RabbitMQClusterInfo::SetVirtualHostNumber(const int64_t& _virtualHostNumber)
{
    m_virtualHostNumber = _virtualHostNumber;
    m_virtualHostNumberHasBeenSet = true;
}

bool RabbitMQClusterInfo::VirtualHostNumberHasBeenSet() const
{
    return m_virtualHostNumberHasBeenSet;
}

int64_t RabbitMQClusterInfo::GetQueueNumber() const
{
    return m_queueNumber;
}

void RabbitMQClusterInfo::SetQueueNumber(const int64_t& _queueNumber)
{
    m_queueNumber = _queueNumber;
    m_queueNumberHasBeenSet = true;
}

bool RabbitMQClusterInfo::QueueNumberHasBeenSet() const
{
    return m_queueNumberHasBeenSet;
}

double RabbitMQClusterInfo::GetMessagePublishRate() const
{
    return m_messagePublishRate;
}

void RabbitMQClusterInfo::SetMessagePublishRate(const double& _messagePublishRate)
{
    m_messagePublishRate = _messagePublishRate;
    m_messagePublishRateHasBeenSet = true;
}

bool RabbitMQClusterInfo::MessagePublishRateHasBeenSet() const
{
    return m_messagePublishRateHasBeenSet;
}

int64_t RabbitMQClusterInfo::GetMessageStackNumber() const
{
    return m_messageStackNumber;
}

void RabbitMQClusterInfo::SetMessageStackNumber(const int64_t& _messageStackNumber)
{
    m_messageStackNumber = _messageStackNumber;
    m_messageStackNumberHasBeenSet = true;
}

bool RabbitMQClusterInfo::MessageStackNumberHasBeenSet() const
{
    return m_messageStackNumberHasBeenSet;
}

int64_t RabbitMQClusterInfo::GetExpireTime() const
{
    return m_expireTime;
}

void RabbitMQClusterInfo::SetExpireTime(const int64_t& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool RabbitMQClusterInfo::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

int64_t RabbitMQClusterInfo::GetChannelNumber() const
{
    return m_channelNumber;
}

void RabbitMQClusterInfo::SetChannelNumber(const int64_t& _channelNumber)
{
    m_channelNumber = _channelNumber;
    m_channelNumberHasBeenSet = true;
}

bool RabbitMQClusterInfo::ChannelNumberHasBeenSet() const
{
    return m_channelNumberHasBeenSet;
}

int64_t RabbitMQClusterInfo::GetConnectionNumber() const
{
    return m_connectionNumber;
}

void RabbitMQClusterInfo::SetConnectionNumber(const int64_t& _connectionNumber)
{
    m_connectionNumber = _connectionNumber;
    m_connectionNumberHasBeenSet = true;
}

bool RabbitMQClusterInfo::ConnectionNumberHasBeenSet() const
{
    return m_connectionNumberHasBeenSet;
}

int64_t RabbitMQClusterInfo::GetConsumerNumber() const
{
    return m_consumerNumber;
}

void RabbitMQClusterInfo::SetConsumerNumber(const int64_t& _consumerNumber)
{
    m_consumerNumber = _consumerNumber;
    m_consumerNumberHasBeenSet = true;
}

bool RabbitMQClusterInfo::ConsumerNumberHasBeenSet() const
{
    return m_consumerNumberHasBeenSet;
}

int64_t RabbitMQClusterInfo::GetExchangeNumber() const
{
    return m_exchangeNumber;
}

void RabbitMQClusterInfo::SetExchangeNumber(const int64_t& _exchangeNumber)
{
    m_exchangeNumber = _exchangeNumber;
    m_exchangeNumberHasBeenSet = true;
}

bool RabbitMQClusterInfo::ExchangeNumberHasBeenSet() const
{
    return m_exchangeNumberHasBeenSet;
}

string RabbitMQClusterInfo::GetExceptionInformation() const
{
    return m_exceptionInformation;
}

void RabbitMQClusterInfo::SetExceptionInformation(const string& _exceptionInformation)
{
    m_exceptionInformation = _exceptionInformation;
    m_exceptionInformationHasBeenSet = true;
}

bool RabbitMQClusterInfo::ExceptionInformationHasBeenSet() const
{
    return m_exceptionInformationHasBeenSet;
}

int64_t RabbitMQClusterInfo::GetClusterStatus() const
{
    return m_clusterStatus;
}

void RabbitMQClusterInfo::SetClusterStatus(const int64_t& _clusterStatus)
{
    m_clusterStatus = _clusterStatus;
    m_clusterStatusHasBeenSet = true;
}

bool RabbitMQClusterInfo::ClusterStatusHasBeenSet() const
{
    return m_clusterStatusHasBeenSet;
}

int64_t RabbitMQClusterInfo::GetAutoRenewFlag() const
{
    return m_autoRenewFlag;
}

void RabbitMQClusterInfo::SetAutoRenewFlag(const int64_t& _autoRenewFlag)
{
    m_autoRenewFlag = _autoRenewFlag;
    m_autoRenewFlagHasBeenSet = true;
}

bool RabbitMQClusterInfo::AutoRenewFlagHasBeenSet() const
{
    return m_autoRenewFlagHasBeenSet;
}

int64_t RabbitMQClusterInfo::GetMirrorQueuePolicyFlag() const
{
    return m_mirrorQueuePolicyFlag;
}

void RabbitMQClusterInfo::SetMirrorQueuePolicyFlag(const int64_t& _mirrorQueuePolicyFlag)
{
    m_mirrorQueuePolicyFlag = _mirrorQueuePolicyFlag;
    m_mirrorQueuePolicyFlagHasBeenSet = true;
}

bool RabbitMQClusterInfo::MirrorQueuePolicyFlagHasBeenSet() const
{
    return m_mirrorQueuePolicyFlagHasBeenSet;
}

double RabbitMQClusterInfo::GetMessageConsumeRate() const
{
    return m_messageConsumeRate;
}

void RabbitMQClusterInfo::SetMessageConsumeRate(const double& _messageConsumeRate)
{
    m_messageConsumeRate = _messageConsumeRate;
    m_messageConsumeRateHasBeenSet = true;
}

bool RabbitMQClusterInfo::MessageConsumeRateHasBeenSet() const
{
    return m_messageConsumeRateHasBeenSet;
}

string RabbitMQClusterInfo::GetClusterVersion() const
{
    return m_clusterVersion;
}

void RabbitMQClusterInfo::SetClusterVersion(const string& _clusterVersion)
{
    m_clusterVersion = _clusterVersion;
    m_clusterVersionHasBeenSet = true;
}

bool RabbitMQClusterInfo::ClusterVersionHasBeenSet() const
{
    return m_clusterVersionHasBeenSet;
}

uint64_t RabbitMQClusterInfo::GetPayMode() const
{
    return m_payMode;
}

void RabbitMQClusterInfo::SetPayMode(const uint64_t& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool RabbitMQClusterInfo::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

uint64_t RabbitMQClusterInfo::GetInstanceType() const
{
    return m_instanceType;
}

void RabbitMQClusterInfo::SetInstanceType(const uint64_t& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool RabbitMQClusterInfo::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

int64_t RabbitMQClusterInfo::GetIsolatedTime() const
{
    return m_isolatedTime;
}

void RabbitMQClusterInfo::SetIsolatedTime(const int64_t& _isolatedTime)
{
    m_isolatedTime = _isolatedTime;
    m_isolatedTimeHasBeenSet = true;
}

bool RabbitMQClusterInfo::IsolatedTimeHasBeenSet() const
{
    return m_isolatedTimeHasBeenSet;
}

bool RabbitMQClusterInfo::GetContainer() const
{
    return m_container;
}

void RabbitMQClusterInfo::SetContainer(const bool& _container)
{
    m_container = _container;
    m_containerHasBeenSet = true;
}

bool RabbitMQClusterInfo::ContainerHasBeenSet() const
{
    return m_containerHasBeenSet;
}

