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

#include <tencentcloud/ckafka/v20190819/model/ModifyInstanceAttributesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

ModifyInstanceAttributesRequest::ModifyInstanceAttributesRequest() :
    m_instanceIdHasBeenSet(false),
    m_msgRetentionTimeHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_configHasBeenSet(false),
    m_dynamicRetentionConfigHasBeenSet(false),
    m_rebalanceTimeHasBeenSet(false),
    m_publicNetworkHasBeenSet(false),
    m_dynamicDiskConfigHasBeenSet(false),
    m_maxMessageByteHasBeenSet(false),
    m_uncleanLeaderElectionEnableHasBeenSet(false),
    m_deleteProtectionEnableHasBeenSet(false)
{
}

string ModifyInstanceAttributesRequest::ToJsonString() const
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

    if (m_msgRetentionTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MsgRetentionTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_msgRetentionTime, allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_configHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Config";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_config.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_dynamicRetentionConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DynamicRetentionConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dynamicRetentionConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_rebalanceTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RebalanceTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_rebalanceTime, allocator);
    }

    if (m_publicNetworkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicNetwork";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_publicNetwork, allocator);
    }

    if (m_dynamicDiskConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DynamicDiskConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dynamicDiskConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_maxMessageByteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxMessageByte";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxMessageByte, allocator);
    }

    if (m_uncleanLeaderElectionEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UncleanLeaderElectionEnable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_uncleanLeaderElectionEnable, allocator);
    }

    if (m_deleteProtectionEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeleteProtectionEnable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_deleteProtectionEnable, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyInstanceAttributesRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyInstanceAttributesRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyInstanceAttributesRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t ModifyInstanceAttributesRequest::GetMsgRetentionTime() const
{
    return m_msgRetentionTime;
}

void ModifyInstanceAttributesRequest::SetMsgRetentionTime(const int64_t& _msgRetentionTime)
{
    m_msgRetentionTime = _msgRetentionTime;
    m_msgRetentionTimeHasBeenSet = true;
}

bool ModifyInstanceAttributesRequest::MsgRetentionTimeHasBeenSet() const
{
    return m_msgRetentionTimeHasBeenSet;
}

string ModifyInstanceAttributesRequest::GetInstanceName() const
{
    return m_instanceName;
}

void ModifyInstanceAttributesRequest::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool ModifyInstanceAttributesRequest::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

ModifyInstanceAttributesConfig ModifyInstanceAttributesRequest::GetConfig() const
{
    return m_config;
}

void ModifyInstanceAttributesRequest::SetConfig(const ModifyInstanceAttributesConfig& _config)
{
    m_config = _config;
    m_configHasBeenSet = true;
}

bool ModifyInstanceAttributesRequest::ConfigHasBeenSet() const
{
    return m_configHasBeenSet;
}

DynamicRetentionTime ModifyInstanceAttributesRequest::GetDynamicRetentionConfig() const
{
    return m_dynamicRetentionConfig;
}

void ModifyInstanceAttributesRequest::SetDynamicRetentionConfig(const DynamicRetentionTime& _dynamicRetentionConfig)
{
    m_dynamicRetentionConfig = _dynamicRetentionConfig;
    m_dynamicRetentionConfigHasBeenSet = true;
}

bool ModifyInstanceAttributesRequest::DynamicRetentionConfigHasBeenSet() const
{
    return m_dynamicRetentionConfigHasBeenSet;
}

int64_t ModifyInstanceAttributesRequest::GetRebalanceTime() const
{
    return m_rebalanceTime;
}

void ModifyInstanceAttributesRequest::SetRebalanceTime(const int64_t& _rebalanceTime)
{
    m_rebalanceTime = _rebalanceTime;
    m_rebalanceTimeHasBeenSet = true;
}

bool ModifyInstanceAttributesRequest::RebalanceTimeHasBeenSet() const
{
    return m_rebalanceTimeHasBeenSet;
}

int64_t ModifyInstanceAttributesRequest::GetPublicNetwork() const
{
    return m_publicNetwork;
}

void ModifyInstanceAttributesRequest::SetPublicNetwork(const int64_t& _publicNetwork)
{
    m_publicNetwork = _publicNetwork;
    m_publicNetworkHasBeenSet = true;
}

bool ModifyInstanceAttributesRequest::PublicNetworkHasBeenSet() const
{
    return m_publicNetworkHasBeenSet;
}

DynamicDiskConfig ModifyInstanceAttributesRequest::GetDynamicDiskConfig() const
{
    return m_dynamicDiskConfig;
}

void ModifyInstanceAttributesRequest::SetDynamicDiskConfig(const DynamicDiskConfig& _dynamicDiskConfig)
{
    m_dynamicDiskConfig = _dynamicDiskConfig;
    m_dynamicDiskConfigHasBeenSet = true;
}

bool ModifyInstanceAttributesRequest::DynamicDiskConfigHasBeenSet() const
{
    return m_dynamicDiskConfigHasBeenSet;
}

uint64_t ModifyInstanceAttributesRequest::GetMaxMessageByte() const
{
    return m_maxMessageByte;
}

void ModifyInstanceAttributesRequest::SetMaxMessageByte(const uint64_t& _maxMessageByte)
{
    m_maxMessageByte = _maxMessageByte;
    m_maxMessageByteHasBeenSet = true;
}

bool ModifyInstanceAttributesRequest::MaxMessageByteHasBeenSet() const
{
    return m_maxMessageByteHasBeenSet;
}

int64_t ModifyInstanceAttributesRequest::GetUncleanLeaderElectionEnable() const
{
    return m_uncleanLeaderElectionEnable;
}

void ModifyInstanceAttributesRequest::SetUncleanLeaderElectionEnable(const int64_t& _uncleanLeaderElectionEnable)
{
    m_uncleanLeaderElectionEnable = _uncleanLeaderElectionEnable;
    m_uncleanLeaderElectionEnableHasBeenSet = true;
}

bool ModifyInstanceAttributesRequest::UncleanLeaderElectionEnableHasBeenSet() const
{
    return m_uncleanLeaderElectionEnableHasBeenSet;
}

int64_t ModifyInstanceAttributesRequest::GetDeleteProtectionEnable() const
{
    return m_deleteProtectionEnable;
}

void ModifyInstanceAttributesRequest::SetDeleteProtectionEnable(const int64_t& _deleteProtectionEnable)
{
    m_deleteProtectionEnable = _deleteProtectionEnable;
    m_deleteProtectionEnableHasBeenSet = true;
}

bool ModifyInstanceAttributesRequest::DeleteProtectionEnableHasBeenSet() const
{
    return m_deleteProtectionEnableHasBeenSet;
}


