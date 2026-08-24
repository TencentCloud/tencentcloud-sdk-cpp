/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/csip/v20221121/model/LogDeliveryCkafkaConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

LogDeliveryCkafkaConfig::LogDeliveryCkafkaConfig() :
    m_vipTypeHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_vipHasBeenSet(false),
    m_vportHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_domainPortHasBeenSet(false),
    m_regionIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_healthyHasBeenSet(false),
    m_logTypeHasBeenSet(false),
    m_topicIdHasBeenSet(false),
    m_topicNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_statusMessagesHasBeenSet(false),
    m_isOpenHasBeenSet(false)
{
}

CoreInternalOutcome LogDeliveryCkafkaConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VipType") && !value["VipType"].IsNull())
    {
        if (!value["VipType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LogDeliveryCkafkaConfig.VipType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vipType = value["VipType"].GetInt64();
        m_vipTypeHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogDeliveryCkafkaConfig.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogDeliveryCkafkaConfig.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("Vip") && !value["Vip"].IsNull())
    {
        if (!value["Vip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogDeliveryCkafkaConfig.Vip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vip = string(value["Vip"].GetString());
        m_vipHasBeenSet = true;
    }

    if (value.HasMember("Vport") && !value["Vport"].IsNull())
    {
        if (!value["Vport"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogDeliveryCkafkaConfig.Vport` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vport = string(value["Vport"].GetString());
        m_vportHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogDeliveryCkafkaConfig.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("DomainPort") && !value["DomainPort"].IsNull())
    {
        if (!value["DomainPort"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogDeliveryCkafkaConfig.DomainPort` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domainPort = string(value["DomainPort"].GetString());
        m_domainPortHasBeenSet = true;
    }

    if (value.HasMember("RegionId") && !value["RegionId"].IsNull())
    {
        if (!value["RegionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogDeliveryCkafkaConfig.RegionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionId = string(value["RegionId"].GetString());
        m_regionIdHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogDeliveryCkafkaConfig.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogDeliveryCkafkaConfig.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("Healthy") && !value["Healthy"].IsNull())
    {
        if (!value["Healthy"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LogDeliveryCkafkaConfig.Healthy` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_healthy = value["Healthy"].GetInt64();
        m_healthyHasBeenSet = true;
    }

    if (value.HasMember("LogType") && !value["LogType"].IsNull())
    {
        if (!value["LogType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LogDeliveryCkafkaConfig.LogType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_logType = value["LogType"].GetInt64();
        m_logTypeHasBeenSet = true;
    }

    if (value.HasMember("TopicId") && !value["TopicId"].IsNull())
    {
        if (!value["TopicId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogDeliveryCkafkaConfig.TopicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicId = string(value["TopicId"].GetString());
        m_topicIdHasBeenSet = true;
    }

    if (value.HasMember("TopicName") && !value["TopicName"].IsNull())
    {
        if (!value["TopicName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogDeliveryCkafkaConfig.TopicName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicName = string(value["TopicName"].GetString());
        m_topicNameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LogDeliveryCkafkaConfig.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("StatusMessages") && !value["StatusMessages"].IsNull())
    {
        if (!value["StatusMessages"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogDeliveryCkafkaConfig.StatusMessages` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusMessages = string(value["StatusMessages"].GetString());
        m_statusMessagesHasBeenSet = true;
    }

    if (value.HasMember("IsOpen") && !value["IsOpen"].IsNull())
    {
        if (!value["IsOpen"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LogDeliveryCkafkaConfig.IsOpen` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isOpen = value["IsOpen"].GetInt64();
        m_isOpenHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LogDeliveryCkafkaConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_vipTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VipType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vipType, allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_vipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vip.c_str(), allocator).Move(), allocator);
    }

    if (m_vportHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vport";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vport.c_str(), allocator).Move(), allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_domainPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domainPort.c_str(), allocator).Move(), allocator);
    }

    if (m_regionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionId.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_healthyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Healthy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_healthy, allocator);
    }

    if (m_logTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_logType, allocator);
    }

    if (m_topicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicId.c_str(), allocator).Move(), allocator);
    }

    if (m_topicNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicName.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_statusMessagesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusMessages";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_statusMessages.c_str(), allocator).Move(), allocator);
    }

    if (m_isOpenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsOpen";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isOpen, allocator);
    }

}


int64_t LogDeliveryCkafkaConfig::GetVipType() const
{
    return m_vipType;
}

void LogDeliveryCkafkaConfig::SetVipType(const int64_t& _vipType)
{
    m_vipType = _vipType;
    m_vipTypeHasBeenSet = true;
}

bool LogDeliveryCkafkaConfig::VipTypeHasBeenSet() const
{
    return m_vipTypeHasBeenSet;
}

string LogDeliveryCkafkaConfig::GetInstanceId() const
{
    return m_instanceId;
}

void LogDeliveryCkafkaConfig::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool LogDeliveryCkafkaConfig::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string LogDeliveryCkafkaConfig::GetInstanceName() const
{
    return m_instanceName;
}

void LogDeliveryCkafkaConfig::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool LogDeliveryCkafkaConfig::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string LogDeliveryCkafkaConfig::GetVip() const
{
    return m_vip;
}

void LogDeliveryCkafkaConfig::SetVip(const string& _vip)
{
    m_vip = _vip;
    m_vipHasBeenSet = true;
}

bool LogDeliveryCkafkaConfig::VipHasBeenSet() const
{
    return m_vipHasBeenSet;
}

string LogDeliveryCkafkaConfig::GetVport() const
{
    return m_vport;
}

void LogDeliveryCkafkaConfig::SetVport(const string& _vport)
{
    m_vport = _vport;
    m_vportHasBeenSet = true;
}

bool LogDeliveryCkafkaConfig::VportHasBeenSet() const
{
    return m_vportHasBeenSet;
}

string LogDeliveryCkafkaConfig::GetDomain() const
{
    return m_domain;
}

void LogDeliveryCkafkaConfig::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool LogDeliveryCkafkaConfig::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string LogDeliveryCkafkaConfig::GetDomainPort() const
{
    return m_domainPort;
}

void LogDeliveryCkafkaConfig::SetDomainPort(const string& _domainPort)
{
    m_domainPort = _domainPort;
    m_domainPortHasBeenSet = true;
}

bool LogDeliveryCkafkaConfig::DomainPortHasBeenSet() const
{
    return m_domainPortHasBeenSet;
}

string LogDeliveryCkafkaConfig::GetRegionId() const
{
    return m_regionId;
}

void LogDeliveryCkafkaConfig::SetRegionId(const string& _regionId)
{
    m_regionId = _regionId;
    m_regionIdHasBeenSet = true;
}

bool LogDeliveryCkafkaConfig::RegionIdHasBeenSet() const
{
    return m_regionIdHasBeenSet;
}

string LogDeliveryCkafkaConfig::GetVpcId() const
{
    return m_vpcId;
}

void LogDeliveryCkafkaConfig::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool LogDeliveryCkafkaConfig::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string LogDeliveryCkafkaConfig::GetSubnetId() const
{
    return m_subnetId;
}

void LogDeliveryCkafkaConfig::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool LogDeliveryCkafkaConfig::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

int64_t LogDeliveryCkafkaConfig::GetHealthy() const
{
    return m_healthy;
}

void LogDeliveryCkafkaConfig::SetHealthy(const int64_t& _healthy)
{
    m_healthy = _healthy;
    m_healthyHasBeenSet = true;
}

bool LogDeliveryCkafkaConfig::HealthyHasBeenSet() const
{
    return m_healthyHasBeenSet;
}

int64_t LogDeliveryCkafkaConfig::GetLogType() const
{
    return m_logType;
}

void LogDeliveryCkafkaConfig::SetLogType(const int64_t& _logType)
{
    m_logType = _logType;
    m_logTypeHasBeenSet = true;
}

bool LogDeliveryCkafkaConfig::LogTypeHasBeenSet() const
{
    return m_logTypeHasBeenSet;
}

string LogDeliveryCkafkaConfig::GetTopicId() const
{
    return m_topicId;
}

void LogDeliveryCkafkaConfig::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool LogDeliveryCkafkaConfig::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

string LogDeliveryCkafkaConfig::GetTopicName() const
{
    return m_topicName;
}

void LogDeliveryCkafkaConfig::SetTopicName(const string& _topicName)
{
    m_topicName = _topicName;
    m_topicNameHasBeenSet = true;
}

bool LogDeliveryCkafkaConfig::TopicNameHasBeenSet() const
{
    return m_topicNameHasBeenSet;
}

int64_t LogDeliveryCkafkaConfig::GetStatus() const
{
    return m_status;
}

void LogDeliveryCkafkaConfig::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool LogDeliveryCkafkaConfig::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string LogDeliveryCkafkaConfig::GetStatusMessages() const
{
    return m_statusMessages;
}

void LogDeliveryCkafkaConfig::SetStatusMessages(const string& _statusMessages)
{
    m_statusMessages = _statusMessages;
    m_statusMessagesHasBeenSet = true;
}

bool LogDeliveryCkafkaConfig::StatusMessagesHasBeenSet() const
{
    return m_statusMessagesHasBeenSet;
}

int64_t LogDeliveryCkafkaConfig::GetIsOpen() const
{
    return m_isOpen;
}

void LogDeliveryCkafkaConfig::SetIsOpen(const int64_t& _isOpen)
{
    m_isOpen = _isOpen;
    m_isOpenHasBeenSet = true;
}

bool LogDeliveryCkafkaConfig::IsOpenHasBeenSet() const
{
    return m_isOpenHasBeenSet;
}

